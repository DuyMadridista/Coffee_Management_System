#pragma once
#include<string>
using namespace std;

class KhachHang
{
private:
	string maKH();
	string hoTen;
	string Sdt;
public:
	string datMon();
	string getMaKH();
	void setMaKH(string);
	string getName();
	void setName(string);	
	string getSdt();
	void setSdt(string);
	KhachHang();
	~KhachHang();
};

