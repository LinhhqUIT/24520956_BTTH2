#pragma once
#include<bits/stdc++.h>
using namespace std;

class NgayThangNam
{
private:
    int iNgay;
    int iThang;
    int iNam;
public:
    // Hàm nhập ngày tháng năm. input: ngày tháng năm; output: ngày tháng năm hợp lệ.
    void Nhap();

    // Hàm xuất ngày tháng năm. input:Ngày tháng năm; output: ngày tháng năm theo định dạng.
    void Xuat();

    // Hàm tính ngày tiếp theo. input: ngày tháng năm đã nhập. output: ngày tiếp theo.
    /* Hướng giải thuật: cộng thêm một ngày. Đối với ngày cuối cùng của tháng thì chuyển 
    thành ngày 1 và cộng thêm 1 vào tháng. Nếu cộng thêm tháng mà quá 12 thì chuyển tháng thành tháng 1 và cộng thêm vào năm.*/
    void NgayTiepTheo();
};


