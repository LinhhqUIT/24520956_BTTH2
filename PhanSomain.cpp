#include"PhanSo.h"
int main(){
    PhanSo a, b;
    cout << "Moi ban nhap vao hai phan so\n";
    cin >> a >> b;
    cout << "Phan so ban da nhap la:\n" << a << b;
    cout << "Tong cua hai phan so la:" << a.Tong(b);
    cout << "Hieu cua hai phan so la:" << a.Hieu(b);
    cout << "Tich cua hai phan so la:" << a.Tich(b);
    if(b.GetTu() == 0) // Kiểm tra xem phân số thứ 2 có bằng 0 không.
        cout << "Loi. Mau cua phan so bang 0\n";
    else
        cout << "Thuong cua hai phan so la:" << a.Thuong(b);

    int kq = a.SoSanh(b);
    if (kq == 0) {
        cout << " Hai phan so bang nhau: " << a ;
    } else if (kq > 0) {
        cout << " Phan so lon hon la " << a;
    } else {
        cout << " Phan so lon hon la " << b;
    }
}