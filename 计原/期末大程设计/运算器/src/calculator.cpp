#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "integer.h"
#include "float.h"

int main(void)
{
	char num1[33], num2[33];
	char* p = NULL;
	word m, n, result;
	char op;
	int option;

	printf("��ӭʹ��������ģ������\n\n");

	while (1) {
		printf("��ѡ���������0-���� 1-����������");
		scanf("%d", &option);
		getchar();
		switch (option) {
		case 0:
			printf("�������������+��-��*��/��%%��");
			scanf("%c", &op);
			printf("����������������");
			scanf("%s", num1);
			getchar();
			scanf("%s", num2);
			getchar();
			m = atom(num1);
			n = atom(num2);
			switch (op) {
			case '+':
				result = madd(m, n);
				p = mtoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '-':
				result = msub(m, n);
				p = mtoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '*':
				result = mmul(m, n);
				p = mtoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '/':
				if (num2) {
					result = mdiv(m, n);
					p = mtoa(result);
					printf("���Ϊ��");
					printf("%s\n\n", p);
				}
				else printf("Error�� ��������Ϊ0��\n\n");
				break;
			case '%':
				if (num2) {
					result = mmod(m, n);
					p = mtoa(result);
					printf("���Ϊ��");
					printf("%s\n\n", p);
				}
				else printf("Error�� ��������Ϊ0��\n\n");
				break;
			default:
				printf("Error�� ��Ч���������\n\n");
			}
			break;
		case 1:
			printf("�������������+��-��*��/��");
			scanf("%c", &op);
			printf("������������������");
			scanf("%s", num1);
			getchar();
			scanf("%s", num2);
			getchar();
			m = atof(num1);
			n = atof(num2);
			switch (op) {
			case '+':
				result = fadd(m, n);
				p = ftoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '-':
				result = fsub(m, n);
				p = ftoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '*':
				result = fmul(m, n);
				p = ftoa(result);
				printf("���Ϊ��");
				printf("%s\n\n", p);
				break;
			case '/':
				if (num2) {
					result = fdiv(m, n);
					p = ftoa(result);
					printf("���Ϊ��");
					printf("%s\n\n", p);
				}
				else printf("Error�� ��������Ϊ0��\n\n");
				break;
			default:
				printf("Error�� ��Ч���������\n\n");
			}
			break;
		default:
			printf("Error����ѡ���������󲻴��ڣ�\n\n");
		}
	}
	return 0;
}