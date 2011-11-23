csl1	mar=sp=sp-1;rd		// puts the second entry of the stack in mar
csl2 				// wait for the read process to finish
csl3	h=opc=tos		// tos is assigned to opc and h
csl4	h=h+opc			// the shift occurs by adding h to h
cls5 	top=h			// assign h back to top of the stack
