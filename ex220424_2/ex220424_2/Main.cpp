#include <iostream>
using namespace std;
class Person
{
protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
	string name;
	int age;
public:
	Person(const string& n = "", int a = 0) :name(n), age(a) {}
	~Person() {  }
	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
	const string& GetName() const { return name; }
	int GetAge() const { return age; }
};
class Student : public Person	// ���
{
	int grade;
public:
	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
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
	Person* parr[5] = { new Student("���л�", 24, 2), new Professor("�豳��", 40, "������") ,
		new Student("���л�", 27, 4), new Professor("�̱���", 48, "������"),
		new Student("���л�", 22, 2) };

	for (int i = 0; i < 5; i++)
		parr[i]->Print();
}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
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
//	Student s1("���л�", 24, 3);
//	Professor pf1("ȫ����", 45, "���ӱ���");
//
//
//	Person* p = &s1;
//	cout << p->GetName() << endl;	// ���� ���ε� : Ÿ���� ���� �Լ� ����
//	cout << p->GetAge() << endl;
//	p->Print();	// ���� ���ε�(virtual) : ���� ��ü�� Ÿ���� ���� �Լ� ����
//
//	p = &pf1;
//	p->Print();	//�������� �޼ҵ�, ������
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	virtual void Print()const { cout << "name: " << name << ", age:" << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
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
//	Student s1("���л�", 24, 3);
//	Professor pf1("ȫ����", 45, "���ӱ���");
//	
//
//	Person* p = &s1;
//	cout << p->GetName() << endl;	// ���� ���ε� : Ÿ���� ���� �Լ� ����
//	cout << p->GetAge() << endl;
//	p->Print();	// ���� ���ε�(virtual) : ���� ��ü�� Ÿ���� ���� �Լ� ����
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	void Print()const {}
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
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
//	Student s1("���л�", 24, 3);
//	Professor pf1("ȫ����", 45, "���ӱ���");
//	s1.Print();
//	pf1.Print();
//
//	Person per1 = s1;
//	Person per2 = pf1;	//x
//
//	Person& r1 = (Person&)s1;	// �� ��ȯ�� ������
//	Person& r2 = pf1;			//o �ڽ�Ÿ���� �θ�Ÿ������ up-casting
//	((Student&)r1).GetGrade();	// �θ�Ÿ���� �ڽ�Ÿ������ down-casting
//
//	Person* p1 = (Person*)&s1;
//	Person* p2 = &pf1;	//o
//	((Student*)p1)->GetName();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	~Person() {  }
//	void Print()const {}
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
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
//	Student s1("���л�", 24, 3);
//	Professor pf1("ȫ����", 45, "���ӱ���");
//	s1.Print();
//	pf1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//	~Person() { cout << "~Person()" << endl; }
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {
//		cout << "Student()" << endl;
//	}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
//	~Student() { cout << "~Student()" << endl; }
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("���л�", 24, 3);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//class Person
//{
//protected:	// �θ�Ŭ���� > �ڽ�Ŭ���� ������ ��� ����
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a) {}
//	void Print()const { cout << "name: " << name << ", " << "age: " << age << endl; }
//	const string& GetName() const { return name; }
//	int GetAge() const { return age; }
//};
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
//	void Print()const {
//		cout << "name: " << name << ", " << "age: " << age << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("���л�", 24, 3);
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
//class Student : public Person	// ���
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n,a), grade(g) {}	// name, age�� �θ�Ŭ�������� �ʱ�ȭ
//	void Print()const {
//		cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", " <<
//			"grade: " << grade << endl;
//	}
//	int GetGrade() const { return grade; }
//};
//int main()
//{
//	Student s1("���л�", 24, 3);
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
//	Student s1("���л�", 24, 3);
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
//	Person p1("ȫ�浿", 24);
//
//	p1.Print();
//}