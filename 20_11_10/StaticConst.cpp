//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	/* ��ü���� ���� �޶����� �ʴ� ������ ������ ���� ��� ����� ����
//	���� ��� */
//	static const double pie;
//
//public:
//	// ������
//	enum{value = 123};
//	MathCalc(){}
//	void DoCalc(double r) {
//		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie);
//	}
//};
//
//// ���� ����� �����ڿ��� �ʱ�ȭ �� �� ���� �ܺο��� �����ϸ鼭 �ʱ�ȭ.
//const double MathCalc::pie = 3.1416;
//
//int main()
//{
//	MathCalc m;
//	m.DoCalc(5);
//	printf("%d", m.value);
//}