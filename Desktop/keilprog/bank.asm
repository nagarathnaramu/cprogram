org 000
mov a,#001H
mov r1,#002H
mov r2,#004H
mov r3,#003H
mov r4,#005H
mov r5,#002H
mov r0,#005H
mov r6,#008H
mov r7,#007H

add a,r0
add a,r1
add a,r2
add a,r3
add a,r4
add a,r5
add a,r6
add a,r7
SETB RS1
mov r0,#009h
mov r1,#007h
add a,r0
add a,r1
mov b,#10h
div ab
jmp $
end