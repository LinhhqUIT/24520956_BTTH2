#include"PhanSo.h"
PhanSo::PhanSo(int iTu, int iMau): iTu(iTu), iMau(iMau){}
void PhanSo::Nhap(){
    do { //Chỉ được nhập phân số là số.
        cout << "Nhap vao tu so va mau so: ";
        cin >> iTu >> iMau;
        if (cin.fail() || iMau == 0) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ban nhap khong dung. Vui long nhap lai\n";
        } else {
            break;
        }
    } while (true);
}
void PhanSo::Xuat()const{
    PhanSo tam = *this;
    tam.RutGon(); // Mỗi lần xuất thì rút gọn trước.
    // Phân số được xuất theo đúng mẫu.
    if(tam.iMau < -1) 
    cout << -tam.iTu <<"/" << -tam.iMau <<endl;
    else if(tam.iMau == -1)
    cout << -tam.iTu << endl;
    else if( tam.iMau == 1)
    cout << tam.iTu <<endl;
    else if(tam.iMau == 0)
    cout << "Khong xac dinh.";
    else
    cout <<tam.iTu << "/" << tam.iMau <<endl;
}
void PhanSo::RutGon(){
    int Ucln = __gcd(iTu,iMau);
    iTu /= Ucln;
    iMau /= Ucln;
}

// Tính tổng hai phân số.
PhanSo PhanSo::Tong(const PhanSo& a){
    return PhanSo(iTu * a.iMau + iMau * a.iTu, iMau * a.iMau);
}

// Tính hiệu hai phân số.
PhanSo PhanSo::Hieu(const PhanSo& a){
    return PhanSo(iTu * a.iMau - iMau * a.iTu, iMau * a.iMau);
}

// Tính tích hai phân số.
PhanSo PhanSo::Tich(const PhanSo& a){
    return PhanSo(iTu * a.iTu, iMau * a.iMau);
}

// Tính thương hai phân số.
PhanSo PhanSo::Thuong(const PhanSo& a){
    return PhanSo(iTu * a.iMau, iMau * a.iTu);
}

// So sánh hai phân số.
int PhanSo::SoSanh(const PhanSo& a) {
    long long left = 1LL * iTu * a.iMau;
    long long right = 1LL * iMau * a.iTu;
    if (left == right) {
        return 0; 
    }
    if ((iMau > 0 && a.iMau > 0) || (iMau < 0 && a.iMau < 0)) {
        return left > right ? 1 : -1;
    } else {
        return left < right ? 1 : -1;
    }
}

// Nạp chồng toán tử cin để thuận tiện việc nhập.
istream& operator>>(istream& is, PhanSo& a){
    a.Nhap();
    return is;
}

// Nạp chồng toán tử cout để thuận tiện việc xuất.
ostream& operator<<(ostream& os,const PhanSo& a){
    a.Xuat();
    return os;
}
