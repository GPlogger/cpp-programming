#include <iostream>
using namespace std;
class IntVector
{
	int* buf;	// 동적배열(참조상태)
	int sz;
	int capacity;
public:
	IntVector(int cap = 100) :buf(nullptr), sz(0), capacity(cap)
	{
		buf = new int[capacity];
	}
	IntVector(const IntVector& arg) :buf(nullptr), sz(arg.sz), capacity(arg.capacity)
	{
		buf = new int[capacity];
		for (int i = 0; i < sz; i++)
			buf[i] = arg.buf[i];
	}
	~IntVector() { delete[] buf; }
	void Add(int data)
	{
		if (sz < capacity)
			buf[sz++] = data;
		else
			throw "배열의 용량이 초과됨";
	}
	int Size()const { return sz; }
	int At(int idx)const { return buf[idx]; }
};
int main()
{
	IntVector v(1000);
	v.Add(10);
	v.Add(20);
	v.Add(30);
	v.Add(40);
	v.Add(50);

	for (int i = 0; i < v.Size(); i++)
		cout << v.At(i) << ' ';
	cout << endl;

	IntVector v2(v);	//deep copy
	for (int i = 0; i < v2.Size(); i++)
		cout << v2.At(i) << ' ';
	cout << endl;
	
}

//#include <iostream>
//using namespace std;
//class IntVector
//{
//	int* buf;	// 동적배열
//	int sz;
//	int capacity;
//public:
//	IntVector(int cap = 100) :buf(nullptr), sz(0), capacity(cap)
//	{
//		buf = new int[capacity];
//	}
//	~IntVector() { delete[] buf; }
//	void Add(int data)
//	{
//		if (sz < capacity)
//			buf[sz++] = data;
//		else
//			throw "배열의 용량이 초과됨";
//	}
//	int Size()const { return sz; }
//	int At(int idx)const { return buf[idx]; }
//};
//int main()
//{
//	IntVector v(1000);
//	v.Add(10);
//	v.Add(20);
//	v.Add(30);
//	v.Add(40);
//	v.Add(50);
//
//	for (int i = 0; i < v.Size(); i++)
//		cout << v.At(i) << ' ';
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntVector
//{
//	int buf[100] = { 0 };
//	int sz;
//public:
//	IntVector() :sz(0) {}
//	void Add(int data)
//	{
//		buf[sz++] = data;
//	}
//	int Size()const { return sz; }
//	int At(int idx)const { return buf[idx]; }
//};
//int main()
//{
//	IntVector v;	// 컨테이너 객체, 자료구조 객체, 집합 객체, 컬렉션 객체
//
//	v.Add(10);
//	v.Add(20);
//	v.Add(30);
//	v.Add(40);
//	v.Add(50);
//
//	for (int i = 0; i < v.Size(); i++)
//		cout << v.At(i) << ' ';
//	cout << endl;
//
//	IntVector v2 = v;	// 복사 생성자 호출 : shallow copy, 배열은 참조가 아님
//	for (int i = 0; i < v2.Size(); i++)
//		cout << v2.At(i) << ' ';
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntVector
//{
//	int buf[100]={0};
//	int sz;
//public:
//	IntVector() :sz(0) {}
//	void Add(int data)
//	{
//		buf[sz++] = data;
//	}
//	int Size()const { return sz; }
//	int At(int idx)const { return buf[idx]; }
//};
//int main()
//{
//	IntVector v;	// 컨테이너 객체, 자료구조 객체, 집합 객체, 컬렉션 객체
//
//	v.Add(10);
//	v.Add(20);
//	v.Add(30);
//	v.Add(40);
//	v.Add(50);
//
//	for (int i = 0; i < v.Size(); i++)
//		cout << v.At(i) << ' ';
//	cout << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//class IntVector
//{
//	int buf[100];		
//	int sz;
//public:
//	IntVector():sz(0) {}
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const { return sz; }
//	int at(int idx)const { return buf[idx]; }
//};
//int main()
//{
//	IntVector v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v.at(i) << ' ';
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//typedef int I;
//typedef int* PI;
//typedef int** PPI;
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	I b = 20;
//	PI pb = &b;
//	PPI ppb = &pb;
//
//	cout << a << ',' << *pa << ',' << **ppa << endl;
//	cout << b << ',' << *pb << ',' << **ppb << endl;
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//typedef Point* PPoint;
//void AllocArray(Point** pa, int size)
//{
//	for (int i = 0; i < size; ++i)
//		pa[i] = new Point(i + 1, i + 1);
//}
//void PrintArray(const PPoint* pa, int size)
//{
//	for (int i = 0; i < size; ++i)
//		pa[i]->Print();
//}
//void FreeArray(Point** pa, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		delete pa[i];
//		pa[i] = nullptr;
//	}
//}
//int main()
//{
//	PPoint arr[5] = { nullptr };
//
//	AllocArray(arr, 5);
//	PrintArray(arr, 5);
//	FreeArray(arr, 5);
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//void AllocArray(Point** pa, int size)
//{
//	for (int i = 0; i < size; ++i)
//		pa[i] = new Point(i + 1, i + 1);
//}
//int main()
//{
//	Point* arr[5] = { nullptr };
//
//	AllocArray(arr, 5);
//	for (int i = 0; i < 5; ++i)
//		arr[i]->Print();
//	for (int i = 0; i < 5; ++i)
//		delete arr[i];
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//int main()
//{
//	Point* arr[5] = { nullptr };
//	
//	for (int i = 0; i < 5; ++i)
//		arr[i] = new Point(i + 1, i + 1);
//	for (int i = 0; i < 5; ++i)
//		arr[i]->Print();
//	for (int i = 0; i < 5; ++i)
//		delete arr[i];
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x=0, int _y=0) :x(_x), y(_y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//int main()
//{
//	Point arr[5] ={Point(1,1),Point(2,3),Point(3,3)};
//	for (int i = 0; i < 5; i++)
//		arr[i].Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) :x(_x), y(_y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const{ return x; }
//	int GetY() const{ return y; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//struct Data
//{
//	int a;
//	int b;
//	int c;
//
//	void SetData(int a, int b, int c)
//	{
//		this->a = a;
//		this->b = b;
//		this->c = c;
//	}
//	void PrintData()
//	{
//		printf("%d %d %d\n", this->a, this->b, this->c);
//	}
//};
//int main()
//{
//	Data d1 = { 1,2,3 };
//	d1.PrintData();		//PrintData(&d1)
//	d1.SetData(10, 50, 90);
//	d1.PrintData();
//
//}


//#include <iostream>
//using namespace std;
//struct Data
//{
//	int a;
//	int b;
//	int c;
//};
//void SetData(Data* pd, int a, int b, int c)
//{
//	pd->a = a;
//	pd->b = b;
//	pd->c = c;
//}
//void PrintData(const Data* pd)
//{
//	printf("%d %d %d\n", pd->a, pd->b, pd->c);
//}
//int main()
//{
//	Data d1 = { 1,2,3 };
//	PrintData(&d1);
//	SetData(&d1, 10, 50, 90);
//	PrintData(&d1);
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), py(nullptr)
//	{
//		py = new int(_y);
//
//	}
//	Point(const Point& arg) :x(arg.x), py(nullptr)
//	{
//		py = new int(*arg.py);
//	}
//	~Point() { delete py; }
//	void Print () const { cout << x << ',' << *py << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//
//	Point pt2(pt1);
//	pt2.Print();
//
//}

//#include <iostream>
//#include <string>
//using namespace std;
//// 네임스페이스 정의
//namespace MyNameA
//{
//	int x = 10;
//	void Print(int n) { cout << "n: " << n << endl; }
//	struct Data { int k; };
//}
//int main()
//{
//	cout << MyNameA::x << endl;
//	MyNameA::Print(100);
//	MyNameA::Data d = { 200 };
//	cout << d.k << endl;
//}


//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//
//
//int main()
//{
//	string s = "Hello!";
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//
//
//int main()
//{
//	string s = "Hello!";
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//namespace A
//{
//	class Point
//	{
//	public:
//		void Print()const { cout << "A::Print()" << endl; }
//	};
//}
//namespace B
//{
//	class Point
//	{
//	public:
//		void Print()const { cout << "B::Print()" << endl; }
//	};
//}
//// 생략하는 방법
////using A::Point;	// 앞으로 Point는 namespace A를 사용
//using namespace A;	// namespace 전체를 사용
//int main()
//{
//	Point pt1;
//	B::Point pt2;
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//#include <string>	// string 클래스
//using namespace std;
//namespace A
//{
//	class Point
//	{
//	public :
//		void Print()const { cout << "A::Prinmt()" << endl; }
//	};
//}
//namespace B
//{
//	class Point
//	{
//	public:
//		void Print()const { cout << "B::Prinmt()" << endl; }
//	};
//}
//int main()
//{
//	A::Point pt1;
//	B::Point pt2;
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//#include <string>	// string 클래스
//int main()
//{
//	std::string s = "Hello!";
//
//	std::cout << "Hello!" << std::endl;
//	std::cout << s << std::endl;
//}


//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int _x=0, int _y=0) :x(_x), y(_y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() const { cout << x << ", " << y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	const Point cpt1(2, 3);
//
//	pt1.Print();
//	cpt1.Print();
//
//	Point& rpt1 = pt1;
//	Point* ppt1 = &pt1;
//	rpt1.Print();
//	ppt1->Print();
//	
//	const Point& rpt2 = cpt1;
//	const Point* ppt2 = &cpt1;
//	cpt1.Print();
//	rpt2.Print();
//	ppt2->Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int* px = nullptr;
//	int* py = nullptr;
//public:
//	Point(int _x, int _y)
//	{
//		px = new int(_x);
//		py = new int(_y);
//		cout << "Point()" << endl;
//	}
//	Point(const Point& arg)
//	{
//		px = new int();
//		py = new int();
//		*px = *arg.px;
//		*py = *arg.py;
//		cout << "deep copy" << endl;
//	}
//	~Point()
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
//void PrintPoint(Point arg)
//{
//	arg.Print();
//}
//Point CreatPoint(Point temp)
//{
//	return temp;
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(pt1);
//
//	pt1.Print();
//	pt2.Print();
//
//	PrintPoint(pt1);
//	PrintPoint(pt2);
//
//	Point pt3 = CreatPoint(pt1);
//	pt3.Print();
//}