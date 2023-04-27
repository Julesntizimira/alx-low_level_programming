section .data
    message db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main

main:
    ; call printf with message and format arguments
    mov rdi, format
    mov rsi, message
    xor rax, rax
    call printf

    ; exit program
    xor eax, eax
    ret
