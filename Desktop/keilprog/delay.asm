org 0
jmp start

org 000bh
jmp timmer

timmer: mov TL0,#0F0H
        mov TH0,#0D8h
        setb p0.0
        setb TF0
	     RETI

start:mov TMOD,#00000001
      mov TL0,#0F0H
	  mov TH0,#0D8H
	  clr TF0
	  setb TR0
	  mov IE,#082H
loop:
      sjmp loop
	  end