#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
	char str[MAX_LENGTH];
	char str[100];
	char ch1, ch2;
	int i;
	printf("���� ���ڸ� �Է� : ");
	gets(str);

	if (fgets(str, sizeof(str), stdin) == NULL) {
		printf("Error reading input.\n");
		return 1;
	}

	printf("���� ���ڿ� ���ο� ���ڸ� �Է� :");
	scanf("%c %c0",&ch1,&ch2);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ch1) {
			str[i] = ch2;
		}

	}
	printf("��ȯ�� ��� ==> %s\n",str);

	return 0;
	
}