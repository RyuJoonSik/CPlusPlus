//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� : %s, ���� : %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//private:
//	int stunum;
//
//public:
//	/* �θ�κ��� ��ӹ��� ����� �ڽ��� �ʱ�ȭ �� �� ����.
//		��ӹ��� ����� �ʱ�ȭ�� ���� �ʱ�ȭ ����Ʈ���� �θ��� �����ڸ� ȣ���Ͽ�
//		�θ𿡰� ��Ź�Ѵ�. �θ� ��������� �켱������ �ʱ�ȭ�Ѵ�. 
//		���� ������ ��ӹ��� ����� �ݵ�� �ʱ�ȭ ����Ʈ�� �ʱ�ȭ�Ѵ�. */
//	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
//		stunum = astunum;
//	}
//	/*	name ����� private�� ����Ǿ� �ֱ� ������ Human �ڽŸ� ��� �� �� �ִ�.
//	void report() {
//		printf("�̸� : %s, ���� : %d ���� �����մϴ�.\n", name,stunum);
//	}*/
//	void study() {
//		printf("���̴� ��, �̻��� ��, �̻� ��\n");
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29);
//	kim.intro();
//	Student han("���Ѱ�", 15, 123456);
//	han.intro();
//	han.study();
//}