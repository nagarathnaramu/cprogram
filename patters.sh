#! /bin/bash

row=$1
space=5
for((k=0;k<row;k++))
do
for((i=1;i<=space;i++))
do
 echo -ne  " "
 done
for((i=1;i<=k;i++))
do
  echo -ne "*"
  done
 expr  $(( space-- )) 

 done

