; Declare needed C functions
    extern printf     ; Declare the C function, to be called

section .data        ; Data section, initialized variables
msg db "Hello, Holberton", 0 ; C string needs null termination
fmt db "%s", 10, 0   ; The printf format, "\n", null terminator

section .text        ; Code section.

global main          ; The standard GCC entry point
main:                ; The program label for the entry point
    push rbp          ; Set up a stack frame, must be aligned

    mov rdi, fmt      ; Load the format string address into rdi
    mov rsi, msg      ; Load the message address into rsi
    xor rax, rax      ; Clear RAX (optional, can be set to 0 or used as xor rax, rax)
    call printf       ; Call the C function printf

    pop rbp           ; Restore the stack

    xor rax, rax      ; Set return value to 0 (normal, no error)
    ret               ; Return
