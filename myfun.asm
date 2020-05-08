extern printf

global myfun
global myfunstr
global my_inc

section .data
  retval db "toto", 0x00
  msg     db  "recu %d",0xa,0

section .text

my_inc:
  push ebp
  mov ebp, esp
  mov eax, [ebp+8]
  push eax
  push msg
  call printf
  mov eax, [ebp+8]
  add eax, 1
  mov esp, ebp
  pop ebp
  ret

myfun:
  mov eax, 47
  ret

myfunstr:
  mov eax, retval
  ret


