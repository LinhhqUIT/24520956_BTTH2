#pragma once
#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    int iTu;
    int iMau;
public:
    PhanSo(int = 1, int = 1);
    void Nhap();
    void Xuat() const;
    int GetTu(){return iTu;}
    void RutGon();
    PhanSo Tong(const PhanSo&);
    PhanSo Hieu(const PhanSo&);
    PhanSo Tich(const PhanSo&);
    PhanSo Thuong(const PhanSo&);
    int SoSanh(const PhanSo&);
    friend istream& operator>>(istream&, PhanSo&);
    friend ostream& operator<<(ostream&,const PhanSo&);
};


