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





//// ���� ���� ��ü�� ����� deep copy�� ����
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
//class Point	// �� ���� ��ü
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
//class Point	// ���� ���� ��ü	: ����� ���� ���� �����ڸ� ����� deep copy�� �ؾ� �Ѵ�.
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
//	// �⺻ ���� ������ <= shallow copy
//	Point(const Point& arg)	// ����� ���� ���� ������ <= deep copy
//	{
//		px = new int();
//		*px = *arg.px;
//		py = new int();
//		*py = *arg.py;
//		cout << "copy Point()" << endl;
//	}
//	~Point() // �Ҹ��ڿ� delete�� �ʿ���
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
//void PrintPoint(Point arg)	// ���� ������ ȣ��2. �Ű������� �μ��� ��ü�� ����(����ü)
//{
//	arg.Print();
//}
//Point CreatePoint()
//{
//	Point temp;
//
//	return temp;		// ���� ������ ȣ�� 3. �Լ��� ��ȯ ������ ��ü�� ������ ��(����ü)
//}
//int main()
//{
//	Point pt = CreatePoint();
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//class Point	// ���� ����Ʈ
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
//	// �⺻ ���� ������ <= shallow copy
//	Point(const Point& arg)	// ����� ���� ���� ������ <= deep copy
//	{
//		px = new int();
//		*px = *arg.px;
//		py = new int();
//		*py = *arg.py;
//		cout << "copy Point()" << endl;
//	}
//	~Point() // �Ҹ��ڿ� delete�� �ʿ���
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
//void PrintPoint(Point arg)	// ���� ������ ȣ��2. �Ű������� �μ��� ��ü�� ����(����ü)
//{
//	arg.Print();
//}
//int main()
//{
//	Point pt1(2, 3);	//�μ� ������ ȣ��
//	Point pt2(pt1);		//���� ������ ȣ��	(1. ��ü�� �ڽ��� Type ��ü�� ����(����))
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
//	Point(const Point& arg)	// �⺻ ���� ������
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
//	// �Ҹ��ڰ� �ι� ȣ���
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
//	Point pt1;	//���� ������ <= ��ü�� �����ϱ� ���� ������ ȣ��
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
//	//pt2.SetX(1) �ȵ�
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
