#include"SoPhuc.h"
int main(){
    SoPhuc a, b;
    cout << "Nhap so phuc A:" << endl;
    cin >> a;
    cout << "Nhap so phuc B:" << endl;
    cin >> b;
    
    cout << "\nSo phuc A: " << a;
    cout << "\nSo phuc B: " << b;
    cout << "\nA + B = " << a.Tong(b);
    cout << "\nA - B = " << a.Hieu(b);
    cout << "\nA * B = " << a.Tich(b); 
    cout << "\nA / B = " << a.Thuong(b);

}