//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("char array");
//
//	/* ��ü�� ���� �����͸� �״�� �����ϹǷ� �ٸ� ������ ���ڿ��� �� �ִ�. */
//	cout << s.data() << endl;
//	/* ������ ���ڿ��� �ƴ� ��� �纻�� �����Ͽ� ������ ���ڿ��� ����� �����Ѵ�. 
//		string��ü�� ���ڿ��� ���� �迭�� �����ϰ� �ʹٸ� ����� ������ �迭�� �����ϰ�
//		strcpy �Լ��� ���ڿ� ��ü�� c_str�Լ��� ������ �����͸� �����Ѵ�.*/
//	cout << s.c_str() << endl;
//
//	char str[128];
//	strcpy(str, s.c_str());
//	printf("str = %s\n", str);
//}