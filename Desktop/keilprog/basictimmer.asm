      org 000
      mov TMOD,#001H
loop:mov TH0,#0d8H
     mov TL0,#0f0H
	 clr TF0
	 setb TR0
here:JNB TF0,here
     jmp loop
	 jmp $
	 end