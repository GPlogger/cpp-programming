#include <iostream>
using namespace std;
class Point {
	int x = 0;
	int y = 0;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
	{

	}
	void Print() const
	{
		cout << x << ',' << y << endl;
	}
	void SetX(int _x)
	{
		x = _x;
	}
};

int main()
{
	// 기본 생성자 호출
	Point pt1;	//R,W(mutable)
	const Point pt2;	//R(immutable)

	pt1.SetX(10);
	// pt2.SetX(10);	const가 붙어있으므로 변경 불가.

	pt1.Print();
	pt2.Print();
}
//#include <iostream>
//using namespace std;
//class Point {
//	int x = 0;
//	int y = 0;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	// 기본 생성자 호출
//	Point pt1;	//R,W(mutable)
//	const Point pt2;	//R(immutable)
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//	int x = 1;
//	int y = 0;
//public:
//	// 생성자 x
//	//Point() :x(1), y(0) {}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	// 기본 생성자 호출
//	Point pt1;
//	Point pt2;
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//	int x;
//	int y;
//public:
//	Point() {
//		x = 0;
//		y = 0;
//	}
//	Point(int _x, int _y) {	//생성자 메소드
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;		//생성자 메소드가 인수를 받을 때 초기화되지 않으면 오류
//
//	pt1.Print();
//	pt2.Print();
//
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {	//생성자 메소드
//		x = _x;
//		y = _y;
//	}
//	void Print() const		//변경x
//	{
//		cout << x << ',' << y << endl;
//	}
//	int GetX() const
//	{
//		return x;
//	}
//	int GetY() const
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//void PrintPoint(const Point* arg)	//객체는 복사되지 않아야 하므로 참조를 해야함
//{
//	arg->Print();
//}
//int main()
//{
//	// pt - stack 객체 (스택에 생성됨)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(기존사용) nullptr(모던c++)
//	p = new Point(4, 5);
//
//	// pt.Print(); 함수로 제작
//	PrintPoint(&pt);
//	// p->Print(); 함수제작
//	PrintPoint(p);
//	delete p;
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {	//생성자 메소드
//		x = _x;
//		y = _y;
//	}
//	void Print() const		//변경x
//	{
//		cout << x << ',' << y << endl;
//	}
//	int GetX() const
//	{
//		return x;
//	}
//	int GetY() const
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//void PrintPoint(const Point& arg)	//객체는 복사되지 않아야 하므로 참조를 해야함
//{
//	arg.Print();
//}
//int main()
//{
//	// pt - stack 객체 (스택에 생성됨)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(기존사용) nullptr(모던c++)
//	p = new Point(4, 5);
//
//	// pt.Print(); 함수로 제작
//	PrintPoint(pt);
//	// p->Print(); 함수제작
//	PrintPoint(*p);
//	delete p;
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {	//생성자 메소드
//		x = _x;
//		y = _y;
//	}
//	void Print()	//인터페이스 메소드
//	{
//		cout << x << ',' << y << endl;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//int main()
//{
//	// pt - stack 객체 (스택에 생성됨)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(기존사용) nullptr(모던c++)
//	p = new Point(4, 5);
//
//	pt.Print();
//	p->Print();
//
//	delete p;
//
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {	//생성자 메소드
//		x = _x;
//		y = _y;
//	}
//	void Print()	//인터페이스 메소드
//	{
//		cout << x << ',' << y << endl;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt(2, 3);
//	Point* p = &pt;
//	Point& r = pt;
//
//	pt.Print();
//	p->Print();
//	r.Print();
//
//	pt.SetX(10);
//	pt.Print();
//	p->Print();
//	r.Print();
//}
