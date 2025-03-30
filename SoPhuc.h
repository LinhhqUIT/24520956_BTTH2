#pragma once
#include<bits/stdc++.h>
using namespace std;

class SoPhuc
{
private:
    double iThuc;
    double iAo;
public:
    SoPhuc(double = 0, double = 0);
    void Nhap();
    void Xuat() const;
    SoPhuc Tong(const SoPhuc&) const;
    SoPhuc Hieu(const SoPhuc&) const;
    SoPhuc Tich(const SoPhuc&) const;
    SoPhuc Thuong(const SoPhuc&) const;
    friend istream& operator>>(istream&, SoPhuc&);
    friend ostream& operator<<(ostream&,const SoPhuc&);
};
