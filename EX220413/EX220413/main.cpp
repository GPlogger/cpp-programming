// �⺻ ������				T(){}
// �⺻ �Ҹ���				~T(){}
// �⺻ ���� ������			T(const T&){}
// �⺻ ���� ���� ������		const T& operator=(const T&){ return this; }
// �̵� ������
// �̵� ���� ������
#include <iostream>
using namespace std;
class Point {
	int x = 1;
	int y = 0;
public:
	// �⺻ ������
	Point() :x(1), y(0) {}
	void Print() const
	{
		cout << x << ", " << y << endl;
	}
};
int main()
{
	Point pt1;
	Point pt2;	// �����ڿ��� ����Ʈ ���� ���������Ƿ� ����x

	pt1.Print();
	pt2.Print();
}

//#include <iostream>
//using namespace std;
//class Point {
//	int x;	// ������ �Ӽ�
//	int y;
//public:
//	Point() { x = 0; y = 0; }	// ������ �ߺ�
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
//	Point pt2;	// �����ڿ��� ����Ʈ ���� ���������Ƿ� ����x
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point {
//	int x;	// ������ �Ӽ�
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
//	Point pt2;	// �����ڿ��� ����Ʈ ���� ���������Ƿ� ����x
//
//	pt1.Print();
//	pt2.Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;	// ������ �Ӽ�
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
//	void Print() const	// ������ �Լ� (�޼ҵ�)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//void PrintPoint(const Point* arg);
//int main()
//{
//	// stack ��ü
//	Point pt(3, 5);
//
//	// heap ��ü
//	Point* p = nullptr;		//NULL�� ����ص� �����ϳ�, �ּ�0�� ǥ���ϱ� ���� nullptr ���
//	p = new Point(4, 5);
//
//	PrintPoint(&pt);
//	PrintPoint(p);
//
//	delete p;
//}
//void PrintPoint(const Point* arg)	// ��ü�� ������� �ʵ��� const�� �׻� ����
//{
//	arg->Print();
//}


//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;	// ������ �Ӽ�
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
//	void Print() const	// ������ �Լ� (�޼ҵ�)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//void PrintPoint(const Point& arg);
//int main()
//{
//	// stack ��ü
//	Point pt(3, 5);
//
//	// heap ��ü
//	Point* p = nullptr;		//NULL�� ����ص� �����ϳ�, �ּ�0�� ǥ���ϱ� ���� nullptr ���
//	p = new Point(4, 5);
//
//	PrintPoint(pt);
//	PrintPoint(*p);
//
//	delete p;
//}
//void PrintPoint(const Point& arg)	// ��ü�� ������� �ʵ��� const�� �׻� ����
//{
//	arg.Print();
//}
//#include <iostream>
//using namespace std;
//struct Point {
//private:
//	int x;	// ������ �Ӽ�
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
//	void Print()	// ������ �Լ� (�޼ҵ�)
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
//	int x;	// ������ �Ӽ�
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
//	void Print()	// ������ �Լ� (�޼ҵ�)
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
//	int x;	// ������ �Ӽ�
//	int y;
//	Point() { x = 0; y = 0; }	// �Լ��ߺ��� �̿��� �ʱ�ȭ
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
//	void Print()	// ������ �Լ� (�޼ҵ�)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1 = { 2,3 };	// Object(��ü)
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
//	int x;	// ������ �Ӽ�
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
//	void Print()	// ������ �Լ� (�޼ҵ�)
//	{
//		cout << x << ", " << y << endl;
//	}
//};
//int main()
//{
//	Point pt1 = { 2,3 };	// Object(��ü)
//	cout << pt1.x << ", " << pt1.y << endl;
//
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	const char* name = "������";
//	int stnum = 201810110;
//	int age = 24;
//
//	cout << name << ", " << stnum << ", " << age << endl;
//}