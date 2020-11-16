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
//	/* ������ ��ȯ�� �ƴ� ��� NULL�� �����Ͽ� ������ ��ȯ�� �㰡���� �ʴ´�. 
//	dynamic_cast�� ��� ������ �����ͳ��� ��ȯ�� �� ����ϴµ� ���۷����� ���ؼ��� ����� �� �ִ�.
//	�ٸ� ���۷����� NULL�� �����Ƿ� ĳ������ �� ���� �� bad_cast ���ܸ� ������. ���۷����� ����
//	�� ĳ������ ������ ���� �ڵ带 try ��Ͽ� �ۼ��ϰ� bad_cast ���ܸ� ó���ؾ� �Ѵ�. */
//	Child* c = dynamic_cast<Child*>(p);
//	if (c) {
//		c->PrintNum();
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