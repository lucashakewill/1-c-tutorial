#include <stdio.h>

int main() {

	char name[128];
	printf("What is your name?\n");
	scanf("%127s", name); //don't read more than 127 characters-avoids buffer overflow
	printf("Hello, %s\n", name);
	return 0;
}
