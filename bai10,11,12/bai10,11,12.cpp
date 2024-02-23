#include <iostream>
using namespace std;
int main()
{
	// toán tử 3 ngôi

		/*int n;
		cout << "hay nhap vao so nguyen n : " << endl;
		cin >> n;
		string ketqua = (n % 2 == 0) ? "chan" : "le";
		cout << "so nay la so :" << ketqua << endl;*/

		//switch case
			/*int n;
			cout << "nhap vao 1 so nguyen :" << endl;
			cin >> n;
			int div = n % 2;
			switch (div)
			{
			case 0:
				cout << "so nay la so chan" << endl;
				break;
			default:
				cout << "so nay la so chan" << endl;
				break;

			}*/

			// switch case biến thể, gộp

				/*int month;
				cout << "nhap thang can tra :" << endl;
				cin >> month;
				switch (month)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					cout << "thang nay co 31 ngay" << endl;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					cout << "thang nay co 30 ngay" << endl;
					break;
				cout << "thang nay co 31 ngay" << endl;
					break;
				case 2:
					cout << "thang nay co 28 ngay" << endl;
					break;
				default:
					cout << "b nhap sai thang" << endl;
					break;
				}*/

				// vòng lạp while c++

	int x = 0;
	while (x <= 5) {
		cout << "ket qua cua x la" << x << endl;
		x++;
	}
}