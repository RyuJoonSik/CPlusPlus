//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1];
//		strcpy(pname, aname);
//		age = aage;
//		printf("%s ��ü�� �����ڰ� ȣ��Ǿ����ϴ�.\n", pname);
//	}
//
//	/* �ı��� : ��ǻ�� �ȿ��� �����ϴ� ��� ���� �׻� �ڽ��� �����Ǳ� ���� ���·� 
//				ȯ���� �������ƾ� �׻��� �����Ѵ�.*/
//	~Human() {
//		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", pname);
//		delete[] pname;
//	}
//
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("����ѹ��ź��̿͵η��", 12);
//	boy.intro();
//}
//
///* ������, �ı��� Ư¡1 : ���ϰ��� ����.
//				   2 : �ܺο��� �ڵ����� ȣ��ǹǷ� public �׼��� �Ӽ��� �������Ѵ�.
//				   3 : �����ڴ� �μ��� ������. �ı��ڴ� �μ��� ���� �ʴ´�.(�����ε� X)
//				   4 : �� �� ����Ʈ�� �ִ�.(�ʱ�ȭ �� �ʿ䰡 ������ �� �� �����ص� ����)
//				   5 : friend�� static�� �� �� ����. �ı��ڴ� ���� �Լ��� ������ �� ������ �����ڴ� X
//				   */
//
