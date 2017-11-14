ORG 0000H
JMP START 
ORG 0BH
JMP TIMMER

TIMMER:MOV a,P0	//preved input data
       mov r4,a

TIMMER2:
		cjne r3,#00,startdected
		mov a,r4
		rrc a
		JC SETBIT
		cjne R1,#01, exit
		//thisis start conditions
		mov r3, #01h //start detected.
		jmp exit
		//LOW



stbit:  //HIGH 
          MOV R1,#01H			//Previous bit
		  jmp exit
startdected:
   //got start, recive next 8 bit	 

	    CJNE A,#01H,TIMMER2



exit:
		  RETI

START: MOV TMOD,#00000001
       MOV TL0,#0A3H
       MOV TH0,#0FFH
	   CLR TF0
	   MOV IE,#082H
	   SETB TR0
	    MOV R2,#00H
	   MOV R1,#00H
	   mov r3,#00h
LOOP3:  
        SJMP LOOP3
        END
