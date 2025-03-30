#pragma once
#include<bits/stdc++.h>
using namespace std;

class SoPhuc
{
private:
    double iThuc;
    double iAo;
public:
    // Hàm thiết lập constructor giá trị mặc định của số phức là (0,0).
    SoPhuc(double = 0, double = 0);

    // Hàm nhập số phức. input, output: số phức.
    void Nhap();

    // Hàm xuất số phức. input: số phức. output: xuất số phức theo định dạng.
    void Xuat() const;

    // Hàm tính tổng hai số phức. input: hai số phức. output: tổng của hai số phức.
    // Hướng giải thuật: A + B = (a1+b1, a2+b2) với A(a1, a2), B(b1, b2).Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị
    SoPhuc Tong(const SoPhuc&) const;

    // Hàm tính hiệu hai số phức. input: hai số phức. output: hiệu của hai số phức.
    // Hướng giải thuật: A - B = (a1-b1, a2-b2) với A(a1, a2), B(b1, b2).Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị
    SoPhuc Hieu(const SoPhuc&) const;

    // Hàm tính tích hai số phức. input: hai số phức. output: tích của hai số phức.
    // Hướng giải thuật: A * B = (a1*b1 – a2*b2, a1*b2+a2*b1) với A(a1, a2), B(b1, b2).Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị
    SoPhuc Tich(const SoPhuc&) const;

    // Hàm tính thương hai số phức. input: hai số phức. output: thương của hai số phức.
    // Hướng giải thuật: A / B = ((a1*b1 + a2*b2)/(b1^2 + b2^2), (a2*b1 - a1*b2)/(b1^2 + b2^2)) với A(a1, a2), B(b1, b2).Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị
    SoPhuc Thuong(const SoPhuc&) const;
    
    // Nạp chồng toán tử cin, cout để thuật tiện việc nhập xuất. Sử dụng hàm friend.
    friend istream& operator>>(istream&, SoPhuc&);
    friend ostream& operator<<(ostream&,const SoPhuc&);
};
