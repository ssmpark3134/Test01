#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int menu;
//	printf("메뉴 선택 : ");
//	scanf("%d", &menu);
//
//	switch (menu) {
//	case 1:
//		printf("생산 시작\n");
//		break;
//	case 2:
//		printf("생산 중지\n");
//		break;
//	case 3:
//		printf("설비 상태 확인\n");
//		break;
//	default:
//		printf("잘못된 입력\n");
//	}
//	return 0;
//}


//if else 문으로 바꾸기
int main()
{
	int menu;
	printf("메뉴를 선택하시오 : ");
	scanf("%d", &menu);
	if (menu == 1) {
		printf("생산시작\n");
	}
	else if (menu == 2) {
		printf("생산 중지\n");
	}
	else if (menu == 3) {
		printf("설비 상태 확인\n");
	}
	else {
		printf("잘못된 입력\n");
	}

	return 0;
}
