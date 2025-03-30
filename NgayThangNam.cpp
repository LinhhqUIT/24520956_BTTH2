#include "NgayThangNam.h"

void NgayThangNam::Nhap() {
    do {
        cout << "Nhap vao ngay, thang, nam: ";
        cin >> iNgay >> iThang >> iNam;
        // Nếu nhập sai định dạng hoặc nhập sai ngày tháng năm thì phải nhập lại.
        if (cin.fail() || iNgay < 1 || iThang < 1 || iThang > 12 || iNam < 1 || iNgay > 31) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ban nhap khong dung. Vui long nhap lai\n";
        } else {
            break;
        }
    } while (true);
}

void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam << endl;
}

// Hàm tính ngày tiếp theo của ngày đã nhập.
void NgayThangNam::NgayTiepTheo() {
    // Tạo mảng ngày lớn nhất trong tháng để dễ dàng tính.
    int NgayMax[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    if (iNam % 4 == 0 && iNam % 100 != 0 || iNam % 400 == 0) { // Nếu năm nhuận thì tháng 2 có 29 ngày.
        NgayMax[2] = 29; 
    }

    if (iNgay == NgayMax[iThang]) {
        iNgay = 1;
        if (iThang < 12) {
            iThang += 1;
        } else {
            iThang = 1;
            iNam += 1;
        }
    } else {
        iNgay += 1;
    }
}
