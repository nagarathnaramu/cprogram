  org 000
  mov a,#10
  mov r1,#20 
  mov r2,#12
  mov r3,#22
  mov 30h,r1
  cjne a,30h,loop1
  jc loop3
  
  loop1: mov a,r1
  mov 30h,r2
  cjne a,30h ,loop2
  jc loop3
  
  loop2:mov a,r2
  mov 30h,r3
  cjne a,30h,loop3
  jc loop3
  loop3: mov r4,a
  end