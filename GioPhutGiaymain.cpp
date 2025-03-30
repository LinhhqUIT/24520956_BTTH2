#include"GioPhutGiay.h"
int main() {
    GioPhutGiay time;
    cout << "Moi ban nhap thoi gian:\n";
    time.Nhap();
    cout << "Thoi gian hien tai: ";
    time.Xuat();
    time.CongThemMotGiay();
    cout << "Sau khi cong 1 giay: ";
    time.Xuat();

    return 0;
}
