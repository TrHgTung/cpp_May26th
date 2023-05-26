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

void SoDien() {
    int thang_truoc, thang_sau;
    cout << "Nhap so dien cua thang truoc: ";
    cin >> thang_truoc;
    
    cout << "Nhap so dien cua thang sau: ";
    cin >> thang_sau;

    cout << "Ta co so dien cua thang truoc la: " << thang_truoc << " va cua thang sau la: "<< thang_sau << endl;
    
	
	// Ta co 1 don vi tren dong ho dien bang 1 kW
	
    int soDienHaiThang = thang_truoc + thang_sau;
    cout << "So m3 nuoc tieu thu la: "<< soDienHaiThang << endl;
    
    
    // 100kw dau tien: 1242vnd/kw ; 101->150kw: 1304vnd/kw ; 151->200 : 1651vnd/kw ; 201 -> : 1912vnd/kw
    int tienDien;
    
    if(soDienHaiThang <= 100){
    	tienDien = soDienHaiThang * 1242;
    	cout << "So tien dien phai tra la (da tinh thue 10%): " << tienDien + ((tienDien*10)/100) <<" VND"<< endl;
	}
	else if(soDienHaiThang >= 101 && soDienHaiThang <= 150){
		tienDien = soDienHaiThang * 1304;
    	cout << "So tien dien phai tra la (da tinh thue 10%): " << tienDien + ((tienDien*10)/100) <<" VND"<<endl;
	}
	else if(soDienHaiThang >= 151 && soDienHaiThang <= 200){
		tienDien = soDienHaiThang * 1651;
    	cout << "So tien dien phai tra la (da tinh thue 10%): " << tienDien + ((tienDien*10)/100) <<" VND"<<endl;
	}
	else{
		tienDien = soDienHaiThang * 1912;
    	cout << "So tien dien phai tra la (da tinh thue 10%): " << tienDien + ((tienDien*10)/100) << " VND"<< endl;
	}
}

int main(){
    HoTen(); // Xuat ra man hinh ho ten va so bao danh
   	SoDien(); // con lai
    
    return 0;
}
