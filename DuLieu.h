#pragma once
#include<iostream>
#include<string>
#include"Vector.h"
#include"NhanVienQuanLi.h"
#include"NhanVienPhucVu.h"
#include"DoUong.h"

using namespace std;

class DuLieu
{
private:
	//danh sach nhan vien
	Vector<Vector<NhanVien>> dsLoaiNhanVien; // 0-> quan li, 1 -> phuc vu ...
	//danh sach do uong
	Vector<Vector<DoUong>> dsLoaiDoUong;
	// doanh thu
	Vector<Vector<Vector<int>>> doanhThu; // nam/thang/ngay
public:

};

