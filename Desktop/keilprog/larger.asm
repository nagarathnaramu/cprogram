org 0
mov r1,#34h
mov r2,#43h
mov a,r1
mov 30h,r2
cjne a,30h,loop1
loop1:jc loop2
setb p0.0
loop2:sjmp loop2
end