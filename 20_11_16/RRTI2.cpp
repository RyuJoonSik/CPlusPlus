//#include <stdio.h>
//#include <typeinfo>
//
//class Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public Parent
//{
//private:
//	int num;
//public:
//	Child(int anum):num(anum){}
//	/* RTTI�� ���� �Լ��� ���� Ŭ������ ���ؼ��� ����� �� �ִ�. */
//	virtual void PrintMe() { printf("I am Child\n"); }
//	void PrintNum() { printf("Hello Child = %d\n", num); }
//};
//
//void func(Parent* p)
//{
//	p->PrintMe();
//	if (typeid(*p) == typeid(Child)) {
//		((Child*)p)->PrintNum();
//	}
//	else {
//		puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�.");
//	}
//}
//
//int main()
//{
//	Parent p;
//	Child c(5);
//
//	func(&c);
//	func(&p);
//}