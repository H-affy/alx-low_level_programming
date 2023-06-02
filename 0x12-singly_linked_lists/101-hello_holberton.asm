extern printf
global main
main:
push rbp
mov rdi,format
mov rsi,msg
mov rax,0
call printf
pop rbp
mov rax,0
ret
msg: db "Hello, Holberton", 0
format: db "%s", 10, 0
