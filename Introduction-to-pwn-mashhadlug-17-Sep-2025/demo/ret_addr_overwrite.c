#include <unistd.h>
#include <stdio.h>
void give_shell(){
	execl("/bin/sh", "/bin/sh", NULL);
}
void vuln(){
	int A;
	char buff[2];
	printf("%p\n",give_shell);
	read(STDIN_FILENO, buff, 1000);
}

int main(){
	vuln();
}
