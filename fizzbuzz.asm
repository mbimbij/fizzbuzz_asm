global fizzbuzz
extern printf
extern sprintf
extern malloc

section .data
  printint    db  "print %d",0xa,0
  printstr    db  "print %s",0xa,0
  printptr    db  "print %p",0xa,0
  result      db  "result %d",0xa,0
  retvalstr   db  "result str %s",0xa,0
  retval      db  "", 0
  hardcoded   db  "titi",0
  fizz        db  "fizz",0
  buzz        db  "buzz",0
  fizzbuzzstr db  "fizzbuzz",0
  formatint   db  "%d",0

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

  jne returnNumber
  


returnNumber:
  ; adds input param value to ascii code of "0" -> when not fizz, buzz or fizzbuzz
	push    ebx                                     ; 0000 _ 53
	mov     edi, 3                                  ; 0001 _ BF, 00000003
	call    malloc                                  ; 0006 _ E8, 00000000(PLT r)

  push dword [ebp+8]
  push formatint
  push ebx
	xor     eax, eax                                ; 001D _ 31. C0
	call    sprintf                                 ; 001F _ E8, 00000000(PLT r)
  mov eax, [ebp+8]
  push eax
  push printint
  call printf
  mov eax, ebx
  mov esp, ebp
  pop ebp
  ret

.LC0:                                                   ; byte
	db 25H, 64H, 00H                                ; 0000 _ %d.

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
