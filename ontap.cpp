// dung thu vien iostream trong visual studio "#include <iostream>"
#include <bits/stdc++.h>
using namespace std;

/* thuvien.h
	bool kt_snt(int n);
	bool kt_scp(int n);
	bool kt_sht(int n);
	void nhap_songuyen(int &n);
	void nhap_arr1(int arr1[],int n);
	void xuat_arr2(int arr1[],int n)
*/
//===============================================================================
	const int KTM = 50; //mot hang so KTM = 50
//caidat.cpp
	//1.chuong trinh kiem tra so nguyen to
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
	//2.chuong trinh kiem tra so chinh phuong
	bool kt_scp(int n){
		if (n<1) return false;
		int sqr = sqrt(n);
		if (sqr*sqr==n) return true;
		return false;
	}
	//3.chuong trinh kiem tra so hoan thien
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
	/*4.boi, uoc va chia het
		x % y == 0 : x chia het cho y
		x % y != 0 : x khong chia het cho y
		x chia het cho y thi x la boi cua y va y la uoc cua x 
	*/
	//5.Nhap mang 1 chieu
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
	void xuat_arr2(int arr1[],int n){
		
	}
//===============================================================================
//chuongtrinh.cpp
int main(){
	int n;
	int arr1[KTM];
	nhap_songuyen(n);
	nhap_arr1(arr1,n);
	return 0;
}
