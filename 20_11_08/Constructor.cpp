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
//	// ������
//	// ���θ� �ٿ� ��� �̸��� ����(�μ� : aname, ��� : m_name)
//	/*this(��ü �ڽ��� �ǹ��ϴ� ������ ���) Ű���� ���
//		Human(const char *name, int age){
//		strcpy(this->name, name);
//		this->age = age;
//		}
//
//		 Ŭ���� �̸��� ��� �����ڸ� ���
//		 Human(const char *name, int age){
//		 strcpy(Human::name, name);
//		 Human::age = age;
//		 }
//	*/
//
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	// �Ͻ����� ���
//	Human kim("�����", 29); 
//	// ������� ��� : Human kim = Human("�����", 29);
//	kim.intro();
//}