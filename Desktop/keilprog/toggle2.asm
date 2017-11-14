org 0
back:mov p0,#0FFh
     acall delay
     mov p0,#000h
   	  acall delay
	  jmp back
	 
delay:mov r1,#0ffh
 here: djnz r1,here
      ret

	 end