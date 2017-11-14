 ORG 0000h
 jmp start

 ORG 01BH
 JMP TIMMER2

 ORG 0BH
 JMP TIMER
TIMER:	 mov TL0,#03aH
	   MOV TH0,#0FFH
	   //CLR TF0
       SETB P0.1
	   RETI
TIMMER2: MOV TL1,#03AH
         MOV TH1,#0FFH
		 CLR TF0
		 SETB P1.0
		 RETI
start: mov TMOD,#00010001
       mov TL0,#03aH
	   MOV TH0,#0FFH
	   MOV TL1,#03AH
	   MOV TH1,#0FFH
	   CLR TF0
	   SETB TR0
	   SETB TR1
	   MOV IE,#082H
	   MOV IE,#088H
LOOP: SJMP LOOP
       END