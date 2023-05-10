// dung thu vien iostream trong visual studio "#include <iostream>"
#include <bits/stdc++.h>
using namespace std;

/* thuvien.h
	bool kt_snt(int n);
	bool kt_scp(int n);
	bool kt_sht(int n);
	void nhap_songuyen(int &n);
	void nhap_arr1(int arr1[],int n);
	void xuat_arr2(int arr1[],int n);
	int tong_arr1(int arr1[],int n);
	void nhap_arr2(int arr2[][KTM],int n);
	int tong_arr2(int arr2[][KTM],int n);
	void hienthi_menu();
	void chon_menu(int arr1[],int arr2[][KTM],int n);
*/
//===============================================================================
	const int KTM = 50; //mot hang so KTM = 50
//caidat.cpp
	//chuong trinh kiem tra so nguyen to
	bool kt_snt(int n){
		int dem =0;
		for (int i=1;i<=n;i++){
			if (n%i==0){
				dem++;
			}
		}
		if (dem==2) return true;
		return false;
	}
	//chuong trinh kiem tra so chinh phuong
	bool kt_scp(int n){
		if (n<1) return false;
		int sqr = sqrt(n);
		if (sqr*sqr==n) return true;
		return false;
	}
	//chuong trinh kiem tra so hoan thien
	bool kt_sht(int n){
		int sum=0;
		for (int i=1;i<n;i++){
			if (n%i==0) {
				sum += i;
			}
		}
		if (sum == n) return true;
		return false;
	}
	/*boi, uoc va chia het
		x % y == 0 : x chia het cho y
		x % y != 0 : x khong chia het cho y
		x chia het cho y thi x la boi cua y va y la uoc cua x 
	*/
	//Nhap mang 1 chieu
	/*n la so phan tu cua mang mot chieu
	  n co dieu kien tuy thuoc vao de bai
	  neu co hai dieu kien tro len thi them '&&' va dieu kien vao "*1" 
	  vi du while (n<=0 && n%2!=0) tuc la n phai lon hon 0 hoac la so chan
	  neu khong phai yeu cau nhap lai*/
	void nhap_songuyen(int &n){
		do {
			cout << "Nhap so nguyen n(n>0): ";
			cin >> n;
		} while (n<=0); // *1
	}
	//Nhap mang 1 chieu
	void nhap_arr1(int arr1[],int n){
		cout << "Nhap vao cac phan tu cua mang 1 chieu." << endl;
		for (int i=0;i<n;i++){
			cout << "arr1[" << i << "]: ";
			cin >> arr1[i];
		}
	}
	//Xuat mang 1 chieu
	//neu xuat voi dieu kien thi them if vao "*2"
	//vi du do xuat mang voi dieu kien la so nguyen to
	/*
		for (int i=0;i<n;i++){
			if (kt_snt(arr1[i])==true) {
			cout << arr1[i] << " "; 
			}		
		}
	*/
	//neu hai dieu kien tro len thi lam tuong tu nhu tren
	void xuat_arr1(int arr1[],int n){
		for (int i=0;i<n;i++){
			//*2
			cout << arr1[i] << " ";
		}
	}
	//Tinh tong trong arr1
	/*
	Tinh tong voi dieu kien: them vao *4 dieu kien
	vi du tinh tong cac so nguyen to co trong mang: if (kt_snt(arr1[i])==true) {sum+=arr1[i]}
	tuong voi cai bai nhu dem cac so va tich cac so chi can them dieu kien vao *4 roi
	thay tuong ung sum += arr1[i]; thanh dem ++ voi cac bai dem va tich *= arr1[i]; voi cac 
	bai tinh tich 
	note: neu tinh tich thi phai khai bao int tich = 1; o *5
	nho phai doi ow *8 thanh cac dem va ich tuong ung
	*/
	int tong_arr1(int arr1[],int n){
		int sum =0; // *5
		for (int i=0;i<n;i++){
			//*4
			sum += arr1[i];
		}
		return sum; //*8
	}
	//nhap mang hai chieu
	//de ra la chi so hang bang chi so cot
	void nhap_arr2(int arr2[][KTM],int n){
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout << "arr2[" << i << "][" << j << "]= " ;
				cin >> arr2[i][j];
			}
		}
	}
	//xuat ma tran
	//neu yeu cau xuat ma tran co dieu kien thi lam nhu mang arr1 la them if trong hai vong for do
	//them o *3
	void xuat_arr2(int arr2[][KTM],int n){
		cout << "\nMa tran!!" << endl;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				//*3
				cout << arr2[i][j] << " ";
			}
			cout  << endl;
		}
	}
	/*
	Note:Se co cac bai lien quan den duong cheo chinh va duong cheo phu tram giac tren va tam giac duoi
    		duong cheo chinh: i=j
    		duong cheo phu: i + j = n - 1
    		tam giac tren: i < j
    		tam giac duoi: i > j
    Neu de bai yeu cau lam cai gi do tren cac duong nay thi chi can them dieu kien do va them cac chi
	so da cho tren la duoc
	vi du in ra so nguyen to tren duong cheo chinh thi ta lam them vao *3 nhu sau
				if (i==j && kt_snt(arr2[i][j])==true){
				cout << arr2[i][j] << " ";
			}
	
	*/
	// cac phep toan o arr2 cung tuong tu nhu arr1 nen ap dung
	// ap dung kem theo cac duong da note o tren
	int tong_arr2(int arr2[][KTM],int n){
		int sum =0;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				//*7
				sum += arr2[i][j];
			}
		}
		return sum;
	}
	//Hien thi menu
	/*
	 Day la noi ban xuat ra cac luu chon cua ban
	 o day thi la xuat ra cac lua chon trong de bai da cho
	*/
	void hienthi_menu(){
		cout << "\n=============================================" << endl;
		cout << "1.Nhap mang arr1." << endl;
		cout << "2.Xuat arr1." << endl;
		cout << "3.Tong arr1." << endl;
		cout << "4.Nhap mang arr2." << endl;
		cout << "5.Xuat arr2." << endl;
		cout << "6.Tong arr2." << endl;
		cout << "7.Kiem tra SNT." << endl;
		cout << "8.Kiem tra SCP." << endl;
		cout << "9.Kiem tra SHT." << endl;
		cout << "0.Thoat chuong trinh." << endl;
		cout << "=============================================" << endl;
	}
	void chon_menu(int arr1[],int arr2[][KTM],int n){
		int chon = 0;
		do {
			cout << "\nVui long nhap lua chon cua ban: ";
			cin >> chon;
			switch (chon){
				case 1:
					system("cls");
					hienthi_menu();
					nhap_songuyen(n);
					nhap_arr1(arr1,n);
					break;
				case 2:
					system("cls");
					hienthi_menu();;
					xuat_arr1(arr1,n);
					break;
				case 3:
					system("cls");
					hienthi_menu();
					cout << tong_arr1(arr1,n);
					break;
				case 4:
					system("cls");
					hienthi_menu();
					nhap_songuyen(n);
					nhap_arr2(arr2,n);
					break;
				case 5:
					system("cls");
					hienthi_menu();
					xuat_arr2(arr2,n);
					break;
				case 6:
					system("cls");
					hienthi_menu();
					cout << tong_arr2(arr2,n);
					break;
				case 7:
					system("cls");
					hienthi_menu();
					nhap_songuyen(n);
					if (kt_snt(n)==true) cout << "Day la so nguyen to!!" << endl;
					else cout << "Day khong phai la so nguyen to!!" << endl;
					break;
				case 8:
					system("cls");
					hienthi_menu();
					nhap_songuyen(n);
					if (kt_scp(n)==true) cout << "Day la so chinh phuong!!" << endl;
					else cout << "Day khong phai la so chinh phuong!!" << endl;
					break;
				case 9:
					system("cls");
					hienthi_menu();
					nhap_songuyen(n);
					if (kt_sht(n)==true) cout << "Day la so hoan thien!!" << endl;
					else cout << "Day khong phai la so hoan thien!!" << endl;
					break;
				default:
					break;
			}
		} while (chon != 0);
	}
	/*
	Note: menu nay chi la demo, menu nay phu thuoc vao de yeu cau
	*/

//===============================================================================
//chuongtrinh.cpp
int main(){
	int n;
	int arr1[KTM];
	int arr2[KTM][KTM];
	hienthi_menu();
	chon_menu(arr1,arr2,n);
	return 0;
}
