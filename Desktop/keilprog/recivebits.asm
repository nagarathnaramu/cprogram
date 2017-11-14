org 000h
jmp start
 
org 00BH
jmp timmer

timmer:mov a,p0
       mov r4,a

	cjne r3,#00,startdected
	mov a,r4
	rrc a
	JC setbit
	cjne R1,#01, exit
	//thisis start conditions
	mov r3, #01h //start detected.
	jmp exit


setbit:  //HIGH 

          MOV R1,#01H			//Previous bit

		  jmp exit


startdected: inc r2

   //got start, recive next 8 bit	 

        CJNE r2,#09H,stop
         orl a,#01H
         jmp exit

 
 stop://orl a,#01h
	   rrc a
	   jnc reset
	   mov r5,#01h			//declear we recived byte.
	   jc exit 		

reset://intialize all varialble again.
//and exit.
    mov r1,#00H
    mov r2,#00h
	mov r3,#00H
	jmp exit



exit:

		  RETI



start: MOV TMOD,#00000001

       MOV TL0,#0A3H

       MOV TH0,#0FFH

	   CLR TF0

	   MOV IE,#082H

	   SETB TR0

	    MOV R2,#00H

	   MOV R1,#00H

	   mov r3,#00h
	   mov r5,#00h
	   mov p2,#00h

loop3:  

        cjne r5,#01,loop3
        mov p1,#0ffh
        jmp loop3
	  end