#include <iostream>
using namespace std;

// vòng lặp for lồng for

//int main()
//{
//
//
//	/*for (int i = 1; i <= 7; i++) {
//		for (int j = 1; j <= 7; j++) {
//			cout << i << j << " ";
//		}
//		cout << endl;
//	}*/
//
//}

// khai báo hàm có return

//int Cong(int x, int y) {
//	return x + y;
//}
//int main()
//{
//	int kq = Cong(5, 6);
//	cout << "ket qua cua phep tinh la" << kq << endl;
//}

// hàm thủ tục - hàm k c ó return

//void xinchao(string gioiTinh) {
//	if (gioiTinh._Equal("nu"))
//	
//		cout<<"toi la nhan vien nu"<<endl;
//	
//	else if (gioiTinh._Equal("nam"))
//	
//		cout << "toi la nhan vien nam" << endl;
//	
//}
//int main()
//{
//	xinchao("nu");
//}

// truyền tham trị

//void thamTri(int a) {
//	a = 100;
//	cout << "a trong ham la" << a << endl;
//}
//int main()
//{
//	int a = 1;
//	cout << "a trc khi goi ham la" << a << endl;
//	thamTri(a);
//	cout << "a sau khi goi ham la" << a << endl;
//}

// truyền tham chiếu


void thamChieu(int &a) {
	a = 100;
	cout << "a trong ham la" << a << endl;
}
int main()
{
	int a = 1;
	cout << "a trc khi goi ham la" << a << endl;
	thamChieu(a);
	cout << "a sau khi goi ham la" << a << endl;
}