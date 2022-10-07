#include "DoUong.h"



DoUong::DoUong() {
	maDoUong = "";
	tenDoUong = "";
	gia = 0;
	soLuong = 0;
	loaiDoUong = 0;
}
string DoUong::getMaDoUong() {
	return maDoUong;
}
void DoUong::setMaDoUong(const string& maDoUong) {
	this->maDoUong = maDoUong;
}
string DoUong::getName() {
	return tenDoUong;
}
void DoUong::setName(const string& tenDoUong) {
	this->tenDoUong = tenDoUong;
}
float DoUong::getGia() {
	return gia;
}
void DoUong::setGia(const float& gia) {
	this->gia = gia;
}
int DoUong::getSoLuong() {
	return soLuong;
}
void DoUong::setSoLuong(const int& soLuong) {
	this->soLuong = soLuong;
}
int DoUong::getLoaiDoUong() {
	return loaiDoUong;
}
void DoUong::setLoaiDoUong(const int& loaiDoUong) {
	this->loaiDoUong = loaiDoUong;
}

void DoUong::nhapThongTinDoUong() {
	cout << "Nhap ma do uong: "; cin >> maDoUong;
	cout << "Nhap ten do uong: "; cin >> tenDoUong;
	cout << "Nhap gia do uong: "; cin >> gia;
	cout << "Nhap so luong do uong: "; cin >> soLuong;
	cout << "Nhap loai do uong: "; cin >> loaiDoUong;

}
void DoUong::xuatThongTinDoUong() {
	cout << "XUAT DO UONG:" << endl;
	cout << "Ma do uong: " << maDoUong << endl;
	cout << "Ten do uong: " << tenDoUong << endl;
	cout << "Gia do uong: " << gia << endl;
	cout << "So luong do uong: " << soLuong << endl;
	cout << "Loai do uong: " << loaiDoUong << endl;

}