//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include "cusror.h"
//
//class Point
//{
//protected:
//	int x, y;
//	char ch;
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	/* ��� �Լ��� ȣ���ϴ� �ٸ� ��� �Ѽ��� Ŭ�������� �ٸ��� ���ǵǾ� �ִٸ� �� �Լ��� ��������
//		�����ؾ� �Ѵ�.*/
//	void virtual show() {
//		gotoxy(x, y); _putch(ch);
//	}
//	void virtual hide() {
//		gotoxy(x, y); _putch(' ');
//	}
//	void move(int nx, int ny) {
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point
//{
//protected:
//	int radius;
//
//public:
//	Circle(int ax, int ay, char ach, int arad) :Point(ax, ay, ach) { radius = arad; }
//	void show() {
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			_putch(ch);
//		}
//	}
//
//	void hide() {
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			_putch(' ');
//		}
//	}
//};
//
//int main()
//{
//	Point p(1, 1, 'P');
//	Circle c(20, 10, 'C', 12);
//
//	p.show();
//	c.show();
//
//	_getch();
//	p.move(40, 1);
//	_getch();
//	c.move(40, 10);
//	_getch();
//
//}
