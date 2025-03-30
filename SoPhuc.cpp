#include"SoPhuc.h"
SoPhuc::SoPhuc(double iThuc, double iAo): iThuc(iThuc), iAo(iAo){}
void SoPhuc::Nhap(){
    do {
        cout << "Nhap vo phan Thuc va phan Ao: ";
        cin >> iThuc >> iAo;
        if (cin.fail()) { // Chỉ được nhập số phức là số.
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ban nhap khong dung. Vui long nhap lai\n";
        } else {
            break;
        }
    } while (true);
}

void SoPhuc::Xuat()const{
    cout << iThuc;
    if(iAo >= 0)
        cout << " + " << iAo <<"i";
    else
        cout << " - " << abs(iAo) <<"i";
}

// Tính tổng hai số phức.
SoPhuc SoPhuc::Tong(const SoPhuc& a) const{
    return SoPhuc(this->iThuc + a.iThuc, this->iAo + a.iAo);
}

// Tính hiệu hai số phức.
SoPhuc SoPhuc::Hieu(const SoPhuc& a) const{
    return SoPhuc(this->iThuc - a.iThuc, this->iAo - a.iAo);
}

// Tính tích hai số phức: (a1*b1 - a2*b2, a1*b2 + a2*b1)
SoPhuc SoPhuc::Tich(const SoPhuc& a) const{
    double iThuc = this->iThuc * a.iThuc - this->iAo * a.iAo;
    double iAo = this->iThuc * a.iAo + this->iAo * a.iThuc;
    return SoPhuc(iThuc, iAo);
}

// Tính thương hai số phức: 
// ((a1*b1 + a2*b2)/(b1^2 + b2^2), (b1*a2 - a1*b2)/(b1^2 + b2^2))
SoPhuc SoPhuc::Thuong(const SoPhuc& a) const{
    double mau = pow(a.iThuc, 2) + pow(a.iAo, 2);
    if (mau == 0) {
        cout << "Loi: Mau so bang 0!" << endl;
        return SoPhuc(0, 0);
    }
    
    double iThuc = (this->iThuc * a.iThuc + this->iAo * a.iAo) / mau;
    double iAo = (a.iThuc * this->iAo - this->iThuc * a.iAo) / mau;
    return SoPhuc(iThuc, iAo);
}

// Nạp chồng toán tử cin để thuận tiện việc nhập.
istream& operator>>(istream& is, SoPhuc& a){
    a.Nhap();
    return is;
}

// Nạp chồng toán tử cout để thuận tiện việc xuất.
ostream& operator<<(ostream& os,const SoPhuc& a){
    a.Xuat();
    return os;
}
