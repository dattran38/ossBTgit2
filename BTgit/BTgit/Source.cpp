#include "iostream"
using namespace std;

float chuVi_HV(int a);
float dienTich_HV(int a);
float chuVi_HCN(int b, int c);
float dienTich_HCN(int b, int c);
float chuVi_HT(int d);
float dienTich_HT(int d);

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

	int a1, b1, c, d;
	cout << "\nNhap canh: ";
	cin >> a1;
	cout << "\nNhap chieu dai: ";
	cin >> b1;
	cout << "Nhap chieu rong: ";
	cin >> c;
	cout << "\nNhap ban kinh: ";
	cin >> d;
	cout << "\nChu vi hinh vuong: " << chuVi_HV(a1);
	cout << "\nDien tich hinh vuong: " << dienTich_HV(a1);
	cout << "\nChu vi hinh chu nhat: " << chuVi_HCN(b1, c);
	cout << "\nDien tich hinh chu nhat: " << dienTich_HCN(b1, c);
	cout << "\nChu vi hinh tron: " << chuVi_HT(d);
	cout << "\nDien tich hinh tron: " << dienTich_HT(d);
	cout << endl;

	return 0;
}

float chuVi_HV(int a) {
	return a * 4;
}

float dienTich_HV(int a) {
	return a * a;
}

float chuVi_HCN(int b, int c) {
	return (b + c) * 2;
}

float dienTich_HCN(int b, int c) {
	return b * c;
}

float chuVi_HT(int d) {
	return d * 2 * 3.14;
}

float dienTich_HT(int d) {
	return d * d * 3.14;
}