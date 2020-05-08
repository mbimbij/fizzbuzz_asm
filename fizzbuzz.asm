global fizzbuzz
extern printf

section .data
  print       db  "print %d",0xa,0
  printstr    db  "print %s",0xa,0
  result      db  "result %d",0xa,0
  retvalstr   db  "result str %s",0xa,0
  retval      db  "", 0
  hardcoded   db  "titi",0
  fizz        db  "fizz",0
  buzz        db  "buzz",0
  fizzbuzzstr db  "fizzbuzz",0

section .text

fizzbuzz:
  push ebp
  mov ebp, esp
  ; moves input param to eax
  mov eax, [ebp+8]
  
  ; test input % 3 == 0
  xor edx, edx
  mov ecx, 3
  div ecx
  cmp edx, 0
  je returnFizz

  ; test input % 5 == 0
  mov eax, [ebp+8]
  xor edx, edx
  mov ecx, 5
  div ecx
  cmp edx, 0
  je returnBuzz

  mov eax, [ebp+8]
  jne returnNumber
  

returnNumber:
  ; adds input param value to ascii code of "0" -> when not fizz, buzz or fizzbuzz
  add eax, byte 0x30
  mov [retval], eax
  mov eax, retval
  mov esp, ebp
  pop ebp
  ret

returnFizz:
  mov eax, fizz
  mov esp, ebp
  pop ebp
  ret

returnBuzz:
  mov eax, buzz
  mov esp, ebp
  pop ebp
  ret
