//#include "cusror.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av):x(ax), y(ay), value(av){}
//	void outvalue() {
//		gotoxy(x, y);
//		cout << value << endl;
//	}
//};
//
//template <> class PosValue<double>
//{
//private:
//	int x, y;
//	double value;
//public:
//	PosValue(int ax, int ay, double av):x(ax),y(ay),value(av){}
//	void outvalue() {
//		gotoxy(x, y);
//		cout << "[" << value << "]" << endl;
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2);
//	PosValue<char> cv(25, 5, 'C');
//	PosValue<double> dv(30, 15, 3.14);
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//
///* �κ� Ư��ȭ : ���ø� �μ��� ���� �� ���� �� ���� �ϳ��� ���ؼ��� Ư��ȭ �ϴ� ��.
//	template<typename T1, typename T2> class SomeClass{...}
//	template<typename T1> class SomeClass<T1, double> {...} */