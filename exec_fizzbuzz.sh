#! /bin/bash

nasm -f elf32 fizzbuzz.asm -o fizzbuzz.o
gcc -m32 fizzbuzz.o fizzbuzz.c -o fizzbuzz
./fizzbuzz
