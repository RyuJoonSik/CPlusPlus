//#include <stdio.h>
//
//int main()
//{
//	int age = 25;
//	bool isAdult = age > 19;
//	if (isAdult)
//	{
//		puts("�����Դϴ�.");
//	}
//	
//	enum origin{EAST, WEST, SOUTH, NORTH};
//	origin mark = WEST; // Ű���� ���� ����
//	printf("%d ����\n", mark);
//
//	struct SHuman
//	{
//		char name[12];
//		int age;
//		double height;
//	};
//
//	SHuman kim = { "�����", 29, 181.4 }; // Ű���� ���� ����
//	printf("�̸� : %s, ���� : %d\n", kim.name, kim.age);
//
//	int a = 0;
//	printf("�Ǽ� a : %.1lf\n", float(a));
//
//	int* pi;
//
//	pi = new int(4);
//	printf("*pi : %d\n", *pi);
//
//	*pi = 123;
//	printf("*pi : %d\n", *pi);
//
//	delete pi;
//
//	int* ar; 
//
//	ar = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		ar[i] = i;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d��° = %d\n", i, ar[i]);
//	}
//
//	delete[] ar;
//
//	return 0;
//}