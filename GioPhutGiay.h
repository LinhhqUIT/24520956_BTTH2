#pragma once
#include<bits/stdc++.h>
using namespace std;

class GioPhutGiay
{
private:
    int iGio;
    int iPhut;
    int iGiay;
public:
    // Hàm nhập giờ phút giây. input: giờ phút giây; output: giờ phút giây hợp lệ.
    void Nhap();

    // Hàm xuất giờ phút giây. input:giờ phút giây; output: giờ phút giây theo định dạng.
    void Xuat();

    // Hàm tính giây tiếp theo. input: giờ phút giây đã nhập. output: giây tiếp theo.
    /* Hướng giải thuật: cộng thêm một giây. Đối với thứ 59 chuyển thành giây 0 và cộng thêm 1 vào phút. 
    Nếu phút thứ 59 thì chuyển thành phút 0 và cộng 1 thêm vào giờ. Nếu giờ thứ 23 thì chuyển thành giớ thứ 0.*/
    void CongThemMotGiay();
};

