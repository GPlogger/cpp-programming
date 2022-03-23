#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) {
		x = _x;
		y = _y;
	}
	void Print()
	{
		cout << x << ',' << y << endl;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int _x)
	{
		x = _x;
	}
	void SetY(int _y)
	{
		y = _y;
	}
};
int main()
{
	Point pt(2, 3);
	Point pt2(4, 5);
	Point* p = &pt;
	Point& rpt = pt;

	pt.Print();
	pt = pt2;	//객체 값복사(shallow copy)

	pt.Print();
	pt2.Print();
	rpt.Print();
	p->Print();
}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
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
//	pt.Print();
//
//	Point* p = &pt;
//	p->Print();
//
//	Point& rpt = pt;		//레퍼런스, 값처럼 쓸 수 있음
//	rpt.Print();
//
//	Point pt2 = pt;			//객체의 값복사(shallow copy)
//	pt2.Print();
//	pt2.SetX(10);
//	pt2.SetY(20);
//	cout << "====================" << endl;
//
//	pt.Print();
//	rpt.Print();
//	p->Print();
//	pt2.Print();
//	p = &pt2;
//	p->Print();	//포인터를 바꿈
//	rpt = pt2;	//레퍼런스이기 때문에 원본pt의 값이 변경됨(할당됨)
//	rpt.Print();
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
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
//	pt.Print();
//
//	Point* p = &pt;
//	p->Print();
//
//	Point& rpt = pt;		//레퍼런스, 값처럼 쓸 수 있음
//	rpt.Print();
//
//	Point pt2 = pt;			//객체의 값복사(shallow copy)
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//	int GetX()
//	{
//		return x;
//	}		//Getter(자신의 멤버상태를 읽음)
//	int GetY()
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}		//Setter(자신의 멤버상태를 씀
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt(2, 3);
//
//	pt.Print();
//	cout << pt.GetX() + pt.GetY() << endl;
//
//	pt.SetX(5);
//	pt.SetY(8);
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
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
//
//	pt.Print();	//pt의 Print()메소드를 호출 >> pt에 출력(Print)메시지를 보냄
//	cout << pt.GetX() + pt.GetY() << endl;
//
//	pt.SetX(5);
//	pt.SetY(8);
//	pt.Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
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
//};
//int main()
//{
//	Point pt(2, 3);
//	
//	pt.Print();	//pt의 Print()메소드를 호출 >> pt에 출력(Print)메시지를 보냄
//	cout << pt.GetX() + pt.GetY() << endl;
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point() {	//함수 중복 이용
//		x = 0;
//		y = 0;
//	}
//	Point(int _x, int _y) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	Point pt1;
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0) {	//기본값
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	Point pt1;
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y) {
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
////서비스코드(서버코드)
////Point 클래스 정의
//struct Point {
//private:	//클래스 내부에서만 사용(비공개)
//	int x;
//	int y;
//public:		//클래스 외부에서도 사용(공개)
//	Point(int _x, int _y){
//		x = _x;
//		y = _y;
//	}
//
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//// 클라이언트 코드
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//	pt1.Print();
//	pt2.Print();
//
//}


//#include <iostream>
//using namespace std;
//struct Point {
//	int x;	//멤버 변수
//	int y;
//	//특수한 멤버함수 : 변수 초기화를 목적
//	Point(int _x, int _y)	//생성자
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()	//멤버 함수
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	struct Point pt1(2, 3); //생성자 사용
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point {
//	int x;	//멤버 변수
//	int y;
//	//특수한 멤버함수 : 변수 초기화를 목적
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()	//멤버 함수
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	struct Point pt1;
//	pt1.Init(2, 3);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point {		// 클래스
//	int x;
//	int y;
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	struct Point pt1 = { 2,3 }; //객체
//
//	cout << pt1.x << ',' << pt1.y << endl;
//	pt1.Print();
//}