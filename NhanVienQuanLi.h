#pragma once
#include "NhanVien.h"
#include"Vector.cpp"
#include"NhanVienPhucVu.h"
#include"DoUong.h"


class NhanVienQuanLi : NhanVien
{
private:
	Vector<DoUong> doUong;
	Vector<NhanVienPhucVu> nvPhucVu;
	float luongTheoNgay;
public:
	void menuQuanLi( );
	// quan li nhan vien
	NhanVienQuanLi();
	/*float getLuongTheoNgay();
	void setLuongTheoNgay(const float&);*/
	void xemDsNV();
	void themNV(const NhanVienPhucVu&);
    void xoaNV(const string&);
	void chinhSuaThongTinNv(const string&);
	float get(const NhanVienPhucVu&, int soNgayLam);
	// quan li menu
	void themMon(const DoUong&);
	void xoaMon(const string&);
	void Edit_Gia(const string&, const float&);
	void update_Mon(const string&, const int&);
};
