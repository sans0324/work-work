#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
	char str[MAX_LENGTH];
	char ch1, ch2;
	int i;
	printf("여러 글자를 입력 : ");


	if (fgets(str, sizeof(str), stdin) == NULL) {
		printf("Error reading input.\n");
		return 1;
	}

	str[strcspn(str, "\n")] = '\0';

	if (strlen(str) == MAX_LENGTH - 1 && str[MAX_LENGTH - 2] != '\n') {
		printf("Input is too long.\n");
		return 1;
	}

	printf("기존 문자와 새로운 문자를 입력 :");
	if (scanf(" %c %c", &ch1, &ch2) != 2) {
		printf("Error reading characters.\n");
		return 1;
	}

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ch1) {
			str[i] = ch2;
		}

	}
	printf("변환된 결과 ==> %s\n",str);

	return 0;
	
}