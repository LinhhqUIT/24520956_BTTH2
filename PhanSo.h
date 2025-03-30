#pragma once
#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    int iTu;
    int iMau;
public:
    // Hàm thiết lập constructor giá trị mặc định của phân số là 1/1.
    PhanSo(int = 1, int = 1); 

    //Hàm nhập phân số. input: tử và mẫu của phân số. output: phân số hợp lệ.
    void Nhap();

    // Hàm xuất phân số. input: phân số. output: phân số được xuất theo định dạng và đã được rút gọn. 
    void Xuat() const;

    // Hàm lấy tử số. input,output: tử số của phân số. Kiểm tra để thực hiện phép chia.
    int GetTu(){return iTu;}

    // Hàm rút gọn phân số. input: phân số. output: phân số đã được rút gọn.
    // Hướng giải thuật: Tìm ước chung lớn nhất của tử và mẫu rồi chia cả tử và mẫu cho ước chung đó.
    void RutGon();

    // Hàm tính tổng hai phân số. input: hai phân số được nhập. output: tổng của hai phân số đó.
    /* Hướng giải thuật: Quy đồng hai phân số rồi cộng tử số với nhau. 
    Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị.*/
    PhanSo Tong(const PhanSo&);

    // Hàm tính hiệu hai phân số. input: hai phân số được nhập. output: hiệu của hai phân số đó.
    /* Hướng giải thuật: Quy đồng hai phân số rồi lấy tử số phân số thứ nhất trừ tử số phân số thứ hai.
    Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị.*/
    PhanSo Hieu(const PhanSo&);

    // Hàm tính tích hai phân số. input: hai phân số được nhập. output: tích của hai phân số đó.
    /* Hướng giải thuật: nhân tử với tử, mẫu với mẫu của hai phân số với nhau. 
    Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị.*/
    PhanSo Tich(const PhanSo&);

    // Hàm tính thương hai phân số. input: hai phân số được nhập. output: thương của hai phân số đó.
    /* Hướng giải thuật: Kiểm tra phân số thứ hai có bằng 0 không nếu bằng thì xuất lỗi không tính được. 
    Còn khác 0 thì nhân chéo tử số và mẫu số của hai phân số.Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị.*/
    PhanSo Thuong(const PhanSo&);

    // Hàm so sánh hai phân số. input: hai phân số được nhập. output: phân số lớn hơn.
    /* Hướng giải thuật: quy đồng hai phân số rồi so sánh. Trường hợp bằng nhau thì xuất một phân số.
    Truyền tham chiếu hằng để tránh sao chép lại dữ liệu mà vẫn tránh thay đổi giá trị.*/
    int SoSanh(const PhanSo&);

    // Nạp chồng toán tử cin, cout để thuật tiện việc nhập xuất. Sử dụng hàm friend.
    friend istream& operator>>(istream&, PhanSo&);
    friend ostream& operator<<(ostream&,const PhanSo&);
};


