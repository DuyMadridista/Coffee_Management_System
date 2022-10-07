#include "NhanVienPhucVu.h"
#include<iostream>
#include<string>

using namespace std;

/*
	string maNv;
	string hoTen;
	string sdt;
	int maAcc;
	string TK;
	string MK;
*/
NhanVienPhucVu::NhanVienPhucVu() {
	maNv = "";
	hoTen = "";
	sdt = "";
	TK = "";
	MK = "";
	hsl = 0;
}
void NhanVienPhucVu::lamDoUong() {

}
void NhanVienPhucVu::xuatBill() {

}
float NhanVienPhucVu::getLuong(const int& soGioLam) {
	return soGioLam * hsl;
}
float NhanVienPhucVu::getLuongTheoGio() {
	return hsl;
}
void NhanVienPhucVu::setLuongTheoGio(const float& luongTheoGio) {
	this->hsl = luongTheoGio;
}
void NhanVienPhucVu::nhapThongTin() {
	NhanVien::nhapThongTin();
	cout << "Nhap luong theo ngay: "; cin >> hsl;
}
void NhanVienPhucVu::xuatThongTin() {
	NhanVien::xuatThongTin();
	cout << "Luong theo ngay: " << hsl << endl;
}