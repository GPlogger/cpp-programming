#include <iostream>
using namespace std;
class Person
{
protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
	string name;
	int age;
public:
	Person(const string& n = "", int a = 0) :name(n), age(a) {}
	~Person() {  }
	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
	const string& GetName() const { return name; }
	int GetAge() const { return age; }
};
class Student : public Person	// 상속
{
	int grade;
public:
	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
	~Student() { }
	void Print()const {
		cout << "name: " << name << ", " << "age: " << age << ", " <<
			"grade: " << grade << endl;
	}
	int GetGrade() const { return grade; }
};
class Professor : public Person
{
	string position;
public:
	Professor(const string& n, int a, const string& p) :Person(n, a), position(p) {}
	void Print()const
	{
		cout << "name: " << name << ", " << "age: " << age << ", " <<
			"position: " << position << endl;
	}
	const string& GetPosition() const { return position; }
};

int main()
{
	Person* parr[5] = { new Student("김학생", 24, 2), new Professor("김교수", 40, "조교수") ,
		new Student("이학생", 27, 4), new Professor("이교수", 48, "조교수"),
		new Student("박학생", 22, 2) };

	for (int i = 0; i < 5; i++)
		parr[i]->Print();
}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	~Student() { }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) :Person(n, a), position(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"position: " << position << endl;
//	}
//	const string& GetPosition() const { return position; }
//};
//
//int main()
//{
//	Student s1("김학생", 24, 3);
//	Professor pf1("홍교수", 45, "담임교수");
//
//
//	Person* p = &s1;
//	cout << p->GetName() << endl;	// 정적 바인딩 : 타입을 보고 함수 결정
//	cout << p->GetAge() << endl;
//	p->Print();	// 동적 바인딩(virtual) : 실제 객체의 타입을 보고 함수 결정
//
//	p = &pf1;
//	p->Print();	//다형적인 메소드, 다형성
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	~Student() { }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) :Person(n, a), position(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"position: " << position << endl;
//	}
//	const string& GetPosition() const { return position; }
//};
//
//int main()
//{
//	Student s1("김학생", 24, 3);
//	Professor pf1("홍교수", 45, "담임교수");
//	
//
//	Person* p = &s1;
//	cout << p->GetName() << endl;	// 정적 바인딩 : 타입을 보고 함수 결정
//	cout << p->GetAge() << endl;
//	p->Print();	// 동적 바인딩(virtual) : 실제 객체의 타입을 보고 함수 결정
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	void Print()const {}
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	~Student() { }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) :Person(n, a), position(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"position: " << position << endl;
//	}
//	const string& GetPosition() const { return position; }
//};
//
//int main()
//{
//	Student s1("김학생", 24, 3);
//	Professor pf1("홍교수", 45, "담임교수");
//	s1.Print();
//	pf1.Print();
//
//	Person per1 = s1;
//	Person per2 = pf1;	//x
//
//	Person& r1 = (Person&)s1;	// 형 변환이 생략됨
//	Person& r2 = pf1;			//o 자식타입을 부모타입으로 up-casting
//	((Student&)r1).GetGrade();	// 부모타입을 자식타입으로 down-casting
//
//	Person* p1 = (Person*)&s1;
//	Person* p2 = &pf1;	//o
//	((Student*)p1)->GetName();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	void Print()const {}
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	~Student() { }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) :Person(n, a), position(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"position: " << position << endl;
//	}
//	const string& GetPosition() const { return position; }
//};
//int main()
//{
//	Student s1("김학생", 24, 3);
//	Professor pf1("홍교수", 45, "담임교수");
//	s1.Print();
//	pf1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//	~Person() { cout << "~Person()" << endl; }
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {
//		cout << "Student()" << endl;
//	}	// name, age를 부모클래스에서 초기화
//	~Student() { cout << "~Student()" << endl; }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("김학생", 24, 3);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// 부모클래스 > 자식클래스 내에서 사용 가능
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("김학생", 24, 3);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// 상속
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n,a), grade(g) {}	// name, age를 부모클래스에서 초기화
//	void Print()const {
//		cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("김학생", 24, 3);
//	s1.Print();
//}


//#include <iostream>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student
//{
//	string name;
//	int age;
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0):name(n),age(a),grade(g) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << ", " <<
//		"grade: " << grade << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("김학생", 24, 3);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//int main()
//{
//	Person p1("홍길동", 24);
//
//	p1.Print();
//}