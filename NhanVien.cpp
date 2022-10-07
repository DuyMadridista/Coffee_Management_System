#include<iostream>
#include<string>
#include"Nhanvien.h"

using namespace std;
string NhanVien::getName()
{
	return this->hoTen;
}
void NhanVien::setName(const string& hoTen)
{
	this->hoTen = hoTen;
}
string NhanVien::getMaNv()
{
	return this->maNv;
}
void NhanVien::setMaNv(const string& maNv)
{
	this->maNv = maNv;
}
string NhanVien::getSdt()
{
	return this->sdt;
}
void NhanVien::setSdt(const string &sdt)
{
	this->sdt = sdt;
}
string NhanVien::getTK() {
	return this->TK;
}
void NhanVien::setTK(const string &TK) {
	this->TK = TK;
}
string NhanVien::getMK() {
	return this->MK;
}
void NhanVien::setMK(const string &MK) {
	this->MK = MK;
}
float NhanVien::getHsl() {
	return hsl;
}
void NhanVien::setHsl(const float& hsl) {
	this->hsl = hsl;
}

void NhanVien::nhapThongTin() {
	cout << "Nhap ho ten: "; getline(cin, hoTen);
	cout << "Nhap sdt: "; getline(cin, sdt);
	cout << "Nhap ma nhan vien: "; cin >> maNv;
	cout << "Nhap he so luong: "; cin >> hsl;
	cout << "Nhap tai khoan: "; cin >> TK;
	cout << "Nhap mat khau"; cin >> MK;
	
}
void NhanVien::xuatThongTin() {
	cout << "THONG TIN NHAN VIEN:" << endl;
	cout << "Ho ten: " << hoTen << endl;
	cout << "Sdt: " << sdt << endl;
	cout << "Ma nhan vien: " << maNv << endl;
	cout << "He so luong: " << hsl << endl;
	cout << "Tai khoan: " << TK << endl;

}