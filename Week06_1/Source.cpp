#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char str[50];
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		if ((str[i] >= 'A') && (str[i] <= 'Z')){
			printf("%c", str[i] + 32);
		}
		if ((str[i] >= 'a') && (str[i] <= 'z')) {
			printf("%c", str[i] - 32);
		}
		i += 1;
	}
	
	return 0;
}