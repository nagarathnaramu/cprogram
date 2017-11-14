org 0
mov TMOD,#001h
mov TH0,#0E0h
mov TL0,#090h
mov p0,#000h
clr TF0
setb TR0
repeat:mov TH0,#0E0h
       mov TL0,#090h

 here: jnb TF0,here
  mov p0,#001h
  clr TF0
  jmp repeat
  end