#include <stdio.h>
#include "printm.h"
#include "fpop.h"

int main() {
	while (1) {
		printm();/*��� ���� printm.h�� printm.cpp���� ���� �Լ��� ����*/
		printf("�޴��� �����Ͻÿ�:");
		int key;
		scanf_s("%d", &key);
		int x, y, result;
		int (*pf)(int, int);/*������ �Լ��� �̿�*/
		/*pf�� fpop.cpp���� ���� �Լ��� switch�� �̿��Ͽ� key�� ���� ���� �ٸ��� �����Ͽ� ����*/
		switch (key) {
		case 0:
			printf("2���� ������ �Է��Ͻÿ�:");
			scanf_s("%d %d", &x, &y);
			pf = plus;
			result = pf(x, y);
			printf("������=%d+%d=%d\n",x,y,result);
			break;
		case 1:
			printf("2���� ������ �Է��Ͻÿ�:");
			scanf_s("%d %d", &x, &y);
			pf = minus;
			result = pf(x, y);
			printf("������=%d-%d=%d\n", x, y, result);
			break;
		case 2:
			printf("2���� ������ �Է��Ͻÿ�:");
			scanf_s("%d %d", &x, &y);
			pf = mul;
			result = pf(x, y);
			printf("������=%d*%d=%d\n", x, y, result);
			break;
		case 3:
			printf("2���� ������ �Է��Ͻÿ�:");
			scanf_s("%d %d", &x, &y);
			pf = dev;
			result = pf(x, y);
#ifdef DEBUG
			printf("%d %d %d %lf", x, y, result, result);
#endif
			printf("������=%d/%d=%d\n", x, y, result);
			break;
		case 4:
			printf("��ǻ�����α׷��� �� ���� �����մϴ�\n");
			printf("�а�:��ǻ�� ���ڽý��۰��к�\n");
			printf("�г�:1�г�\n");
			printf("�й�:202000447\n");
			printf("�̸�:�����\n");
			break;
		}
		printf("\n");
		if (key == 4)
			break;/*key�� 4�϶� while���� �����Ѵ�*/
	}
}
