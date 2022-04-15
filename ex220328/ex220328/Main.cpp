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
	// �⺻ ������ ȣ��
	Point pt1;	//R,W(mutable)
	const Point pt2;	//R(immutable)

	pt1.SetX(10);
	// pt2.SetX(10);	const�� �پ������Ƿ� ���� �Ұ�.

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
//	// �⺻ ������ ȣ��
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
//	// ������ x
//	//Point() :x(1), y(0) {}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	// �⺻ ������ ȣ��
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
//	Point(int _x, int _y) {	//������ �޼ҵ�
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
//	Point pt2;		//������ �޼ҵ尡 �μ��� ���� �� �ʱ�ȭ���� ������ ����
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
//	Point(int _x = 0, int _y = 0) {	//������ �޼ҵ�
//		x = _x;
//		y = _y;
//	}
//	void Print() const		//����x
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
//void PrintPoint(const Point* arg)	//��ü�� ������� �ʾƾ� �ϹǷ� ������ �ؾ���
//{
//	arg->Print();
//}
//int main()
//{
//	// pt - stack ��ü (���ÿ� ������)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(�������) nullptr(���c++)
//	p = new Point(4, 5);
//
//	// pt.Print(); �Լ��� ����
//	PrintPoint(&pt);
//	// p->Print(); �Լ�����
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
//	Point(int _x = 0, int _y = 0) {	//������ �޼ҵ�
//		x = _x;
//		y = _y;
//	}
//	void Print() const		//����x
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
//void PrintPoint(const Point& arg)	//��ü�� ������� �ʾƾ� �ϹǷ� ������ �ؾ���
//{
//	arg.Print();
//}
//int main()
//{
//	// pt - stack ��ü (���ÿ� ������)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(�������) nullptr(���c++)
//	p = new Point(4, 5);
//
//	// pt.Print(); �Լ��� ����
//	PrintPoint(pt);
//	// p->Print(); �Լ�����
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
//	Point(int _x = 0, int _y = 0) {	//������ �޼ҵ�
//		x = _x;
//		y = _y;
//	}
//	void Print()	//�������̽� �޼ҵ�
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
//	// pt - stack ��ü (���ÿ� ������)
//	Point pt(2, 3);
//
//	Point* p = nullptr;	// NULL(�������) nullptr(���c++)
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
//	Point(int _x = 0, int _y = 0) {	//������ �޼ҵ�
//		x = _x;
//		y = _y;
//	}
//	void Print()	//�������̽� �޼ҵ�
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
