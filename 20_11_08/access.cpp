//#include <stdio.h>
//
//struct SHuman
//{
//	// �ٸ� �����ڰ� ���� �� ���� ���� �Ӽ��� ����
//private : // ���������θ� ���
//	char name[12];
//	int age;
//
//public : // �ڽ��� �Ӽ��̳� ������ �ܺη� �����ϴ� ����̸� �̸� �������̽���� �Ѵ�.
//	void intro() {
//		printf("�̸� = %s, ���� = %d\n", name, age);
//	}
//
//	// ������
//	int getAge() { return age; }
//	void setAge(int aAge) {
//		if (aAge > 0 && aAge < 120) {
//			age = aAge;
//		}
//	}
//};
//
//// protected : �ܺο��� �������� �� ������ ��� ������ �ڽ� Ŭ������ ����
//
//int main()
//{
//	SHuman kim;
//	kim.setAge(286);
//	kim.intro();
//}
//
//// ���� ���� : ��ü�� ������ �������ν� �������� ���̴� ���.