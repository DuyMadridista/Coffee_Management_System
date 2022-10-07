#pragma once
#include"NhanVien.h"
#include<string>
#include"DoUong.h"
class NhanVienPhucVu: public NhanVien
{
public:
	NhanVienPhucVu();
	void lamDoUong();
	void xuatBill();
	float getLuong(const int&);
	float getLuongTheoGio();
	void setLuongTheoGio(const float&);
	void nhapThongTin();
	void xuatThongTin();
};

