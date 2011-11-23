csl	mar=sp-1;rd				// pulls the second entry in the stack to mdr
csl	z=mdr;if (z) goto exit;			// if the second entry in the stack is 0 ww exit
csl	mar=sp+1;wr				// puts the second entry in the stack to the new 
						// temporaty top of the stack
cslc 	h=tos					// the value at the top of the stack is store 
						// in h
csl	n=h;if (n) goto clsa; else goto clsb
clsa  	tos=tos+1				// in case top of the stack ends with a 1 we add 1
clsb 	opc=h+tos				// the top of the stack is added to itself or to itself
						// plus 1
cls 	mdr=tos=opc;wr				// the new shifted value is placed in the top of the stack
cls	mar=sp-1;rd				// mar is going to point to the second entry
cls	opc=mdr-1				// we decrement the second value
cls	mdr=opc;wr				// the new value is store in mdr and written in the stack
cls	mar=sp					// set mar to point to the first value
cls	z=opc;if (z) goto exit; else goto clsc	// if the second value is zero we finish if not we go to 
						// the label cslc and doit one more time
exit
