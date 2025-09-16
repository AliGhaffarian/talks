#include <unistd.h>
#include <stdio.h>
void vuln(){
	char buff2[512];
	char buff[2];

	int *rbp_var;
	asm("mov %0, rbp"
			: "=r"(rbp_var));
	printf("%p\n", rbp_var);

	read(STDIN_FILENO, buff, 0x212 + 8 + 8 );
	return;
}
int main(){
	vuln();
}
