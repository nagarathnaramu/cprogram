	org 00

	jmp start

	

	org 0Bh

		JMP TIM0




TIM0: 

		MOV TL0, #000H

		MOV TH0, #000H

		

		CJNE R1,#0CH,BIT11

		 MOV P0,#01H

		 DEC R1

		 

		 JMP EXIT

BIT11:

CJNE R1,#0BH,BIT10

		 MOV P0,#01H

         DEC R1	

        JMP EXIT		 

BIT10:

CJNE R1,#0AH,BIT9

		 MOV P0,#01H

		 DEC R1

		 JMP EXIT

BIT9:

       CJNE R1,#09H,BIT8

		 MOV P0,#00H

		 DEC R1

		 JMP EXIT


BIT8:

		CJNE R1,#08H,BIT7

		 MOV P0,#00H

		 DEC R1

		 JMP EXIT

BIT7:

		CJNE R1,#07H,BIT6

		 MOV P0,#01H

		 DEC R1

		 JMP EXIT

BIT6:		 

		CJNE R1,#06H,BIT5

		 MOV P0,#00H

		 DEC R1

		 JMP EXIT

BIT5:

		CJNE R1,#05H,BIT4

		 MOV P0,#01H

		 DEC R1

		 JMP EXIT

BIT4:

		 CJNE R1,#04H,BIT3

		 MOV P0,#00H

		 DEC R1

		 JMP EXIT

BIT3:

		 CJNE R1,#03H,BIT2

		 MOV P0,#00H

		 DEC R1

		 JMP EXIT

BIT2:

		CJNE R1,#02H,BIT1

		 MOV P0,#01H

		 DEC R1

		 JMP EXIT

BIT1:

		CJNE R1,#01H,BIT0

		 MOV P0,#01H

		 DEC R1

		 JMP EXIT

BIT0:

		CJNE R1,#0H,BITEXIT

		 MOV P0,#01H		//STOP OCNDITI0ON

		 //DEC R1

		 JMP EXIT

BITEXIT:

		 MOV R1, #00BH

       	 

SN:		 JMP EXIT		

			

EXIT:

	  RETI

		

	

	org 00120

start: MOV TMOD, #0001H

      MOV TL0, #0FEH

	  MOV TH0, #0FFH

	  MOV R1,#0CH

	  CLR TF0

	  SETB TR0

	  MOV IE,#082H




LOOP:

				

				SJMP LOOP


      END	  

	  

	  