#include <iostream>
using namespace std;
int main()
{
// vong lap do while

	//tính tổng từ 1 đến 5
		/*int a = 1;
		int  tong = 0;
		do
		{
			tong += a;
			a++;
		} while (a <= 5);


		//cout << "ta duoc day ket qua la " << tong << endl;*/

	//tăng n lên 1 cho đến khi n = 5 thì thoát
		/*int n = 0;
		while (true)
		{
			n++;
			if (n == 10) {
				break;
			}
		
			cout << "so n bang " << n << endl;

		}*/

// vong lap for

	// xuat cac chữ số chẵn tuwfd 1 -10
	/*for (int i = 0; i <=10; i+=2)
	{
		cout << "i=" << i << endl;
	}*/

	// tổng các số chẵn từ 1 đén 10
	/*int tong = 0;
	for (int i = 0; i <=10; i+=2)
	{
		tong += i;
		cout << "tong cua cac so la " << tong << endl;
	}*/

// break,continue

	// tính tổng từ 1 - 5 trừ số 3
	int tong = 0;
	for (int i = 0; i <=5; i++)
	{
		if ( i ==3)
		{
			continue;// Bỏ qua giá trị 3
		}
		else
		{
			cout << "i = " << i << endl;
			tong += i;
			
		}
	}
	cout << "tong = " << tong << endl;

	// in ra giá trị n cuối cùng
	/*int a = 0;
	while (a<5)
	{
		a++;
		cout << "gtri a trong vong lap " << a << endl;
		if (a==4)
		{
			break;
		}
	}
	cout << "gtri a cuoi cung" << a << endl;*/
}