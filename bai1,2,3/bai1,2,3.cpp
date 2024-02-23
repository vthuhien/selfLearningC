
//nhập xuất dữ liệu

//#include <iostream>
//using namespace std;
//int main()
//{
//	double name;
//	cout << "ho va ten";
//	cin >> name;
//}


//giới hạn các kiểu dữ liệu

//#include <iostream>
//#include <climits>
//using namespace std;
//int main()
//{
//	cout << "max cua int la:" << INT_MAX << endl;
//	cout << "min cua int la:" << INT_MIN << endl;
//}


//biến, khai báo biến

//#include <iostream>
//using namespace std;
//int main()
//{
//	int diemVan = 9;
//	cout << typeid(diemVan).name();
//}

//hằng số
#include <iostream>
using namespace std;
//int main()
//{
//	const int doSoi = 100;
//	const int doDong = 0;
//	cout << "Nhiet do soi la:" << doSoi << endl;
//	cout << "Nhiet do dong la:" << doDong << endl;
//
//}

// type promotion- thăng cấp
int main()
{
	int a = 8;
	double b = 7.5;
	cout << "a+b=" << a + b << endl;

	int kq;
	kq = a + b;
	cout << "a+b=" << kq << endl;

	double kq2;
	kq2 = a + b;
	cout << "a+b=" << kq2 << endl;
}

