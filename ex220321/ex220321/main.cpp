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
	pt = pt2;	//��ü ������(shallow copy)

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
//	Point& rpt = pt;		//���۷���, ��ó�� �� �� ����
//	rpt.Print();
//
//	Point pt2 = pt;			//��ü�� ������(shallow copy)
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
//	p->Print();	//�����͸� �ٲ�
//	rpt = pt2;	//���۷����̱� ������ ����pt�� ���� �����(�Ҵ��)
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
//	Point& rpt = pt;		//���۷���, ��ó�� �� �� ����
//	rpt.Print();
//
//	Point pt2 = pt;			//��ü�� ������(shallow copy)
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
//	}		//Getter(�ڽ��� ������¸� ����)
//	int GetY()
//	{
//		return y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}		//Setter(�ڽ��� ������¸� ��
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
//	pt.Print();	//pt�� Print()�޼ҵ带 ȣ�� >> pt�� ���(Print)�޽����� ����
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
//	pt.Print();	//pt�� Print()�޼ҵ带 ȣ�� >> pt�� ���(Print)�޽����� ����
//	cout << pt.GetX() + pt.GetY() << endl;
//}

//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point() {	//�Լ� �ߺ� �̿�
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
//	Point(int _x=0, int _y=0) {	//�⺻��
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
////�����ڵ�(�����ڵ�)
////Point Ŭ���� ����
//struct Point {
//private:	//Ŭ���� ���ο����� ���(�����)
//	int x;
//	int y;
//public:		//Ŭ���� �ܺο����� ���(����)
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
//// Ŭ���̾�Ʈ �ڵ�
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
//	int x;	//��� ����
//	int y;
//	//Ư���� ����Լ� : ���� �ʱ�ȭ�� ����
//	Point(int _x, int _y)	//������
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()	//��� �Լ�
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	struct Point pt1(2, 3); //������ ���
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point {
//	int x;	//��� ����
//	int y;
//	//Ư���� ����Լ� : ���� �ʱ�ȭ�� ����
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()	//��� �Լ�
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
//struct Point {		// Ŭ����
//	int x;
//	int y;
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	struct Point pt1 = { 2,3 }; //��ü
//
//	cout << pt1.x << ',' << pt1.y << endl;
//	pt1.Print();
//}