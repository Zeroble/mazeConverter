#include <stdio.h>
#include <string.h>
int main() {
	int strlens;
	char str[500];
	for (;;) {
		gets_s(str);
		strlens = strlen(str);
		for (int i = 0; i < strlens; i += 2) {
			if ((str[i] & 0x80) == 0x80){
				printf("1");
			}
			else printf("0");
		}
		printf("\n");
	}
}