#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char ch1, ch2;
	int i;
	printf("���� ���ڸ� �Է� : ");
	gets(str);

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