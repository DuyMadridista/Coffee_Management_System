#pragma once
#include<iostream>
#include<string>
using namespace std;

class DoUong
{
private:
	string maDoUong;
	string tenDoUong;
	float gia;
	int soLuong;
	int loaiDoUong;
public:
	DoUong();
	string getMaDoUong();
	void setMaDoUong(const string&);
	string getName();
	void setName(const string&);
	float getGia();
	void setGia(const float&);
	int getSoLuong();
	void setSoLuong(const int&);
	/*int getLoaiDoUong();
	void setLoaiDoUong(const int&);*/
	void nhapThongTinDoUong();
	void xuatThongTinDoUong();
};

