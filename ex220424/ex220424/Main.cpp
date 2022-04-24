#include <iostream>
#include <vector>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print()const { cout << x << ',' << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }
};
class PointPtrVector
{
	typedef Point* PPoint;
	PPoint* buf;		// 포인트 형식의 주소를 보관
	int size;
	int capacity;
	const PointPtrVector& operator=(const PointPtrVector&);
public:
	PointPtrVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
	{
		buf = new PPoint[capacity];
	}
	PointPtrVector(const PointPtrVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
	{
		buf = new PPoint[capacity];
		for (int i = 0; i < size; i++)
			buf[i] = arg.buf[i];
	}
	~PointPtrVector() { delete[] buf; }
	void Add(const PPoint& data)
	{
		if (size < capacity)
			buf[size++] = data;
		else
			throw "배열의 용량이 초과됨";
	}
	int Size()const { return size; }
	const PPoint& At(int here)const { return buf[here]; }
};
int main()
{
	PointPtrVector ptVecor;	// vector<Point*>
	ptVecor.Add(new Point(2, 3));
	ptVecor.Add(new Point(4, 5));
	ptVecor.Add(new Point(7, 8));

	for (unsigned i = 0; i < ptVecor.Size(); ++i) {
		const Point* p = ptVecor.At(i);
		p->Print();
		cout << p->GetX() * p->GetX() << ',' << p->GetY() * p->GetY() << endl;
	}
	for (unsigned i = 0; i < ptVecor.Size(); ++i)
		delete ptVecor.At(i);
}


//#include <iostream>
//#include <vector>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//class PointPtrVector
//{
//	typedef Point* PPoint;
//	PPoint* buf;		// 포인트 형식의 주소를 보관
//	int size;
//	int capacity;
//	const PointPtrVector& operator=(const PointPtrVector&);
//public:
//	PointPtrVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new PPoint[capacity];
//	}
//	PointPtrVector(const PointPtrVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
//	{
//		buf = new PPoint[capacity];
//		for (int i = 0; i < size; i++)
//			buf[i] = arg.buf[i];
//	}
//	~PointPtrVector() { delete[] buf; }
//	void Add(const PPoint& data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return size; }
//	const PPoint& At(int here)const { return buf[here]; }
//};
//int main()
//{
//	PointPtrVector ptVecor;	// vector<Point*>
//	ptVecor.Add(new Point(2, 3));
//	ptVecor.Add(new Point(4, 5));
//	ptVecor.Add(new Point(7, 8));
//
//	for (unsigned i = 0; i < ptVecor.Size(); ++i) {
//		const Point* p = ptVecor.At(i);
//		p->Print();
//		cout << p->GetX() * p->GetX() << ',' << p->GetY() * p->GetY() << endl;
//	}
//	for (unsigned i = 0; i < ptVecor.Size(); ++i)
//		delete ptVecor.At(i);
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	vector<Point*> ptVecor;	// C++은 참조도 보관이 가능
//	ptVecor.push_back( new Point(2, 3));
//	ptVecor.push_back( new Point(4, 5));
//	ptVecor.push_back( new Point(7, 8));
//
//	for (unsigned i = 0; i < ptVecor.size(); ++i) {
//		const Point* p = ptVecor.at(i);
//		p->Print();
//		cout << p->GetX() * p->GetX() << ',' << p->GetY() * p->GetY() << endl;
//	}
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//class PointVector
//{
//	Point* buf;
//	int size;
//	int capacity;
//	const PointVector& operator=(const PointVector&);
//public:
//	PointVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new Point[capacity];
//	}
//	PointVector(const PointVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
//	{
//		buf = new Point[capacity];
//		for (int i = 0; i < size; i++)
//			buf[i] = arg.buf[i];
//	}
//	~PointVector() { delete[] buf; }
//	void Add(const Point& data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return size; }
//	const Point& At(int here)const { return buf[here]; }
//};
//int main()
//{
//	PointVector ptVecor;//vector<Point>
//	ptVecor.Add(Point(2, 3));
//	ptVecor.Add(Point(4, 5));
//	ptVecor.Add(Point(7, 8));
//
//	for (unsigned i = 0; i < ptVecor.Size(); ++i) {
//		const Point& pt = ptVecor.At(i);
//		pt.Print();
//		cout << pt.GetX() * pt.GetX() << ',' << pt.GetY() * pt.GetY() << endl;
//	}
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	vector<Point> ptVecor;
//	ptVecor.push_back(Point(2, 3));
//	ptVecor.push_back(Point(4, 5));
//	ptVecor.push_back(Point(7, 8));
//
//	for (unsigned i = 0; i < ptVecor.size(); ++i) {
//		const Point& pt = ptVecor.at(i);
//		pt.Print();
//		cout << pt.GetX() * pt.GetX() << ',' << pt.GetY() * pt.GetY() << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//class PointVector
//{
//	Point* buf;
//	int size;
//	int capacity;
//	const PointVector& operator=(const PointVector&);
//public:
//	PointVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new Point[capacity];
//	}
//	PointVector(const PointVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
//	{
//		buf = new Point[capacity];
//		for (int i = 0; i < size; i++)
//			buf[i] = arg.buf[i];
//	}
//	~PointVector() { delete[] buf; }
//	void Add(const Point& data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return size; }
//	const Point& At(int here)const { return buf[here]; }
//};
//int main()
//{
//	PointVector ptVector;
//
//	ptVector.Add(Point(2, 3));
//	ptVector.Add(Point(4, 5));
//	ptVector.Add(Point(7, 8));
//
//	for (int i = 0; i < ptVector.Size(); i++)
//	{
//		const Point& pt = ptVector.At(i);
//		pt.Print();
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//class PointVector
//{
//	Point* buf;
//	int size;
//	int capacity;
//	const PointVector& operator=(const PointVector&);
//public:
//	PointVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new Point[capacity];
//	}
//	PointVector(const PointVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
//	{
//		buf = new Point[capacity];
//		for (int i = 0; i < size; i++)
//			buf[i] = arg.buf[i];
//	}
//	~PointVector() { delete[] buf; }
//	void Add(const Point& data) 
//	{
//		if (size < capacity)
//			buf[size++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return size; }
//	const Point& At(int here)const { return buf[here]; }
//};
//int main()
//{
//	PointVector ptVector;
//
//	ptVector.Add(Point(2, 3));
//	ptVector.Add(Point(4, 5));
//	ptVector.Add(Point(7, 8));
//
//	for (int i = 0; i < ptVector.Size(); i++)
//		ptVector.At(i).Print();
//}

//#include <iostream>
//using namespace std;
//// class 정의
//// Point.h
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0);
//	void Print()const;
//};
//
//// Point.cpp
//// 멤버함수 정의(구현)
//Point::Point(int _x, int _y) :x(_x), y(_y) {}
//void Point::Print()const { cout << x << ',' << y << endl; }
//
//// 클라이언트
//int main()
//{
//	Point pt1(2, 3);
//
//	pt1.Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		buf = new char[strlen(s) + 1];	// 받은 문자열 크기 + NULL문자
//		strcpy_s(buf, strlen(buf) + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//	void append(const char* s)
//	{
//		size_t sz = strlen(s) + strlen(buf) + 1;	// 새로운 크기의 buf를 할당해야 하므로 다시 계산
//		char * t = new char[sz];	// 새로운 크기의 크기만큼 힙메모리에 생성
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, sz, s);			// 새로운 힙 메모리에 받은 문자열 복사
//
//		delete[] buf;				// 기존 buf의 힙메모리 삭제
//		buf = t;					// 새로운 힙 메모리 가리킴
//	}
//	int compare(const char* s)const
//	{
//		return strcmp(buf, s);
//	}
//};
//int main()
//{
//	string s("Hello!");
//
//	cout << s.c_str() << endl;
//
//	s.append("+Hi~");
//	cout << s.c_str() << endl;
//
//	if (s.compare("Hello!a") == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//// string 클래스 구현
//// 문자열 뒤에 더하기
//// 문자열 찾기
//// 모든 문자열 반환
//// 비교
//class String
//{
//	char buf[100];
//public:
//	String(const char* s = "") 
//	{
//		strcpy_s(buf, strlen(buf) + 1, s);
//	}
//	const char* c_str() const 
//	{ 
//		return buf;
//	}
//	void append(const char* s) 
//	{
//		strcat_s(buf, strlen(s) + strlen(buf) + 1, s);
//	}
//	int compare(const char* s)const 
//	{ 
//		return strcmp(buf, s);
//	}
//};
//int main()
//{
//	string s("Hello!");
//
//	cout << s.c_str() << endl;
//
//	s.append("+Hi~");
//	cout << s.c_str() << endl;
//
//	if (s.compare("Hello!a") == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//// string 클래스 구현
//// 문자열 뒤에 더하기
//// 문자열 찾기
//// 모든 문자열 반환
//// 비교
//class String
//{
//	
//public:
//	String(const char* s = "") {}
//	const char* c_str() const { return ""; }
//	void append() {}
//	int compare(const char* s)const { return 0; }
//
//};
//int main()
//{
//	string s("Hello!");
//
//	cout << s.c_str() << endl;
//
//	s.append("+Hi~");
//	cout << s.c_str() << endl;
//
//	if (s.compare("Hello!a") == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//// string 클래스 구현
//// 문자열 뒤에 더하기
//// 문자열 찾기
//// 모든 문자열 반환
//// 비교
//int main()
//{
//	string s = "Hello!";
//
//	cout << s << endl;
//	cout << s.c_str() << endl;
//
//	s += 'a';
//
//	cout << s << endl;
//	cout << s.c_str() << endl;
//
//	if ("Hello!a" == s)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//}

//#include <iostream>
//using namespace std;
//class IntVector
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	IntVector(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new int[capacity];
//	}
//	IntVector(const IntVector& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
//	{
//		buf = new int[capacity];
//		for (int i = 0; i < size; i++)
//			buf[i] = arg.buf[i];
//	}
//	~IntVector() { delete[] buf; }
//	void Add(int data) 
//	{
//		if (size < capacity)
//			buf[size++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return size; }
//	int At(int here)const { return buf[here]; }
//};
//int main()
//{
//	IntVector v1(100);
//
//	v1.Add(10);
//	v1.Add(20);
//	v1.Add(30);
//	v1.Add(40);
//	v1.Add(50);
//
//	for (int i = 0; i < v1.Size(); i++)
//		cout << v1.At(i) << ' ';
//	cout << endl;
//
//	IntVector v2(v1);
//	for (int i = 0; i < v2.Size(); i++)
//		cout << v2.At(i) << ' ';
//	cout << endl;
//}