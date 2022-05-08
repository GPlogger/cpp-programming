// 과제 : 참조를 가지는 Array 클래스 복사 대입 연산자 만들기
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
    int& operator[](int idx) { // int 참조로 받아야 주소를 넘기고 arr[2]가 가능해짐
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


// 11. 복사 생성자, 복사 대입 연산자
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

// 10. 연산자 중복(배열 참조리턴)
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
//	int& operator[](int idx) { return buf[idx]; } // 참조를 반환하면 값 수정도 가능(참조반환)
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
//	arr[2] = 100; // 수정 arr.buf[2] = 100;
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr[i] << endl;    // 대괄호연산자(인덱서)
//}

//// 10. 배열 복습
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

// 9. 연산자 중복 6(단항연산자)
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
// const Point& operator+=(const Point& arg) // p1 객체에 값을 더하므로 const x  |  값을 직접 더하므로 void형식(return 없음)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // 일반적인 문법(객체 자신의 주소(p1))
// }
// const Point& operator++()
// {
//  ++x;
//  ++y;
//  return *this;
// }
// const Point operator++(int) // 후위연산을 위해 int를 인수로 받음
// {
//  Point t = *this; // 후위연산이므로 증가 전 포인트 만듬
//  x++;
//  y++;
//  return t;   // 지역객체이므로 참조 던지지 않음
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// p1.Print();
// p2 = p1++; // 후위연산은 파라미터에 0 // p1.operator++(0)
// p1.Print();
// p2.Print();
//}

// 9. 연산자 중복 6(단항연산자)
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
// const Point& operator+=(const Point& arg) // p1 객체에 값을 더하므로 const x  |  값을 직접 더하므로 void형식(return 없음)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // 일반적인 문법(객체 자신의 주소(p1))
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
// ++p1; // 단항연산자는 인수 x
// p2 = ++p1; // 대입연산자를 사용하려면 p1값을 던져야 함
// p1.Print();
// p2.Print();
//}


// 8. 연산자 중복 5
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
// const Point& operator+=(const Point& arg) // p1 객체에 값을 더하므로 const x  |  값을 직접 더하므로 void형식(return 없음)
// {
//  x += arg.x;
//  y += arg.y;
//
//  return *this; // 일반적인 문법(객체 자신의 주소(p1))
// }
//};
//int main()
//{
// Point p1(2, 3), p2(4, 5);
// Point p3;
//   
// p3 = p1 += p2; // 보이드 형식으로 리턴되므로 안됨, 따라서 p1의 복사본을 던져야 함
// p1.Print();
// p2.Print();
// p3.Print();
//}

// 7. 연산자 중복 4
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
//	void operator+=(const Point& arg) // p1 객체에 값을 더하므로 const x  |  값을 직접 더하므로 void형식(return 없음)
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

// 6. 연산자 중복 3
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
// const Point operator+(const Point& arg)const // 변경이 목적이 아니므로 const 메서드를 만듬
// //앞은 참조(&)가 붙으면 안됨(참조가 붙을 시 주소를 반환하나, 해당 주소는 함수가 끝날 시 사라짐)
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

// 5. 연산자 중복 2
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
// const Point operator+(const Point& arg)const // 변경이 목적이 아니므로 const 메서드를 만듬
// //앞은 참조(&)가 붙으면 안됨(참조가 붙을 시 주소를 반환하나, 해당 주소는 함수가 끝날 시 사라짐)
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
// Point p3 = p1 + p2;  // 사용자 정의 타입의 연산자
// p3.Print();
//}

// 4. 연산자 중복★
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
// Point p3 = p1.operator+(p2); //p1 + p2;  // 사용자 정의 타입의 연산자
//}

// 3. 순수가상함수
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
// virtual void Print()const = 0;  //순수가상함수는 상속받은 객체에서 정의가 되어야 함(재정의)
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
Abstract Class(추상화 클래스) : 추상적인 정보만을 가짐 ex)Unit >> virtual 사용,
순수 가상함수 : = 0 >> 몸체를 가지고 있지 않다는 뜻
추상클래스 : 순수 가상함수를 하나라도 가지고 있는 클래스 >> 자식들의 참조를 보관하는 데 사용
Concrete Class(구체화 클래스) : 실제 인스턴스를 생성

*/
// 2. 상속, 포인터 사용
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
// virtual void Print()const = 0;  //추상클래스
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
Compile Time : Static (정적)
Run Tume : dynamic (동적)
binding >> 객체들은 대부분 실시간으로 만들어짐(heap) >> 대부분 실행시간에 생성된 객체는 부모객체로 다룸
*/

// 1. 상속, virtual(정적바인딩)
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