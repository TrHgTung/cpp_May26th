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

    cout << "So bao danh cua ban la: " << sobaodanh << endl;
}

void SoDongHoNuoc() {
    int thang_truoc, thang_sau;
    cout << "Nhap so dong ho nuoc cua thang truoc: ";
    cin >> thang_truoc;
    
    cout << "Nhap so dong ho nuoc cua thang sau: ";
    cin >> thang_sau;

    cout << "Ta co so dong ho nuoc cua thang truoc la: " << thang_truoc << " va cua thang sau la: "<< thang_sau << endl;
    
	
	// Ta co 1 don vi tren dong ho nuoc bang 1 met khoi nuoc
    int soNuocHaiThang = thang_truoc + thang_sau;
    cout << "So m3 nuoc tieu thu la: "<< soNuocHaiThang << endl;
    
    
    // 4 m3 dau tien: 6700 vnd/m3 ; m3 thu 5, 6: 12900 vnd/m3 ; m3 thu 7 tro di: 14400 vnd/m3
    int tienNuoc;
    
    if(soNuocHaiThang <= 4){
    	tienNuoc = soNuocHaiThang * 6700;
    	cout << "So tien nuoc phai tra la (da tinh thue 10%): " << tienNuoc + ((tienNuoc*10)/100) <<" VND"<< endl;
	}
	else if(soNuocHaiThang > 4 && soNuocHaiThang <7){
		tienNuoc = soNuocHaiThang * 12900;
    	cout << "So tien nuoc phai tra la (da tinh thue 10%): " << tienNuoc + ((tienNuoc*10)/100) <<" VND"<<endl;
	}
	else{
		tienNuoc = soNuocHaiThang * 14400;
    	cout << "So tien nuoc phai tra la (da tinh thue 10%): " << tienNuoc + ((tienNuoc*10)/100) << " VND"<< endl;
	}
}


int main(){
    HoTen(); // Xuat ra man hinh ho ten va so bao danh
    SoDongHoNuoc(); // phan con lai
    
    return 0;
}
