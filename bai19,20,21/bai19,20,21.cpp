
#include <iostream>
#include<algorithm>
#include <random>
using namespace std;
// parameter mặc định

	//int Cong(int x, int y=0) {
	//	return x + y;
	//}
	//int main()
	//{
	//	int kq = Cong(5);
	//	cout << "ket qua cua phep tinh la" << kq << endl;
	//}

// đệ quy

	//int giaithua(int n) {
//	if (n <= 1)
//		return 1;
//	return n * giaithua(n - 1);
//
// }
//int main()
//{
//	int kq = giaithua(4);
//	cout << "kq =" << kq;
//}

// tính n bằng dãy fibonaci
// + quy luật : Fn = F(n-1) + F(n-2);
// + điểm dừng : n<=2 thì Fn =1 

	//int pheptinh(int n) {
//	if (n <= 2)
//		return 1;
//	return pheptinh(n - 1) + pheptinh(n - 2);
//}
//int main()
//{
//	int kq = pheptinh(4);
//	cout << "kq =" << kq;
//}

//mảng - array
	int main()
{
	
//1. khai báo

//	int m[6];

//2. khởi tạo

//	int n[] = { 1,3,5,7 };
 

//3.truy xuất ra các phần tử

	//	int a[] = { 10,23,89 };
	//	cout << a[2] << endl;


// 4. chiều dài của mảng

	//	int length = size(a);
	//	cout << "chieu dai cua mang la" << length;
 
//5. duyệt mảng

	/*int b[] = { 10,23,4,5,67,82 };
	for (int pt : b) {
		cout  << pt << " ";
	}
	cout << endl;*/

// 6.duyệt mảng theo vị trí index

	//for (int i = 0; i < size(b); i++) {
	//	cout << "i=" << i << endl; //in ra index trong mang b
	//	cout << b[i] << " ";//in ra cac phan tu trong b
	//}

//7. thay đổi giá trị của phần tử trong mảng

	//c1 lấy ra trực tiếp phần tử rồi gán giá trị

	/*int c[] = { 10,20,30,40,50 };
	cout << "pt khi chua gan gtri " << c[0]<<endl;
	c[0] = 999;
	cout << "pt sau khi gan gia tri " << c[0] << endl;*/

	//c2 dung vl for gan gia tri cho ca mang
	
	//for (int i = 0; i < size(c); i++) {
	//	c[i] += 2; // gia tri ca mang tang len 2 don vi
	//}
	//for (int pt : c) {
	//	cout << pt << endl;
	//}

	//nếu đang dùng vl for nhưng chỉ muốn thay đổi 1 pt thì

	/*for (int i = 0; i < size(c); i++) {
		if (i == 2) {
			c[i] += 2;
		}
	}
	for (int pt : c) {
		cout << pt << endl;
	}*/ 

//8. sắp xếp mảng

	/*int a[] = { 10,9,8,7 };
		sort(a, a + size(a));
		cout << "ham vua sx la" << endl;
		for (int pt : a) {
			cout << pt << " ";
		}

		reverse(a, a + size(a));
		cout << "mang sau khi dc sx lai la" << endl;
		for (int pt : a) {
			cout << pt << " ";
		}*/

//9. taọ ra mảng có pt ngẫu nhiên

		random_device test;
		mt19937 gen(test());
		uniform_int_distribution<> dis(0, 99);

		int c[10];
		for (int i = 0; i < size(c); i++) {
			c[i] = dis(gen);

		}
		cout << "mang ngau nhien cua b la" << endl;
		for (int pt : c) {
			cout << pt << " ";
		}
}