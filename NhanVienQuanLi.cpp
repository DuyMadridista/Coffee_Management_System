#include<iostream>
#include"NhanVienQuanLi.h"
using namespace std;

/*
	Vector<Vector<DoUong>> dsDoUong;
	Vector<NhanVienPhucVu> DsNvPhucVu;
*/
NhanVienQuanLi::NhanVienQuanLi() {
}

void NhanVienQuanLi::xemDsNV() {
	cout << "DANH SACH NHAN VIEN PHUC VU:" << endl;
	for (int i = 0; i < nvPhucVu.size(); i++) {
		nvPhucVu[i].xuatThongTin();
	}
}
void NhanVienQuanLi::themNV(const NhanVienPhucVu& newNV) {
	nvPhucVu.push_back(newNV);
}
void NhanVienQuanLi::xoaNV(const string &maNv) {
	for (int i = 0; i < nvPhucVu.size(); i++) {
		if (nvPhucVu[i].getMaNv() == maNv) {
			nvPhucVu.erase(i);
			cout << "Da xoa nhan vien" << endl;
			return;
		}
	}
	cout << "Khong co nhan vien nay trong danh sach" << endl;
}
/*
	string hoTen;
	string sdt;
	string TK;
	string MK;
	float hsl;
*/
void NhanVienQuanLi::chinhSuaThongTinNv(const string& maNv) {
	for (int i = 0; i < nvPhucVu.size(); i++)
	{
		if (nvPhucVu[i].getMaNv() == maNv)
		{
			while (true)
			{
				int choise;
				system("cls");
				cout << "===============================CHINH SUA THONG TIN NHAN VIEN==============================";
				cout << "Moi nhap lua chon: " << endl;
				cout << "1. Chinh sua ho ten" << endl;
				cout << "2. Chinh sua sdt" << endl;
				cout << "3. Chinh sua he so luong" << endl;
				cout << "0.Thoat" << endl;
				cout << "=========================================//===============================================";
				cin >> choise;
				if (choise == 1) {

					string tenMoi;
					cout << "moi nhap ten moi: ";
					getline(cin, tenMoi);

					nvPhucVu[i].setName(tenMoi);
				}
				else if (choise == 2) {
					string sdtMoi;
					cout << "moi nhap ten moi: ";
					getline(cin, sdtMoi);

					nvPhucVu[i].setSdt(sdtMoi);
				}
				else if (choise == 3) {
					string	hslMoi;
					cout << "moi nhap he so luong moi: ";
					getline(cin, hslMoi);

					nvPhucVu[i].setSdt(hslMoi);
				}
				else break;
			}
		}
		else {
			cout << "ma nhan vien khong dung, moi ban nhap lai";
			system("pause");
			break;
		}

	}
}
// quan li menu
void NhanVienQuanLi::themMon(const DoUong& douong) {
	doUong.push_back(douong);
}
void NhanVienQuanLi::xoaMon(const string& maDoUong) {
	for (int i = 0; i < doUong.size(); i++) {
		if (doUong[i].getMaDoUong() == maDoUong) {
			doUong.erase(i);
			cout << "Da xoa do uong nay khoi MENU" << endl;
			return;
		}
	}
	cout << "KHONG CO DO UONG NAY TRONG DANH SACH" << endl;
}
void NhanVienQuanLi::Edit_Gia(const string& MaDouong, const float& gia) {
	for (int i = 0; i < doUong.size(); i++) {
		if (doUong[i].getMaDoUong() == MaDouong) {
			doUong[i].setGia(gia);
			return;
		}
	}
	cout << "KHONG CO DO UONG NAY TRONG DANH SACH" << endl;
}
void NhanVienQuanLi::update_Mon(const string& MaDouong, const int& newsl) {
	for (int i = 0; i < doUong.size(); i++) {
		if (doUong[i].getMaDoUong() == MaDouong) {
			doUong[i].setSoLuong(newsl);
			return;
		}
	}
	cout << "KHONG CO DO UONG NAY TRONG DANH SACH" << endl;
}
void NhanVienQuanLi::menuQuanLi() {
	while (true) {
		system("cls");
		cout << "===================================== MENU ===== QUAN ===== LI================================ \n";
		cout << "1.xem danh sach nhan vien phuc vu\n";
		cout << "2.them nhan vien phuc vu \n";
		cout << "3.xoa nhan vien phuc vu\n";
		cout << "4.chinh sua thong tin nhan vien phuc vu\n";
		cout << "5.them mon\n";
		cout << "6.xoa mon\n";
		cout << "7.chinh sua gia mon\n";
		cout << "8.cap nhat so luong con trong kho cua 1 mon \n";
		cout << "============================================================================================== \n";
		cout << "moi nhap lua chon: ";
		int luachon;
		cin >> luachon;
		if (luachon == 1) { xemDsNV(); }
		else if (luachon == 2) {
			NhanVienPhucVu a;
			a.nhapThongTin();
			themNV(a);
		}
		else if (luachon == 3) {
			string manv;
			cout << "nhap ma nhan vien: ";
			cin >> manv;
			chinhSuaThongTinNv(manv);

		}
		else if (luachon == 4) {
			string manv;
			cout << "nhap ma nhan vien can xoa: ";
			cin >> manv;
			xoaNV(manv);
		}
		else if (luachon == 5) {
			DoUong a;
			a.nhapThongTinDoUong();
			themMon(a);
		}
		else if (luachon == 6) {
			string mamon;
			cout << "nhap ma mon do uong can xoa: ";
			cin >> mamon;
			xoaNV(mamon);
		}
		else if (luachon == 7) {
			string madouong;
			cout << "nhap ma do uong: ";
			cin >> madouong;
			float gia;
			cout << "gia moi: ";
			cin >> gia;
			Edit_Gia(madouong, gia);
		}
		else if (luachon == 8) {
			string madouong;
			cout << "nhap ma do uong: ";
			cin >> madouong;
			float soluong;
			cout << "so luong con lai: ";
			cin >> soluong;
			Edit_Gia(madouong, soluong);
		}
		else if (luachon == 8) { break; }
	}
}


