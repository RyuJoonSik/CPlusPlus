//#include <stdio.h>
//
//class Shape
//{
//public:
//	/* �θ� Ŭ������ �ʹ� �Ϲ����̾ ������ ������ �� ���� �� �Լ��� ��ü�� �����ϰ�
//		��� ������� ���� = 0�� �ٿ� ��ü�� ������ ǥ���Ѵ�. 
//		���� ���� �Լ��� �ϳ� �̻� ������ Ŭ������ �߻� Ŭ������� �ϸ� ���� �� �Ϻΰ� ���ǵ��� �ʾ�
//		�ν��Ͻ��� ������ �� ����.
//		��� ������ ���ǵ� Ŭ������ ��ü Ŭ������� �Ѵ�. ��ü Ŭ������ �θ��� ���� �Լ��� ��ü������ �����Ѵ�.
//		�߻� Ŭ������ �����ϴ� ��� ����� �������̽�����Ѵ�.*/
//		
//	virtual void draw() = 0 {
//		// ��ü�� ���� �� �ִ�. ��ü�� ������ �� ����.(�߻� Ŭ����)
//	}
//
//};
//
//class Line : public Shape
//{
//public:
//	virtual void draw() { /*�߻� Ŭ���� �Լ�*/Shape::draw(); puts("���� �߽��ϴ�."); }
//};
//
//class Circle : public Shape
//{
//public:
//	virtual void draw() { puts("���׶�� �׷ȴ� ġ��."); }
//};
//
//class Rect : public Shape
//{
//public:
//	virtual void draw() { puts("��� �簢���Դϴ�."); }
//};
//
//class Triangle : public Shape
//{
//public:
//	virtual void draw() { puts("���� ���� �߰��� �ﰢ���̴�."); }
//};
//
//int main()
//{
//	Shape* pS[3];
//
//	// Shape s;
//	pS[0] = new Line;
//	pS[1] = new Circle;
//	pS[2] = new Rect;
//
//	for (int i = 0; i<3; i++) {
//		/* ���� �Լ��� ������ �������̴�. */
//		pS[i]->draw();
//	}
//	for (int i = 0; i < 3; i++) {
//		delete pS[i];
//	}
//}