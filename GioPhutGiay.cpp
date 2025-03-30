#include"GioPhutGiay.h"
void GioPhutGiay::Nhap(){
    do {
        cout << "Nhap vao gio, phut, giay: ";
        cin >> iGio >> iPhut >> iGiay;
        // Nếu nhập sai định dạng hoặc nhập sai giờ phút giây thì phải nhập lại.
        if (cin.fail() || iGio >= 24 || iPhut >= 60 || iGiay > 60 || iGio < 0 || iPhut < 0 || iGiay < 0 ) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ban nhap khong dung. Vui long nhap lai\n";
        } else {
            break;
        }
    } while (true);
}
void GioPhutGiay::Xuat(){
    cout << (iGio < 10 ? "0" : "") << iGio << "h"
             << (iPhut < 10 ? "0" : "") << iPhut << "m"
             << (iGiay < 10 ? "0" : "") << iGiay << "s" << endl;
}

// Hàm cộng thêm một giây.
void GioPhutGiay::CongThemMotGiay(){
    iGiay++;
    if (iGiay >= 60) { 
        iGiay = 0;  
        iPhut++;    
        if (iPhut >= 60) { 
            iPhut = 0;
            iGio++;
            if (iGio >= 24) { 
                iGio = 0; 
            }
        }
    }
}


