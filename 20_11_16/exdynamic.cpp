//#include <stdio.h>
//
//class SomeClass {};
//
//void calc() throw(int)
//{
//	SomeClass obj;
//	char* p = new char[1000];
//
//	if (true/*���� �߻�*/) throw 1;
//	/* throw�� �޺κ��� �����ϰ� ���� �ڵ鷯�� ������ ������ ������ delete[]�� ȣ����� �ʴ´�.*/
//	delete[] p;
//}
//
//int main()
//{
//	try {
//		calc();
//	}
//	catch (int) {
//		puts("������ ���� �߻�");
//	}
//}