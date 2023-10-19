global _start
 
SECTION .data
msg db "Hello, Holberton", 0
fmt db "%s", 10, 0

SECTION .text
extern printf
global main
start:
mov rsi, msg
mov rax, fmt
mov rax, 0
call printf

mov eax, 0
ret

