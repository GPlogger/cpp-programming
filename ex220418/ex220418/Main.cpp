#include <iostream>
using namespace std;
class Point 
{
private:
	int* x = nullptr;
	int* y = nullptr;
public:
	Point(int _x, int _y)
	{
		x = new int(_x);
		y = new int(_y);

		cout << "Point()" << endl;
	}
	Point(const Point &arg)
	{
		x = new int();
		y = new int();
		*x = *arg.x;
		*y = *arg.y;
		cout << "deep copy" << endl;
	}
	~Point()
	{
		delete x;
		delete y;
		cout << "~Point()" << endl;
	}
	void Print() const
	{
		cout << *x << ", " << *y << endl;
	}
};

int main()
{
	Point pt1(2, 3);
	Point pt2(pt1);

	pt1.Print();
	pt2.Print();
}





//// 참조 상태 객체를 만들고 deep copy를 구현
//#include <iostream>
//using namespace std;
//class Point 
//{
//	int* px = nullptr;
//	int* py = nullptr;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		px = new int(_x);
//		py = new int(_y);
//
//		cout << "Point()" << endl;
//	}
//	Point(const Point& arg)
//	{
//		px = new int();
//		*px = *arg.px;
//		py = new int();
//		*py = *arg.py;
//		cout << "copy Point()" << endl;
//	}
//	~Point() 
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << *px << ", " << *py << endl;
//	}
//};
//int main()
//{
//	Point pt1(1, 2);
//	pt1.Print();
//
//	Point pt2(pt1);
//	pt2.Print();
//
//}

//#include <iostream>
//using namespace std;
//class Point	// 값 상태 객체
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt(2, 3);
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//class Point	// 참조 상태 객체	: 사용자 정의 복사 생성자를 만들어 deep copy를 해야 한다.
//{
//	int* px = nullptr;
//	int* py = nullptr;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		px = new int(_x);
//		py = new int(_y);
//		cout << "Point()" << endl;
//	}
//	// 기본 복사 생성자 <= shallow copy
//	Point(const Point& arg)	// 사용자 정의 복사 생성자 <= deep copy
//	{
//		px = new int();
//		*px = *arg.px;
//		py = new int();
//		*py = *arg.py;
//		cout << "copy Point()" << endl;
//	}
//	~Point() // 소멸자에 delete가 필요함
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << *px << ", " << *py << endl;
//	}
//};
//void PrintPoint(Point arg)	// 복사 생성자 호출2. 매개변수의 인수로 객체를 전달(값객체)
//{
//	arg.Print();
//}
//Point CreatePoint()
//{
//	Point temp;
//
//	return temp;		// 복사 생성자 호출 3. 함수의 반환 값으로 객체를 전달할 때(값객체)
//}
//int main()
//{
//	Point pt = CreatePoint();
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//class Point	// 참조 포인트
//{
//	int* px = nullptr;
//	int* py = nullptr;
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		px = new int(_x);
//		py = new int(_y);
//		cout << "Point()" << endl;
//	}
//	// 기본 복사 생성자 <= shallow copy
//	Point(const Point& arg)	// 사용자 정의 복사 생성자 <= deep copy
//	{
//		px = new int();
//		*px = *arg.px;
//		py = new int();
//		*py = *arg.py;
//		cout << "copy Point()" << endl;
//	}
//	~Point() // 소멸자에 delete가 필요함
//	{ 
//		delete px;
//		delete py;
//		cout << "~Point()" << endl; 
//	}
//	void Print() const
//	{
//		cout << *px << ", " << *py << endl;
//	}
//};
//void PrintPoint(Point arg)	// 복사 생성자 호출2. 매개변수의 인수로 객체를 전달(값객체)
//{
//	arg.Print();
//}
//int main()
//{
//	Point pt1(2, 3);	//인수 생성자 호출
//	Point pt2(pt1);		//복사 생성자 호출	(1. 개체를 자신의 Type 객체로 대입(복사))
//
//	PrintPoint(pt1);
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x = 0;
//	int y = 0;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//		cout << "Point()" << endl;
//	}
//	Point(const Point& arg)	// 기본 복사 생성자
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "copy Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//
//	Point pt1(1,3);
//	Point pt2(pt1); // Point pt2 = pt1;
//
//	pt1.Print();
//	pt2.Print();
//	// 소멸자가 두번 호출됨
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) 
//	{
//		cout << "Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1;	//복사 생성자 <= 객체를 복사하기 위한 생성자 호출
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		x = _y;
//	}
//};
//int main()
//{
//	Point pt1;			//R, W	(mutable)
//	const Point pt2;	//R		(immutable)
//
//	pt1.SetX(3);
//	//pt2.SetX(1) 안됨
//
//	pt1.Print();
//	pt2.Print();
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//	int x = 1;
//	int y = 0;
//public:
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1;
//	Point pt2;
//
//	pt1.Print();
//	pt2.Print();
//}
