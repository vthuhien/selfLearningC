#include <iostream>
using namespace std;
int main()
{
//toán tử gán

	/*int a = 6;
		a += 3;
		cout << a << endl;

		int b = 2;
		int a = 6;
		int kq = a - (b + 7);
		cout << kq << endl;*/

// toán tử logic

	/*int a = 7;
			/*int a = 7;
			cout << (a < 10 && a>0) << endl;*/

// tiền tố, hậu tố

	/*int a = 7;
				a++;
				cout << a << endl;*/

// câu lệnh if/else;
 
	//double dtb;
					//cout << "diem trung binh cua ban la:" << endl;
					//cin >> dtb;
					////kiem tra dieu kien
					//if (dtb > 5) {
					//	cout << "ban da do" << endl;
					//}
					//else
					//{
					//	cout << "ban bi truot" << endl;
					//}

// nhieu dieu kien

	/*double dtb;
	cout << "diem trung binh cua b la:" << endl;
	cin >> dtb;
	if (dtb>=8)
	{
		cout << "hoc sinh gioi" << endl;
	}
	else if(dtb>=6)
	{
		cout << "hoc sinh kha" << endl;
	}
	else
	{
		cout << "hoc sinh trung binh" << endl;
	}*/


	double cannang, chieucao, BMI;
	cout << "can nang cua ban la" << endl;
	cin >> cannang;
	cout << "chieu cao cua ban la" << endl;
	cin >> chieucao;
	BMI = cannang / (chieucao * 2);
	if (16 <= BMI < 18.5)
	{
		cout << "than hinh gay" << endl;
	}
	else if (18.5 <= BMI < 25)
	{
		cout << "than hinh binh thuong" << endl;
	}
	else if (BMI >= 35)
	{
		cout << "than hinh qua beo" << endl;
	}
}

