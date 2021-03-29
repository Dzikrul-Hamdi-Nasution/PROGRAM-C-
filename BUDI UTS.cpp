#include <iostream>
#include <cstdlib>
#include <cstring>
#include<sstream>
using namespace std;

float penjumlahan_nim,nilai_rata_rata;
char nama[20],nim[9],penjumlahan_nim2;
int variabel_nim[8],nim_var;
string x;


void binary(int desimal);

void binary(int desimal)
{ 
     int sisa;
     int hasil;
     
     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal %2;
     hasil = desimal / 2;
     binary(hasil);
     cout<<sisa;
}


int main(){
	
	
	cout<<"Selamat Datang."<<endl;
	
	
	cout<<"MAasukkan NAMA anda :";
	std::cin.getline(nama, 20);
	//cin>>nama;
	
	cout<<"MAasukkan NIM anda  :";
	cin>>nim;	
	x=nim;
	
	
	variabel_nim[0]=int(nim[0])-48;
	variabel_nim[1]=int(nim[1])-48;
	variabel_nim[2]=int(nim[2])-48;
	variabel_nim[3]=int(nim[3])-48;
	variabel_nim[4]=int(nim[4])-48;
	variabel_nim[5]=int(nim[5])-48;
	variabel_nim[6]=int(nim[6])-48;
	variabel_nim[7]=int(nim[7])-48;
	variabel_nim[8]=int(nim[8])-48;
	
	
	penjumlahan_nim	=variabel_nim[0]+variabel_nim[1]+variabel_nim[2]+variabel_nim[3]+variabel_nim[4]+variabel_nim[5]+variabel_nim[6]+variabel_nim[7]+variabel_nim[8];
	
	nilai_rata_rata=penjumlahan_nim/8;
	stringstream(x) >>nim_var;

	
	
	cout<<endl<<endl<<" Nama Anda :"<<nama<<endl;
	cout<<" NIM anda :"<<nim<<endl;
	cout<<" Hasil Penjumlahan :"<<penjumlahan_nim<<endl;
	cout<<" Nilai Rata-rata :"<<nilai_rata_rata<<endl;
	cout<<" Hasil Konversi :";
	binary(nim_var);
	
	
	
	

		
	
	
}

	
	
	
	
		
	
	
	
