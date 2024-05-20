/*
    Quản lý siêu thị
    Nhóm 3
    Tên: Đinh Duy Vinh
    Lớp TPM7-CMU
*/
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

// TAO LOP CHA
class sanPham {
protected:
    string ten;
    string maSP;
    long soLuong;
    long soLuongBanTrongNgay;
    string congTySanXuat;
    string noiSanXuat;
    string luuY;
    string diaChi;
    string SDT;
    double gia;
    double giaNhap;
    double giaSale; // nhap so gia sale, VD: 10% la nhap 0.1
    double thue; // nhập số thuế
public:
    sanPham() {
        this -> ten = "";
        this -> maSP = "";
        this -> soLuong = 0;
        this -> soLuongBanTrongNgay = 0;
        this -> congTySanXuat = "";
        this -> noiSanXuat = "";
        this -> luuY = "";
        this -> diaChi = "";
        this -> SDT = "";
        this -> gia = 0;
        this -> giaNhap = 0;
        this -> giaSale = 0;
        this -> thue = 0;
    }

    sanPham(string ten, string maSP, long soLuong, long soLuongBanTrongNgay, string congTySanXuat, string noiSanXuat, string luuY, string diaChi, string SDT, double gia, double giaNhap, double giaSale, double thue) {
        this -> ten = ten;
        this -> maSP = maSP;
        this -> soLuong = soLuong;
        this -> soLuongBanTrongNgay = soLuongBanTrongNgay;
        this -> congTySanXuat = congTySanXuat;
        this -> noiSanXuat = noiSanXuat;
        this -> luuY = luuY;
        this -> diaChi = diaChi;
        this -> SDT = SDT;
        this -> gia = gia;
        this -> giaNhap = giaNhap;
        this -> giaSale = giaSale;
        this -> thue = thue;
    }

    // Setter
    void setTen(string ten) {
        this -> ten = ten;
    }
    void setMaSP(string maSP) {
        this -> maSP = maSP;
    }
    void setSoLuong(long soLuong) {
        this -> soLuong = soLuong;
    }
    void setSoLuongBanTrongNgay(long soLuongBanTrongNgay) {
        this -> soLuongBanTrongNgay = soLuongBanTrongNgay;
    }
    void setCongTySanXuat(string congTySanXuat) {
        this -> congTySanXuat = congTySanXuat;
    }
    void setNoiSanXuat(string noiSanXuat) {
        this -> noiSanXuat = noiSanXuat;
    }
    void setLuuY(string luuY) {
        this -> luuY = luuY;
    }
    void setDiaChi(string diaChi) {
        this -> diaChi = diaChi;
    }
    void setSDT(string SDT) {
        this -> SDT = SDT;
    }
    void setGia(double gia) {
        this -> gia = gia;
    }
    void setGiaNhap(double giaNhap) {
        this -> giaNhap = giaNhap;
    }
    void setGiaSale(double giaSale) {
        this -> giaSale = giaSale;
    }
    void setThue(double thue) {
        this -> thue = thue;
    }

    // Getter
    string getTen() {
        return this -> ten;
    }
    string getMaSP() {
        return this -> maSP;
    }
    long getSoLuong() {
        return this -> soLuong;
    }
    long getSoLuongBanTrongNgay() {
        return this -> soLuongBanTrongNgay;
    }
    string getCongTySanXuat() {
        return this -> congTySanXuat;
    }
    string getNoiSanXuat() {
        return this -> noiSanXuat;
    }
    string getLuuY() {
        return this -> luuY;
    }
    string getDiaChi() {
        return this -> diaChi;
    }
    string getSDT() {
        return this -> SDT;
    }
    double getGia() {
        return this -> gia;
    }
    double getGiaNhap() {
        return this -> giaNhap;
    }
    double getGiaSale() {
        return this -> giaSale;
    }
    double getThue() {
        return this -> thue;
    }

    virtual void nhapSanPham() {
        cout << "+ Moi ban nhap san pham:\n";
        cout << "- Ten: "; getline(cin, ten);
        this -> setTen(ten);
        cout << "- Ma san pham: "; getline(cin, maSP);
        this -> setMaSP(maSP);
        cout << "- So luong: "; cin >> soLuong;
        cin.ignore();
        this -> setSoLuong(soLuong);
        cout << "- So luong ban trong ngay: "; cin >> soLuongBanTrongNgay;
        cin.ignore();
        this -> setSoLuongBanTrongNgay(soLuongBanTrongNgay);
        cout << "- Cong ty san xuat: "; getline(cin, congTySanXuat);
        this -> setCongTySanXuat(congTySanXuat);
        cout << "- Noi san xuat: "; getline(cin, noiSanXuat);
        this -> setNoiSanXuat(noiSanXuat);
        cout << "- Luu y: "; getline(cin, luuY);
        this -> setLuuY(luuY);
        cout << "- Dia chi: "; getline(cin, diaChi);
        this -> setDiaChi(diaChi);
        cout << "- So dien thoai: "; getline(cin, SDT);
        this -> setSDT(SDT);
        cout << "- Gia tien (VND): "; cin >> gia;
        cin.ignore();
        this -> setGia(gia);
        cout << "- Gia tien nhap hang (VND): "; cin >> giaNhap;
        cin.ignore();
        this -> setGiaNhap(giaNhap);
        cout << "- Phan tram sale (%): "; cin >> giaSale;
        cin.ignore();
        this -> setGiaSale(giaSale);
        cout << "- Nhap thue (%): "; cin >> thue;
        cin.ignore();
        this -> setThue(thue);
    }

    virtual void output() {
        cout << "- Ten: " << this -> getTen() << endl;
        cout << "- Ma san pham: " << this -> getMaSP() << endl;
        cout << "- So luong: " << this -> getSoLuong() << endl;
        cout << "- So luong ban trong ngay: " << this -> getSoLuongBanTrongNgay() << endl;
        cout << "- Cong ty san xuat: " << this -> getCongTySanXuat() << endl;
        cout << "- Noi san xuat: " << this -> getNoiSanXuat() << endl;
        cout << "- Luu y: " << this -> getLuuY() << endl;
        cout << "- Dia chi: " << this -> getDiaChi() << endl;
        cout << "- So dien thoai: " << this -> getSDT() << endl;
        cout << "- Gia tien (VND): " << this -> getGia() << endl;
        // cout << "- Gia tien Sale (VND): " << this -> getGiaSale() << endl;
    }

    virtual void hienThiSanPhamVaoFile(ofstream& file) {
        file << "- Ten: " << this -> getTen() << endl;
        file << "- Ma san pham: " << this -> getMaSP() << endl;
        file << "- So luong: " << this -> getSoLuong() << endl;
        file << "- So luong ban trong ngay: " << this -> getSoLuongBanTrongNgay() << endl;
        file << "- Cong ty san xuat: " << this -> getCongTySanXuat() << endl;
        file << "- Noi san xuat: " << this -> getNoiSanXuat() << endl;
        file << "- Luu y: " << this -> getLuuY() << endl;
        file << "- Dia chi: " << this -> getDiaChi() << endl;
        file << "- So dien thoai: " << this -> getSDT() << endl;
        file << "- Gia tien (VND): " << this -> getGia() << endl;
        // file << "- Gia tien Sale (VND): " << this -> getGiaSale() << endl;
    }

    virtual double tinhGiaSale() {
        return this -> getGia();
    }

    virtual double soLuongTonKho() {
        return 0;
    }

    virtual double tinhThue() {
        // Mặc định, sản phẩm không chịu thuế
        return 0;
    }

    virtual double tinhLoiNhuan() {
        return 0;
    }
};

// TAO LOP CON

// HANG DONG LANH
class hangDongLanh: public sanPham {
public:
    float trongLuong;
    string ngaySanXuat;
    string hanSuDung;

    hangDongLanh() {
        this -> trongLuong = 0;
        this -> ngaySanXuat = "";
        this -> hanSuDung = "";
    }

    hangDongLanh(float trongLuong, string ngaySanXuat, string hanSuDung) {
        this -> trongLuong = trongLuong;
        this -> ngaySanXuat = ngaySanXuat;
        this -> hanSuDung = hanSuDung;
    }

    void setTrongLuong(float trongLuong) {
        this -> trongLuong = trongLuong;
    }
    void setNgaySanXuat(string ngaySanXuat) {
        this -> ngaySanXuat = ngaySanXuat;
    }
    void setHanSuDung(string hanSuDung) {
        this -> hanSuDung = hanSuDung;
    }

    float getTrongLuong() {
        return this -> trongLuong;
    }
    string getNgaySanXuat() {
        return this -> ngaySanXuat;
    }
    string getHanSuDung() {
        return this -> hanSuDung;
    }
    
    void nhapSanPham() override {
        sanPham::nhapSanPham();
        cout << "+ Nhap trong luong (gam): "; cin >> this -> trongLuong;
        cin.ignore();
        this -> setTrongLuong(trongLuong);
        cout << "+ Nhap ngay san xuat (dd/mm/YYYY): "; getline(cin, this -> ngaySanXuat);
        this -> setNgaySanXuat(ngaySanXuat);
        cout << "+ Nhap han su dung (dd/mm/YYYY): "; getline(cin, this -> hanSuDung);
        this -> setHanSuDung(hanSuDung);
    }

    void output() override {
        cout << "\n--------- THONG TIN HANG DONG LANH ---------\n";
        sanPham::output();
        cout << "+ Trong Luong (gam): " << this -> getTrongLuong() << endl;
        cout << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        cout << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        cout << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        cout << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        cout << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    void hienThiSanPhamVaoFile(ofstream& file) override {
        file << "\n--------- THONG TIN HANG DONG LANH ---------\n";
        sanPham::hienThiSanPhamVaoFile(file);
        file << "+ Trong Luong (gam): " << this -> getTrongLuong() << endl;
        file << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        file << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        file << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        file << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        file << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    double tinhGiaSale() override {
        return this -> getGia() - this -> getGia() * this -> getGiaSale()/100;
    }

    double soLuongTonKho() override {
        return this -> getSoLuong() - this -> getSoLuongBanTrongNgay();
    }

    double tinhThue() override {
        return this -> getGia() * this -> getThue()/100;
    }

    double tinhLoiNhuan() override {
        return (this -> getGia() - this -> getGiaNhap()) * this -> getSoLuong();
    }
};

// DO UONG
class doUong: public sanPham {
public:
    float nhietDoBaoQuan;
    string ngaySanXuat;
    string hanSuDung;
    string size;

    doUong() {
        this -> nhietDoBaoQuan = 0;
        this -> ngaySanXuat = "";
        this -> hanSuDung = "";
        this -> size = "";
    }

    doUong(float nhietDoBaoQuan, string ngaySanXuat, string hanSuDung, string size) {
        this -> nhietDoBaoQuan = nhietDoBaoQuan;
        this -> ngaySanXuat = ngaySanXuat;
        this -> hanSuDung = hanSuDung;
        this -> size = size;
    }

    void setNhietDoBaoQuan(float nhietDoBaoQuan) {
        this -> nhietDoBaoQuan = nhietDoBaoQuan;
    }
    void setNgaySanXuat(string ngaySanXuat) {
        this -> ngaySanXuat = ngaySanXuat;
    }
    void setHanSuDung(string hanSuDung) {
        this -> hanSuDung = hanSuDung;
    }
    void setSize(string size) {
        this -> size = size;
    }

    float getNhietDoBaoQuan() {
        return this -> nhietDoBaoQuan;
    }
    string getNgaySanXuat() {
        return this -> ngaySanXuat;
    }
    string getHanSuDung() {
        return this -> hanSuDung;
    }
    string getSize() {
        return this -> size;
    }

    void nhapSanPham() override {
        sanPham::nhapSanPham();
        cout << "+ Nhap nhiet do bao quan (do C): "; cin >> this -> nhietDoBaoQuan;
        cin.ignore();
        this -> setNhietDoBaoQuan(nhietDoBaoQuan);
        cout << "+ Nhap ngay san xuat (dd/mm/YYYY): "; getline(cin, this -> ngaySanXuat);
        this -> setNgaySanXuat(ngaySanXuat);
        cout << "+ Nhap han su dung (dd/mm/YYYY): "; getline(cin, this -> hanSuDung);
        this -> setHanSuDung(hanSuDung);
        cout << "+ Nhap size: "; getline(cin, this -> size);
        this -> setSize(size);
    }

    void output() override {
        cout << "\n--------- THONG TIN DO UONG ---------\n";
        sanPham::output();
        cout << "+ Nhiet do bao quan (do C): " << this -> getNhietDoBaoQuan() << endl;
        cout << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        cout << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        cout << "+ Size: " << this -> getSize() << endl;
        cout << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        cout << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        cout << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    void hienThiSanPhamVaoFile(ofstream& file) override {
        file << "\n--------- THONG TIN DO UONG ---------\n";
        sanPham::hienThiSanPhamVaoFile(file);
        file << "+ Nhiet do bao quan (do C): " << this -> getNhietDoBaoQuan() << endl;
        file << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        file << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        file << "+ Size: " << this -> getSize() << endl;
        file << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        file << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        file << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    double tinhGiaSale() override {
        return this -> getGia() - this -> getGia() * this -> getGiaSale()/100;
    }

    double soLuongTonKho() override {
        return this -> getSoLuong() - this -> getSoLuongBanTrongNgay();
    }

    double tinhThue() override {
        return this -> getGia() * this -> getThue()/100;
    }

    double tinhLoiNhuan() override {
        return (this -> getGia() - this -> getGiaNhap()) * this -> getSoLuong();
    }
};

// MY PHAM
class myPham: public sanPham {
public:
    string thanhPhan;
    string xuatXu;
    string thuongHieu;
    string ngaySanXuat;
    string hanSuDung;
    string size;
    string HDSD;

    myPham() {
        this -> thanhPhan = "";
        this -> xuatXu = "";
        this -> thuongHieu = "";
        this -> ngaySanXuat = "";
        this -> hanSuDung = "";
        this -> size = "";
        this -> HDSD = "";
    }

    myPham(string thanhPhan, string xuatXu, string thuongHieu, string ngaySanXuat, string hanSuDung, string size, string HDSD) {
        this -> thanhPhan = thanhPhan;
        this -> xuatXu = xuatXu;
        this -> thuongHieu = thuongHieu;
        this -> ngaySanXuat = ngaySanXuat;
        this -> hanSuDung = hanSuDung;
        this -> size = size;
        this -> HDSD = HDSD;
    }

    void setThanhPhan(string thanhPhan) {
        this -> thanhPhan = thanhPhan;
    }
    void setXuatXu(string xuatXu) {
        this -> xuatXu = xuatXu;
    }
    void setThuongHieu(string thuongHieu) {
        this -> thuongHieu = thuongHieu;
    }
    void setNgaySanXuat(string ngaySanXuat) {
        this -> ngaySanXuat = ngaySanXuat;
    }
    void setHanSuDung(string hanSuDung) {
        this -> hanSuDung = hanSuDung;
    }
    void setSize(string size) {
        this -> size = size;
    }
    void setHDSD(string HDSD) {
        this -> HDSD = HDSD;
    }

    string getThanhPhan() {
        return this -> thanhPhan;
    }
    string getXuatXu() {
        return this -> xuatXu;
    }
    string getThuongHieu() {
        return this -> thuongHieu;
    }
    string getNgaySanXuat() {
        return this -> ngaySanXuat;
    }
    string getHanSuDung() {
        return this -> hanSuDung;
    }
    string getSize() {
        return this -> size;
    }
    string getHDSD() {
        return this -> HDSD;
    }

    void nhapSanPham() override {
        sanPham::nhapSanPham();
        cout << "+ Nhap thanh phan: "; getline(cin, this -> thanhPhan);
        this -> setThanhPhan(thanhPhan);
        cout << "+ Nhap xuat xu: "; getline(cin, this -> xuatXu);
        this -> setXuatXu(xuatXu);
        cout << "+ Nhap thuong hieu: "; getline(cin, this -> thuongHieu);
        this -> setThuongHieu(thuongHieu);
        cout << "+ Nhap ngay san xuat (dd/mm/YYYY): "; getline(cin, this -> ngaySanXuat);
        this -> setNgaySanXuat(ngaySanXuat);
        cout << "+ Nhap han su dung (dd/mm/YYYY): "; getline(cin, this -> hanSuDung);
        this -> setHanSuDung(hanSuDung);
        cout << "+ Nhap size: "; getline(cin, this -> size);
        this -> setSize(size);
        cout << "+ Nhap HDSD: "; getline(cin, this -> HDSD);
        this -> setHDSD(HDSD);
    }

    void output() override {
        cout << "\n--------- THONG TIN MY PHAM ---------\n";
        sanPham::output();
        cout << "+ Thanh Phan: " << this -> getThanhPhan() << endl;
        cout << "+ Xuat Xu: " << this -> getXuatXu() << endl;
        cout << "+ Thuong Hieu: " << this -> getThuongHieu() << endl;
        cout << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        cout << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        cout << "+ Size: " << this -> getSize() << endl;
        cout << "+ HDSD: " << this -> getHDSD() << endl;
        cout << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        cout << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        cout << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    void hienThiSanPhamVaoFile(ofstream& file) override {
        file << "\n--------- THONG TIN MY PHAM ---------\n";
        sanPham::hienThiSanPhamVaoFile(file);
        file << "+ Thanh Phan: " << this -> getThanhPhan() << endl;
        file << "+ Xuat Xu: " << this -> getXuatXu() << endl;
        file << "+ Thuong Hieu: " << this -> getThuongHieu() << endl;
        file << "+ Ngay San Xuat: " << this -> getNgaySanXuat() << endl;
        file << "+ Han Su Dung: " << this -> getHanSuDung() << endl;
        file << "+ Size: " << this -> getSize() << endl;
        file << "+ HDSD: " << this -> getHDSD() << endl;
        file << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        file << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        file << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    double tinhGiaSale() override {
        return this -> getGia() - this -> getGia() * this -> getGiaSale()/100;
    }

    double soLuongTonKho() override {
        return this -> getSoLuong() - this -> getSoLuongBanTrongNgay();
    }

    double tinhThue() override {
        return this -> getGia() * this -> getThue()/100;
    }

    double tinhLoiNhuan() override {
        return (this -> getGia() - this -> getGiaNhap()) * this -> getSoLuong();
    }
};

// THIET BI DIEN TU
class thietBiDienTu: public sanPham {
public:
    string thoiGianBaoHanh;
    string hangMay;
    string linhKien;
    string HDSD;

    thietBiDienTu() {
        this -> thoiGianBaoHanh = "";
        this -> hangMay = "";
        this -> linhKien = "";
        this -> HDSD = "";
    }

    thietBiDienTu(string thoiGianBaoHanh, string hangMay, string linhKien, string HDSD) {
        this -> thoiGianBaoHanh = thoiGianBaoHanh;
        this -> hangMay = hangMay;
        this -> linhKien = linhKien;
        this -> HDSD = HDSD;
    }

    void setThoiGianBaoHanh(string thoiGianBaoHanh) {
        this -> thoiGianBaoHanh = thoiGianBaoHanh;
    }
    void setHangMay(string hangMay) {
        this -> hangMay = hangMay;
    }
    void setLinhKien(string linhKien) {
        this -> linhKien = linhKien;
    }
    void setHDSD(string HDSD) {
        this -> HDSD = HDSD;
    }

    string getThoiGianBaoHanh() {
        return this -> thoiGianBaoHanh;
    }
    string getHangMay() {
        return this -> hangMay;
    }
    string getLinhKien() {
        return this -> linhKien;
    }
    string getHDSD() {
        return this -> HDSD;
    }

    void nhapSanPham() override {
        sanPham::nhapSanPham();
        cout << "+ Nhap thoi gian bao hanh (thang): "; getline(cin, this -> thoiGianBaoHanh);
        this -> setThoiGianBaoHanh(thoiGianBaoHanh);
        cout << "+ Nhap hang may: "; getline(cin, this -> hangMay);
        this -> setHangMay(hangMay);
        cout << "+ Nhap linh kien: "; getline(cin, this -> linhKien);
        this -> setLinhKien(linhKien);
        cout << "+ Nhap HDSD: "; getline(cin, this -> HDSD);
        this -> setHDSD(HDSD);
    }

    void output() override {
        cout << "\n--------- THONG TIN THIET BI DIEN TU ---------\n";
        sanPham::output();
        cout << "+ Thoi Gian Bao Hanh (thang): " << this -> getThoiGianBaoHanh() << endl;
        cout << "+ Hang May: " << this -> getHangMay() << endl;
        cout << "+ Linh Kien: " << this -> getLinhKien() << endl;
        cout << "+ HDSD: " << this -> getHDSD() << endl;
        cout << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        cout << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        cout << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    void hienThiSanPhamVaoFile(ofstream& file) override {
        file << "\n--------- THONG TIN THIET BI DIEN TU ---------\n";
        sanPham::hienThiSanPhamVaoFile(file);
        file << "+ Thoi Gian Bao Hanh (thang): " << this -> getThoiGianBaoHanh() << endl;
        file << "+ Hang May: " << this -> getHangMay() << endl;
        file << "+ Linh Kien: " << this -> getLinhKien() << endl;
        file << "+ HDSD: " << this -> getHDSD() << endl;
        file << "* Gia tien sale: " << this -> tinhGiaSale() << endl;
        file << "* Gia thue phai tra: " << this -> tinhThue() << endl;
        file << "* Loi nhuan thu ve: " << this -> tinhLoiNhuan() << endl;
    }

    double tinhGiaSale() override {
        return this -> getGia() - this -> getGia() * this -> getGiaSale()/100;
    }

    double soLuongTonKho() override {
        return this -> getSoLuong() - this -> getSoLuongBanTrongNgay();
    }

    double tinhThue() override {
        return this -> getGia() * this -> getThue()/100;
    }

    double tinhLoiNhuan() override {
        return (this -> getGia() - this -> getGiaNhap()) * this -> getSoLuong();
    }
};

class ListSanPham {
public:
    sanPham *ds[20];
    
    ListSanPham() {
        k = 0;
        for (int i = 0; i < 20; i++) {
            ds[i] = nullptr;
        }
    }

    int k;
    void inputList() {
        ofstream file;
        file.open("C:\\Users\\LENOVO\\Downloads\\do-an\\data\\data.txt", ios::app); // Mở file để ghi, chế độ append
        if (!file.is_open()) {
            cout << "Khong mo duoc file de ghi!\n";
            return;
        }

        int chon;
        k = 0;
        while (1) {
            cout << "\n========= MENU =========\n";
            cout << "1. Su dung de nhap Hang Dong Lanh\n";
            cout << "2. Su dung de nhap Do Uong\n";
            cout << "3. Su dung de nhap My Pham\n";
            cout << "4. Su dung de nhap Thiet Bi Dien Tu\n";
            cout << "5. Thoat chuong trinh (stop)\n";
            cout << "\nMoi ban nhap lua chon: "; 
            cin >> chon;
            cin.ignore();

            if (chon < 1 || chon > 5) {
                cout << "=> Lua chon khong hop le. Vui long nhap lai.\n";
                continue;
            }

            if (chon == 5)
                break;

            if (k >= 20) {
                cout << "=> Danh sach da day. Khong the them san pham moi.\n";
                break;
            }

            if (chon == 1)
                ds[k] = new hangDongLanh();
            else if (chon == 2)
                ds[k] = new doUong();
            else if (chon == 3)
                ds[k] = new myPham();
            else if (chon == 4)
                ds[k] = new thietBiDienTu();

            if (ds[k] != nullptr) {
                ds[k] -> nhapSanPham();
                ds[k] -> hienThiSanPhamVaoFile(file);
                k++;
            } else {
                cout << "=> Loi trong qua trinh tao doi tuong san pham.\n";
            }
        }
        file.close();
    }

    // void output() {
    //     ifstream file;
    //     file.open("C:\Users\LENOVO\Downloads\do-an\data\\data.txt"); // Mở file để đọc
    //     if (!file.is_open()) {
    //         cout << "Khong mo duoc file de doc!\n";
    //         return;
    //     }
    //     cout << "\n========= DANH SACH SAN PHAM =========\n";
    //     string line;
    //     while (getline(file, line)) {
    //         cout << line << endl;
    //     }
    //     file.close();
    // }

    void outputList() {
        cout << "\n========= DANH SACH SAN PHAM =========\n";
        for (int i = 0; i < k; i++) {
            ds[i] -> output();
            cout << "-----------------------------------" << endl;
        }
    }

    // Tinh tong doanh thu va loi nhuan cua ca cua hang theo thang
    // void tongDoanhThuLoiNhuan(int thang) {
    //     double tongDoanhThu = 0;
    //     double tongLoiNhuan = 0;
    //     for (int i = 0; i < k; i++) {
    //         tongDoanhThu += ds[i] -> getGia() * ds[i] -> getSoLuong();
    //         tongLoiNhuan += ds[i] -> tinhLoiNhuan();
    //     }
    //     cout << "=> Thong ke doanh thu va loi nhuan thang " << thang << ":\n";
    //     cout << "-> Tong doanh thu: " << tongDoanhThu << endl;
    //     cout << "-> Tong loi nhuan: " << tongLoiNhuan << endl;
    // }

    // float sumOfSalary() {
    //     float sum = 0;
    //     for (long i = 0; i < k; i++) {
    //         sum += ds[i] -> getSalary();
    //     }
    //     return sum;
    // }

    // Ham tim kiem
    void searchByName(string MaSP) {
        ofstream file;
        file.open("C:\\Users\\LENOVO\\Downloads\\do-an\\data\\sapxep.txt"); // Mở file để ghi, chế độ append
        if (!file.is_open()) {
            cout << "Khong mo duoc file de ghi!\n";
            return;
        }
        bool found = false;
        for (int i = 0; i < k; ++i) {
            if (dynamic_cast<sanPham*>(ds[i]) -> getMaSP() == MaSP) {
                found = true;
                cout << "=> Ma san pham duoc tim: " << endl;
                ds[i] -> hienThiSanPhamVaoFile(file);
            }
        }
        if (!found) {
            cout << "=> 'Khong tim thay ma san pham! " << MaSP << "'." << endl;
        }
    }

    void outputSearch() {
        ifstream file;
        file.open("C:\\Users\\LENOVO\\Downloads\\do-an\\data\\sapxep.txt"); // Mở file để đọc
        if (!file.is_open()) {
            cout << "=> Khong mo duoc file de doc!\n";
            return;
        }
        cout << "\n========= DANH SACH SAN PHAM =========\n";
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

    // Sap xep theo gia thanh (gia tien)
    void sort() {
        for(int i = 0; i < k; i++) {
            for(int j = i + 1; j < k; j++) {
                if(ds[i] -> getGia() > ds[j] -> getGia()) {
                    sanPham *temp = ds[i];
                    ds[i] = ds[j];
                    ds[j] = temp;
                }
            }
        }
    }

    void outputKhachHang() {
        string tenKhachHang;
        string ngay;
        string sanPham;
        int soLuong;
        double tongBill;
        string danhGia;
        ofstream fo;
        fo.open("C:\\Users\\LENOVO\\Downloads\\do-an\\data\\datakhachhang.txt", ios::app); // Mở file để ghi, chế độ append
        if (!fo.is_open())
            cout << "Khong mo duoc file de ghi!\n";
        else {
            cout << "--------- KHACH HANG ---------"<< endl;
            cout << "- Nhap ten khach hang than thiet: "; getline(cin, tenKhachHang);
            cout << "Ngay mua: "; getline(cin, ngay);
            cout << "Ten san pham: "; getline(cin, sanPham);
            cout << "So luong: "; cin >> soLuong;
            cout << "Tong so tien: "; cin >> tongBill;
            cin.ignore();
            cout << "Danh gia tu khach hang: "; getline(cin, danhGia);
            fo << tenKhachHang << endl << "Ngay: " << ngay << "  san pham: "<< sanPham << " soluong: " << soLuong << endl << "Tong tien: " << tongBill << endl;
            fo << "Danh gia tu khach hang: " << danhGia;
        }
        fo.close();
    }

    void inputKhachHang() {
        ifstream fi;
        fi.open("C:\\Users\\LENOVO\\Downloads\\do-an\\data\\datakhachhang.txt");
        string str;
        if(!fi.is_open())
            cout <<"Khong tim thay";
        else {
            getline(fi, str);
            cout << str << endl;
        }
        fi.close();
    }

    // void deleteInformation() {
    //     int location;
    //     cout << "Nhap vi tri ban muon xoa: "; cin >> location;
    //     if (location >= 0 && location <= k) {
    //         for (int i = location; i < k - 1; i++) {
    //             ds[i] = ds[i+1];
    //             k--;
    //         }
    //     }
    // }

    // void addInfomation() {
    //     long chooseAdd;
    //     while(1) {
    //         do {
    //             cout << "\n *Add Emplpyee's Information / stop (1, 2): ";
    //             cin >> chooseAdd;
    //             if(chooseAdd != 1 && chooseAdd != 2)
    //                 cout << "!!!!! Please re-enter numbers in ranges 1, 2, 3 !!!!!" << endl;
    //         } while(chooseAdd != 1 && chooseAdd != 2);
    //         cout << "*** Choose object you want enter information***\n";
    //         if(chooseAdd == 2)
    //             break;
    //         if(chooseAdd == 1) {
    //             inputEmp();
    //             break;
    //         }
    //         k++;
    //     }
    // }

};

int main() 
{
    ListSanPham ds;
    string MASP;

    ds.inputList();
    ds.outputList();

    cout << "+ Nhap ten ma san pham can tim: "; getline(cin, MASP);
    ds.searchByName(MASP);
    ds.outputSearch();

    ds.sort();
    cout << "===> Danh sach sau khi sap xep: ";
    ds.outputList();

    ds.outputKhachHang();
    ds.inputKhachHang();

    // cái này để ai chạy vscode (mở terminal) thì mới sài
    system("pause");
    return 0;
}