// 기본 생성자				T(){}
// 기본 소멸자				~T(){}
// 기본 복사 생성자			T(const T&){}
// 기본 복사 대입 연산자		const T& operator=(const T&){ return this; }
// 이동 생성자
// 이동 대입 연산자
#include <iostream>
using namespace std;
class Point {
	int x = 1;
	int y = 0;
public:
	// 기본 생성자
	Point() :x(1), y(0) {}
	void Print() const
	{
		cout << x << ", " << y << endl;
	}
};
int main()
{
	Point pt1;
	Point pt2;	// 생성자에서 디폴트 값을 지정했으므로 오류x

	pt1.Print();
	pt2.Print();
}

//#include <iostream>
//using namespace std;
//class Point {
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point() { x = 0; y = 0; }	// 생성자 중복
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;	// 생성자에서 디폴트 값을 지정했으므로 오류x
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;	// 생성자에서 디폴트 값을 지정했으므로 오류x
//
//	pt1.Print();
//	pt2.Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	void Print() const	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//void PrintPoint(const Point* arg);
//int main()
//{
//	// stack 객체
//	Point pt(3, 5);
//
//	// heap 객체
//	Point* p = nullptr;		//NULL을 사용해도 무방하나, 주소0을 표현하기 위해 nullptr 사용
//	p = new Point(4, 5);
//
//	PrintPoint(&pt);
//	PrintPoint(p);
//
//	delete p;
//}
//void PrintPoint(const Point* arg)	// 객체가 복사되지 않도록 const를 항상 붙임
//{
//	arg->Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	void Print() const	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//void PrintPoint(const Point& arg);
//int main()
//{
//	// stack 객체
//	Point pt(3, 5);
//
//	// heap 객체
//	Point* p = nullptr;		//NULL을 사용해도 무방하나, 주소0을 표현하기 위해 nullptr 사용
//	p = new Point(4, 5);
//
//	PrintPoint(pt);
//	PrintPoint(*p);
//
//	delete p;
//}
//void PrintPoint(const Point& arg)	// 객체가 복사되지 않도록 const를 항상 붙임
//{
//	arg.Print();
//}
//#include <iostream>
//using namespace std;
//struct Point {
//private:
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	void Print()	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt(3, 5);
//	pt.Print();
//
//	Point* p = &pt;
//	p->Print();
//
//	Point& rpt = pt;
//	rpt.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point {
//private:
//	int x;	// 정적인 속성
//	int y;
//public:
//	Point(int _x = 0, int _y = 0)
//	{ 
//		x = _x; 
//		y = _y; 
//	}	
//	int GetX() {return x;}
//	int GetY() {return y;}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	void Print()	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt;
//	pt.Print();
//
//	pt.SetX(3);
//	pt.SetY(5);
//	pt.Print();
//
//	cout << pt.GetX() << ", " << pt.GetY() << endl;
//}

//#include <iostream>
//using namespace std;
//struct Point {
//	int x;	// 정적인 속성
//	int y;
//	Point() { x = 0; y = 0; }	// 함수중복을 이용한 초기화
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	void Print()	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1 = { 2,3 };	// Object(객체)
//	Point pt2;
//
//	pt1.Print();
//	pt1.Init(5, 3);
//	pt1.Print();
//
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point {
//	int x;	// 정적인 속성
//	int y;
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	void Print()	// 동적인 함수 (메소드)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1 = { 2,3 };	// Object(객체)
//	cout << pt1.x << ", " << pt1.y << endl;
//
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	const char* name = "김지성";
//	int stnum = 201810110;
//	int age = 24;
//
//	cout << name << ", " << stnum << ", " << age << endl;
//}