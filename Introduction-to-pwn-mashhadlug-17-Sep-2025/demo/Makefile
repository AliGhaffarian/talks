CFLAGS= -fno-stack-protector -Wl,-z,execstack -Wl,-z,noseparate-code -O0 -masm=intel -g
all: ret_addr_overwrite shellcode_injection
clean:
	rm ret_addr_overwrite shellcode_injection
ret_addr_overwrite: ret_addr_overwrite.c
	gcc $(CFLAGS) ret_addr_overwrite.c -o ret_addr_overwrite
shellcode_injection.c: shellcode_injection.c
	gcc $(CFLAGS) shellcode_injection.c -o shellcode_injection 

