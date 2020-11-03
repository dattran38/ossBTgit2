#include "iostream"
using namespace std;

int main()
{
	int a, b;
	cout << "\nNhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;
	cout << "\nTong cua 2 so vua nhap la : " << a + b << "\n";
	cout << "Hieu cua 2 so vua nhap la : " << a - b << "\n";
	cout << "Tich cua 2 so vua nhap la : " << a * b << "\n";
	if (b != 0)
		cout << "Thuong cua 2 so vua nhap la : " << a / b << "\n";
	return 0;
}