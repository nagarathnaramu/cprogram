  org 0
  mov r1,#0

     inc r1
     mov a,r1
     add a,#10h
     mov r2,a
loop:inc r1
	 mov a,r2
	 add a,#10h
	 mov r2,a
     cjne r1,#10,loop
	 mov p2,r2
	 jmp $
	 end