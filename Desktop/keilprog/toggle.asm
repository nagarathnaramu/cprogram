 org 0
 mov sp,#7h
 back:clr p0.0
 setb p0.0
 acall delay
 
 delay: mov r1,#0ffh
 loop: djnz r1,loop
 sjmp back
 end