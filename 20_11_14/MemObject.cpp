//#include <stdio.h>
//#include <string.h>
//
//class Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d:%d:%d", year, month, day); }
//};
//
//class Product
//{
//private:
//	char name[64];
//	char company[32];
//	/* ���� : ��ü�� ����� �����Ͽ� �ش� Ŭ������ ����� ��Ȱ���ϴ� ���.*/
//	Date validto;
//	int price;
//public:
//	/* ������ ��ü�� ����Ǳ� ���� ������ ����Ʈ���� ���� ��ü�� �ʱ�ȭ.*/
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) :
//		/* Date ����Ʈ �����ڸ� �����ϸ� ������ ���� �����ϴ�.
//		validto = Date(y, m, d);
//		Ŭ������ �ٸ� Ŭ������ ��ü�� �����ϴ� ���踦 HAS A ������ �Ѵ�.(���� ����)
//		IS A : ���, HAS A : ����*/
//		validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("�̸� : %s\n", name);
//		printf("������ : %s\n", company);
//		printf("��ȿ�Ⱓ : ");
//		validto.OutDate();
//		puts("");
//		printf("���� : %d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("�����", "���", 2020, 8, 15, 900);
//	shrimp.OutProduct();
//}