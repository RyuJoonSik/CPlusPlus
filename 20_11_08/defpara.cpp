//#include <stdio.h>
//
///* ����Ʈ �μ��� �����ص� ������� �μ��� ���� �⺻���� �����Ͽ�
//	Ȱ�뼺�� ���Ǽ��� ���ÿ� ���� 
//	���� 1: ����Ʈ �μ��� ������ �����ϸ� ���Ǻο��� �������� �ʴ´�.
//		2: ����Ʈ �μ��� �����ʺ��� ������� ������ �� �ִ�.*/
//int GetSum(int from, int into, int step = 1, int base = 0); // ����Ʈ �μ�
//
//int main()
//{
//	printf("%d\n", GetSum(1, 10));
//	printf("%d\n", GetSum(1, 10, 2));
//	printf("%d\n", GetSum(1, 10, 2, 10));
//}
//
//int GetSum(int from, int into, int step/*=1*/, int base /*=0*/)
//{
//	int sum = base;
//	for (int i = from; i <= into; i += step)
//	{
//		sum += i;
//	}
//	return sum;
//}