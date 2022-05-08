// ���� : ������ ������ Array Ŭ���� ���� ���� ������ �����
#include<iostream>
using namespace std;
class Array {
    int* buf;
    int size;
    int capacity;
public:
    Array(int cap = 100) :buf(nullptr), size(0), capacity(cap) {
        buf = new int[capacity];
    }
    Array(const Array& arg) :buf(nullptr), size(arg.size), capacity(arg.capacity)
    {
        buf = new int[capacity];
        buf = arg.buf;
    }
    ~Array() {}
    void Add(int data) {
        buf[size++] = data;
    }
    int Size()const { return size; }

    int At(int idx) { return buf[idx]; }
    int& operator[](int idx) { // int ������ �޾ƾ� �ּҸ� �ѱ�� arr[2]�� ��������
        return buf[idx];
    }
};
int main() {
    Array arr;
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);
    arr.Add(40);
    arr.Add(50);

    arr[2] = 100; // arr.buf[2] = 100

    for (int i = 0; i < arr.Size(); i++)
        cout << arr[i] << endl; //arr.operator[](i)

    cout << endl;
    Array arr2 = arr;
    for (int i = 0; i < arr2.Size(); i++)
        cout << arr2[i] << endl; //arr.operator[](i)
}


// 11. ���� ������, ���� ���� ������
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
//	int* px, y;
//public:
//	Point(int x = 0, int y = 0) :px(nullptr), y(y)
//	{
//		px = new int(x);
//	}
//	Point(const Point& arg) :px(nullptr), y(arg.y)
//	{
//		px = new int(*arg.px);
//	}
//	void operator=(const Point& arg)
//	{
//		*px = *arg.px;
//		y = arg.y;
//	}
//	~Point() { delete px; }
//	void Print()const { cout << *px << ',' << y << endl; }
//	int SetX(int x) { *this->px = x; }
//	int SetY(int y) { this->y = y; }
//	int GetX()const { return *px; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2 = p1;
//	Point p3;
//	p3 = p1;  //p3.operator=(p1)
//	p1.Print();
//	p2.Print();
//	p3.Print();
//
//}

// 10. ������ �ߺ�(�迭 ��������)
//#include <iostream>
//#include <string>
//using namespace std;
//class Array
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) :buf(nullptr), size(0), capacity(cap)
//	{
//		buf = new int[capacity];
//	}
//	~Array() { delete[] buf; }
//	void Add(int data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const { return size; }
//	int& operator[](int idx) { return buf[idx]; } // ������ ��ȯ�ϸ� �� ������ ����(������ȯ)
//};
//int main()
//{
//	Array arr;
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	arr.Add(40);
//	arr.Add(50);
//
//	arr[2] = 100; // ���� arr.buf[2] = 100;
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr[i] << endl;    // ���ȣ������(�ε���)
//}

//// 10. �迭 ����
//#include <iostream>
//#include <string>
//using namespace std;
//class Array
//{
// int* buf;
// int size;
// int capacity;
//public:
// Array(int cap=100) :buf(nullptr), size(0), capacity(cap)
// {
//  buf = new int[capacity];
// }
// ~Array() { delete[] buf; }
// void Add(int data)
// {
//  buf[size++] = data;
// }
// int Size()const { return size; }
// int At(int idx)const { return buf[idx]; }
//};
//int main()
//{
// Array arr;
// arr.Add(10);
// arr.Add(20);
// arr.Add(30);
// arr.Add(40);
// arr.Add(50);
//
// for (int i = 0; i < arr.Size(); ++i)
//  cout << arr.At(i) << endl;
//
//}

// 9. ������ �ߺ� 6(���׿�����)
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point operator+(const Point& arg)const
// {
//  return Point(x + arg.x, y + arg.y);
// }
// bool operator==(const Point& arg)const
// {
//  return x == arg.x && y == arg.y;
// }
// const Point& operator+=(const Point& arg) // p1 ��ü�� ���� ���ϹǷ� const x  |  ���� ���� ���ϹǷ� void����(return ����)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // �Ϲ����� ����(��ü �ڽ��� �ּ�(p1))
// }
// const Point& operator++()
// {
//  ++x;
//  ++y;
//  return *this;
// }
// const Point operator++(int) // ���������� ���� int�� �μ��� ����
// {
//  Point t = *this; // ���������̹Ƿ� ���� �� ����Ʈ ����
//  x++;
//  y++;
//  return t;   // ������ü�̹Ƿ� ���� ������ ����
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// p1.Print();
// p2 = p1++; // ���������� �Ķ���Ϳ� 0 // p1.operator++(0)
// p1.Print();
// p2.Print();
//}

// 9. ������ �ߺ� 6(���׿�����)
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point operator+(const Point& arg)const
// {
//  return Point(x + arg.x, y + arg.y);
// }
// bool operator==(const Point& arg)const
// {
//  return x == arg.x && y == arg.y;
// }
// const Point& operator+=(const Point& arg) // p1 ��ü�� ���� ���ϹǷ� const x  |  ���� ���� ���ϹǷ� void����(return ����)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // �Ϲ����� ����(��ü �ڽ��� �ּ�(p1))
// }
// const Point& operator++()
// {
//  x++;
//  y++;
//  return *this;
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// p1.Print();
// ++p1; // ���׿����ڴ� �μ� x
// p2 = ++p1; // ���Կ����ڸ� ����Ϸ��� p1���� ������ ��
// p1.Print();
// p2.Print();
//}


// 8. ������ �ߺ� 5
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point operator+(const Point& arg)const
// {
//  return Point(x + arg.x, y + arg.y);
// }
// bool operator==(const Point& arg)const
// {
//  return x == arg.x && y == arg.y;
// }
// const Point& operator+=(const Point& arg) // p1 ��ü�� ���� ���ϹǷ� const x  |  ���� ���� ���ϹǷ� void����(return ����)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // �Ϲ����� ����(��ü �ڽ��� �ּ�(p1))
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// Point p3;
//   
// p3 = p1 += p2; // ���̵� �������� ���ϵǹǷ� �ȵ�, ���� p1�� ���纻�� ������ ��
// p1.Print();
// p2.Print();
// p3.Print();
//}

// 7. ������ �ߺ� 4
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int SetX(int x) { this->x = x; }
//	int SetY(int y) { this->y = y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	bool operator==(const Point& arg)const
//	{
//		return x == arg.x && y == arg.y;
//	}
//	void operator+=(const Point& arg) // p1 ��ü�� ���� ���ϹǷ� const x  |  ���� ���� ���ϹǷ� void����(return ����)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//};
//int main()
//{
//	Point p1(2, 3), p2(4, 5);
//	p1 += p2;
//	p1.Print();
//	p2.Print();
//}

// 6. ������ �ߺ� 3
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point operator+(const Point& arg)const // ������ ������ �ƴϹǷ� const �޼��带 ����
// //���� ����(&)�� ������ �ȵ�(������ ���� �� �ּҸ� ��ȯ�ϳ�, �ش� �ּҴ� �Լ��� ���� �� �����)
// {
//  return Point(x + arg.x, y + arg.y);
// }
// bool operator==(const Point& arg)const
// {
//  return x == arg.x && y == arg.y;
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// if (p1 == p2)
//  cout << "true" << endl;
// else
//  cout << "false" << endl;
//}

// 5. ������ �ߺ� 2
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point operator+(const Point& arg)const // ������ ������ �ƴϹǷ� const �޼��带 ����
// //���� ����(&)�� ������ �ȵ�(������ ���� �� �ּҸ� ��ȯ�ϳ�, �ش� �ּҴ� �Լ��� ���� �� �����)
// {
//  return Point(x + arg.x, y + arg.y);
// }
//};
//int main()
//{
// int n1 = 10, n2 = 20;
// int n3 = n1 + n2;
//
// Point p1(2, 3);
// Point p2(4, 5);
// Point p3 = p1 + p2;  // ����� ���� Ÿ���� ������
// p3.Print();
//}

// 4. ������ �ߺ���
//#include <iostream>
//#include <string>
//using namespace std;
//class Point
//{
// int x, y;
//public:
// Point(int x = 0, int y = 0) :x(x), y(y) {}
// void Print()const { cout << x << ',' << y << endl; }
// int SetX(int x) { this->x = x; }
// int SetY(int y) { this->y = y; }
// int GetX()const { return x; }
// int GetY()const { return y; }
// const Point& operator+(const Point& arg)
// {
//  return Point(0, 0);
// }
//};
//int main()
//{
// int n1 = 10, n2 = 20;
// int n3 = n1 + n2;
//
// Point p1(2, 3);
// Point p2(4, 5);
// Point p3 = p1.operator+(p2); //p1 + p2;  // ����� ���� Ÿ���� ������
//}

// 3. ���������Լ�
//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//protected:
// string name;
// int age;
//public:
// Person(const string& n = "", int a = 0) :name(n), age(a) {}
// virtual void Print()const = 0;  //���������Լ��� ��ӹ��� ��ü���� ���ǰ� �Ǿ�� ��(������)
//};
//class Student :public Person
//{
// int grade;
//public:
// Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}
// void Print()const {
//  cout << "name : " << name << ", " << "age : " << age << ", grade : " << grade << endl;
// }
//};
//int main()
//{
// Student s1("Kim", 20, 1);
// s1.Print();
// Person& rp = s1;
// rp.Print();
// Person* ps = &s1;
// ps->Print();
//}

/*
Abstract Class(�߻�ȭ Ŭ����) : �߻����� �������� ���� ex)Unit >> virtual ���,
���� �����Լ� : = 0 >> ��ü�� ������ ���� �ʴٴ� ��
�߻�Ŭ���� : ���� �����Լ��� �ϳ��� ������ �ִ� Ŭ���� >> �ڽĵ��� ������ �����ϴ� �� ���
Concrete Class(��üȭ Ŭ����) : ���� �ν��Ͻ��� ����

*/
// 2. ���, ������ ���
//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//protected:
// string name;
// int age;
//public:
// Person(const string& n = "", int a = 0) :name(n), age(a) {}
// virtual void Print()const = 0;  //�߻�Ŭ����
//};
//class Student :public Person
//{
// int grade;
//public:
// Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}
// void Print()const {
//  cout << "name : " << name << ", " << "age : " << age << ", grade : " << grade << endl;
// }
//};
//int main()
//{
// Student s1("Kim", 20, 1);
// s1.Print();
// Person& rp = s1;
// rp.Print();
// Person* ps = &s1;
// ps->Print();
//}
/*
Compile Time : Static (����)
Run Tume : dynamic (����)
binding >> ��ü���� ��κ� �ǽð����� �������(heap) >> ��κ� ����ð��� ������ ��ü�� �θ�ü�� �ٷ�
*/

// 1. ���, virtual(�������ε�)
//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//protected:
// string name;
// int age;
//public:
// Person(const string& n="", int a = 0) :name(n), age(a){}
// virtual void Print()const {
//  cout << "name : " << name << ", " << "age : " << age << endl;
// }
// string Getname() { return name; }
// int Getage() { return age; }
//};
//class Student :public Person
//{
// int grade;
//public:
// Student(const string& n="", int a = 0, int g=0) :Person(n,a), grade(g){}
// void Print()const {
//  cout << "name : " << name << ", " << "age : " << age << ", grade : " << grade << endl;
// }
//};
//int main()
//{
// Person p1("hong", 24);
// p1.Print();
// Student s1("Kim", 20, 1);
// s1.Print();
//} 