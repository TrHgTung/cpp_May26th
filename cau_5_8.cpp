#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void HoTen(){
    string hoten, sobaodanh;
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    
    cout << "Nhap so bao danh: ";
    getline(cin, sobaodanh);

	cout << "Ho ten cua ban la: " << hoten << endl;
    cout << "So bao danh cua ban la: " << sobaodanh << endl;
}

void ThoiGian() {

    int thang, soNgay, nam;
    cout << "Nhap thang : ";
    cin >> thang;
    
    cout << "Nhap nam: ";
    cin >> nam;

//    int soNgay;

    // Kiem tra tung truong hop thang de xac dinh so luong ngayf
    if (thang == 2) {
        // nam nhuan
//        int nam;
//        std::cout << "Nhap nam: ";
//        std::cin >> nam;

        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
            soNgay = 29; // thang 2 : 29 ng (nhuan)(
        } else {
            soNgay = 28; // thang 2 : 28 ng (ko nhuan)
        }
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        soNgay = 30; // Thang 4, 6, 9, 11 : 30 ng
    } else {
        soNgay = 31; // con lai: 31 ng
    }

   	cout << "So ngay trong thang " << thang << " trong nam "<< nam << " la: " << soNgay << endl;



}

int main(){
    HoTen(); // Xuat ra man hinh ho ten va so bao danh
   	ThoiGian(); // con lai
    
    return 0;
}
