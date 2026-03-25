; Assembly Code example for Pointer Arithmetic
section .data
    arr db 1, 2, 3, 4, 5

section .text
    global _start

_start:
    mov rsi, arr
    mov rcx, 5
.loop:
    mov al, [rsi]
    ; Code to print AL (1-5) would be here
    inc rsi
    loop .loop
    ; Clean exit
    mov rax, 60
    xor rdi, rdi
    syscall
