//#include <stdio.h>
//
//template <typename T>
//void swap(T& a, T& b)
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
///* Ư�� Ÿ�Կ� ���� �ణ �ٸ��� �����ϴ� �Լ��� ����� �ʹٸ� �ش� Ÿ�Կ� ���� ������ �Լ��� ������ �� 
//	�ִµ� �̸� Ư��ȭ ��� �Ѵ�.
//	template <> void swap<>(double &a, double &b) ����
//	template <> void swap(double &a, double &b) ����*/
//template <> void swap<double>(double& a, double& b)
//{
//	int i, j;
//
//	i = (int)a;
//	j = (int)b;
//	a = a - i + j;
//	b = b - j + i;
//}
//
//int main()
//{
//	double a = 1.2, b = 3.4;
//	printf("a = %g, b = %g\n", a, b);
//	swap(a, b);
//	printf("a = %g, b = %g\n", a, b);
//}