//#include <stdio.h>
//
//class Shape
//{
//public:
//	void virtual draw() { puts("도형 오브젝트입니다."); }
//};
//
//class Line : public Shape
//{
//public:
//	void draw() { puts("선을 긋습니다."); }
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() { puts("동그라미 그렸다 치고."); }
//};
//
//class Rect : public Shape
//{
//public:
//	void draw() { puts("요건 사각형입니다."); }
//};
//
//class Triangle : public Shape
//{
//public:
//	void draw() { puts("나는 새로 추가된 삼각형이다."); }
//};
//
//int main()
//{
//	Shape* ar[] = { new Triangle(), new Rect(), new Circle()};
//
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		/* 가상 함수의 동작이 다형적이다. */
//		ar[i]->draw();
//	}
//	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
//		delete ar[i];
//	}
//}