#include <iostream>
#include <cstring>
using namespace std;

struct Data
{
public:
	int a;
	int b;
	void Print() {
		cout << "Data:" << a << ',' << b << endl;
	}
};
class Data2
{
public:
	int a;
	int b;
	void Print() {
		cout << "Data2:" << a << ',' << b << endl;
	}
};
int main()
{
	Data d1 = { 10,20 };
	Data2 d2 = { 10,20 };

	d1.Print();
	d2.Print();
}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct Data
//{
//public:
//	int a;
//	int b;
//
//};
//class Data2
//{
//private:
//	int a;
//	int b;
//};
//int main()
//{
//	Data d1={10,20};
//	Data2 d2={10,20};
//
//	printf("%d, %d\n", d1.a, d1.b);
//	printf("%d, %d\n", d2.a, d2.b);
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct Data
//{
//	int a;
//	int b;
//
//};
//class Data2
//{
//	int a;
//	int b;
//};
//int main()
//{
//	Data d1;
//	Data2 d2;
//	printf("%d\n", sizeof(d1));
//	printf("%d\n", sizeof(d2));
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char* s = new char[10];
//
//	strcpy_s(s,7, "hello!");
//	cout << "string: "<<s << endl;
//	delete[] s;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int* pn = new int(10);
//	int* parr = new int[5]{ 1,2,3,4,5 };
//
//	cout << "*pn : " << *pn << endl;
//	for (int i = 0; i < 5; ++i)
//		cout << parr[i] << " ";
//	cout << endl;
//	*pn = 20;
//	for (int i = 0; i < 5; ++i)
//		parr[i] = 10 + i;
//	delete pn;
//	delete[] parr;
//}

//#include <iostream>
//using namespace std;
//void Print(int n = 0, double d = 0, const char* s = "none")
//{
//	cout << n << ',' << d << ',' << s << endl;
//}
//int main()
//{
//	Print(10);
//	Print(10, 5.5);
//	Print(10, 5.5, "Hello!");
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	const int* p = &n;
//	const int* p2 = p;
//	// int* p3 = p;    const int*������ int *�� ��ȯ�� �Ұ��� 
//	cout << *p << ',' << n << endl;
//}

//#include <iostream>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//}
//void Print(int a, int b)
//{
//	cout << a << ','<< b << endl;
//}
//void Print(const char* s)
//{
//	cout << s << endl;
//}
//int main()
//{
//	Print(10);
//	Print(10, 20);
//	Print("Hello!"); // ���� �Ұ��� ���(���ͷ�) : �б⸸ ����
//	char s[] = "Hello!"; // ���ڿ��� Hello!�� ���� : �б� ���Ⱑ ����
//	Print(s);
//}

//#include <iostream>
//using namespace std;
//void PrintArray(const int* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << arr[i] << endl;
//}
//void InitArray(int* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i] = i + 1;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	InitArray(arr, 5);
//	PrintArray(arr, 5);
//}

//#include <iostream>
//using namespace std;
//void Increment(int* pn) // pn ��� �Ű�����(out parameter)
//{
//	++* pn;
//}
//void Print(const int* pn)  // pn �Է� �Ű�����(in parameter)
//{
//	cout << *pn << endl;
//}
//int main()
//{
//	int num = 1;
//	Increment(&num);
//	Print(&num);
//	Increment(&num);
//	Print(&num);
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 100;
//
//	const int* p = &n;
//	int m = 50;
//	p = &m;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int n = 10;
//	cout << n << endl;
//}

//#include <iostream>
//using namespace std;
//void Swap(int& aa, int& bb)
//{
//	int t = aa;
//	aa = bb;
//	bb = t;
//}
//int main()
//{
//	int a = 10, b = 20;
//
//	cout << a << ',' << b << endl;
//	Swap(a, b);
//	cout << a << ',' << b << endl;
//	Swap(a, b);
//	cout << a << ',' << b << endl;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	int* p = &n; // ������
//	int& r = n;  // ����
//
//	cout << &n << endl;
//	cout << &*p << endl;
//	cout << &r << endl;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	int* p = &n; // ������
//	int& r = n;  // ����
//
//	cout << n << endl;
//	cout << *p << endl;
//	cout << r << endl;
//}

//#include <stdio.h>
//struct Data
//{
//	int n;
//	double d;
//};
//void PrintData(struct Data arg)
//{
//	printf("%d, %d\n", arg.n, arg.d);
//}
//int main()
//{
//	struct Data d1 = { 10, 5.5 };
//
//	PrintData(d1);
//}


//#include <iostream>
//using namespace std;
//
//struct Data
//{
//	int n;
//	double d;
//};
//void PrintData(Data arg)
//{
//	cout << arg.n << ',' << arg.d << endl;
//}
//int main()
//{
//	Data d1 = { 10, 5.5 };
//
//	PrintData(d1);
//}


//#include <stdio.h> // C�� ǥ�����
//#include <stdlib.h>
//#include <iostream> // C++�� ǥ�����
//using namespace std;
//int main()
//{
//	//�ʱ�ȭ ( �޸� ���� �� ���ʷ� ���� �Ҵ� )
//	int n = 10; // c  (������ �� �Ҵ�)
//
//	int k(10); // c++ ( ��ü�� �� �Ҵ�)
//
//	cout << n << ',' << k << endl;
//}

//#include <stdio.h> // C�� ǥ�����
//#include <stdlib.h>
//#include <iostream> // C++�� ǥ�����
//using namespace std;
//int main()
//{
//	int* pn1 = (int*)malloc(sizeof(int));
//	*pn1 = 100;
//	printf("%d\n", *pn1);
//	free(pn1);
//
//	int* pn2 = (int*)new int;
//	*pn2 = 200;
//	cout << 200 << endl;
//	delete pn2;
//}

//#include <stdio.h> // C�� ǥ�����
//#include <iostream> // C++�� ǥ�����
//using namespace std;
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	printf("num = %d\n", num);
//	//C������ �Է�
//
//	int num2 = 0;
//	cin >> num2;
//	cout << "num2 = " << num2 << endl; // C++������ �Է�
//}

//#include <stdio.h> // C�� ǥ�����
//#include <iostream> // C++�� ǥ�����
//using namespace std;
//int main()
//{
//	printf("Hello c!\n"); // c������ ���
//
//	cout << "hello c++" << endl; // C++������ ���
//}