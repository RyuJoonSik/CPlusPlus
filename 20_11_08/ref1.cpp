//#include <stdio.h>
//
//int main()
//{
//	int i = 3;
//	int& ri = i; // �ʃ������� �ݵ�� ���ü�� ����
//
//	printf("i = %d, ri = %d\n", i, ri);
//	ri++;
//	printf("i = %d, ri = %d\n", i, ri);
//	printf("i���� = %x, ri���� = %x\n", &i, &ri);
//}
//
///* 1. ���۷����� ���ü�� Ÿ���� ������ ��ġ�ؾ��Ѵ�.(int���� short, unsigned�� X)
//   2. ���۷����� ���ü�� ���� �޷θ��� �����ϰ� �ִ� �º����̾� �Ѵ�.(const �����ڸ� ���̸� ����� �⸮ų �� �ִ�.)
//   3. ���۷��� ������ ���ü�� �и��� �����ؾ��Ѵ�.(NULL ���۷��� X)*
//   3�� ����1 : �Լ��� �����μ��� ������� ���۷���, ȣ��� �� ���μ��� �������� �ʱ�ȭ
//		  2 : Ŭ������ ����� ����� ���۷���, �����ڿ��� �ʱ�ȭ
//		  3 : ������ extern ������ ���� �ܺο��� �̹� ���ü�� �����Ǿ� �ִٴ� ��*/