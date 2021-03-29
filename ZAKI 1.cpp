#include <iostream>
#include<string.h>
using namespace std;


int ukuran_pcb_besar,ukuran_pcb_kecil;
int ukuran_pcb_s,ukuran_pcb_a,ukuran_pcb_p;
int pilihan;
int total_pcb_bolong_besar,total_pcb_bolong_kecil,total_pcb_s,total_pcb_a,total_pcb_p;
int jumlah_pcb_besar,jumlah_pcb_kecil,jumlah_pcb_s,jumlah_pcb_a,jumlah_pcb_p;
int bantu,jenis_pcb_s;
char opsi[10];



int main()
{
	awal:
    cout << "     Welcome to PCB Store Centre\n\n";
	cout<<"Daftar Harga PCB :\n";
	cout<<"1. PCB Bolong Besar     .......\n";
	cout<<"2. PCB Bolong Kecil     .......\n";
	cout<<"3. PCB Polos Standart   .......\n";
	cout<<"4. PCB Polos Acrylic    .......\n";
	cout<<"5. PCB Polos Putih Susu .......\n\n";
	cout<<"Silhkan Pilih Pesanan Anda (Number)  ";	
	cin>>pilihan;
	
	cout<<pilihan;
	if (pilihan==1){
		cout<<"\n\nPCB BOlong Besar\n";
		cout<<"Ukuran PCB (cm)= ";
		cin>>ukuran_pcb_besar;
		cout<<"Jumlah PCB = ";
		cin>>jumlah_pcb_besar;		
		total_pcb_bolong_besar=(ukuran_pcb_besar/10)*5*jumlah_pcb_besar;
		cout<<"\n\n\nRincian Pesanan...\n";
		cout<<"Nama Item   : PCB Bolong Besar\n";
		cout<<"Banyak Item : "<<jumlah_pcb_besar<<"\n";
		cout<<"Ukuran Item : "<<ukuran_pcb_besar<<"cm"<<"\n";
		cout<<"Total = "<<total_pcb_bolong_besar<<"000"<<"\n\n";
		cout<<"Ingin Memesan Lagi ? (y/n)";
		cin>>opsi;
		if(strcmp(opsi,"y")==0 ){
			system("cls");
			goto awal;}
		if(strcmp(opsi,"n")==0 ){
			system("cls");
			cout<<"Terima Kasih Telah Berbelanja\n";
			goto akhir;}
	}	
	
	if (pilihan==2){
		cout<<"\n\nPCB Bolong Kecil\n";
		cout<<"Ukuran PCB (cm)= ";
		cin>>ukuran_pcb_kecil;
		cout<<"Jumlah PCB = ";
		cin>>jumlah_pcb_kecil;		
		total_pcb_bolong_kecil=(ukuran_pcb_kecil/10)*4*jumlah_pcb_kecil;
		cout<<"\n\n\nRincian Pesanan...\n";
		cout<<"Nama Item   : PCB Bolong Kecil\n";
		cout<<"Banyak Item : "<<jumlah_pcb_kecil<<"\n";
		cout<<"Ukuran Item : "<<ukuran_pcb_kecil<<"cm"<<"\n";
		cout<<"Total = "<<total_pcb_bolong_kecil<<"000"<<"\n\n";
		cout<<"Ingin Memesan Lagi ? (y/n)";
		cin>>opsi;
		if(strcmp(opsi,"y")==0 ){
			system("cls");
			goto awal;}
		if(strcmp(opsi,"n")==0 ){
			system("cls");
			cout<<"Terima Kasih Telah Berbelanja\n";
			goto akhir;}}
			
	if (pilihan==4){
		cout<<"\n\n PCB Acrylic\n";
		cout<<" 1. Single Layer\n ";
		cout<<"2. Double Layer\n ";
		cout<<"3. Multiple Layer\n ";
		cout<<"Jenis PCB Acrylic ...";
		cin>>jenis_pcb_s;
		if (jenis_pcb_s==1){bantu=1;}
		if (jenis_pcb_s==2){bantu=2;}
		if (jenis_pcb_s==3){bantu=3;}
		cout<<"Ukuran PCB (cm)= ";
		cin>>ukuran_pcb_a;
		cout<<"Jumlah PCB = ";
		cin>>jumlah_pcb_a;	
	
		if (bantu==1){
			total_pcb_a=(ukuran_pcb_a/10)*12*jumlah_pcb_a;}	
		if (bantu==2){
			total_pcb_a=(ukuran_pcb_a/10)*15*jumlah_pcb_a;}
		if (bantu==3){
			total_pcb_a=(ukuran_pcb_a/10)*19*jumlah_pcb_a;}
		
		cout<<"\n\n\nRincian Pesanan...\n";
		cout<<"Nama Item    : PCB Acrylic\n";
		if (bantu==1){cout<<"Jenis Item   : PCB Acrylic Single Layer\n"; }
		if (bantu==2){cout<<"Jenis Item   : PCB Acrylic Double Layer\n"; }
		if (bantu==3){cout<<"Jenis Item   : PCB Acrylic Multiple Layer\n"; }
		cout<<"Banyak Item  : "<<jumlah_pcb_a<<"\n";
		cout<<"Ukuran Item  : "<<ukuran_pcb_a<<"cm"<<"\n";
		cout<<"Total = "<<total_pcb_a<<"000"<<"\n\n";
		cout<<"Ingin Memesan Lagi ? (y/n)";
		cin>>opsi;
		if(strcmp(opsi,"y")==0 ){
			system("cls");
			goto awal;}
		if(strcmp(opsi,"n")==0 ){
			system("cls");
			cout<<"Terima Kasih Telah Berbelanja\n";
			goto akhir;}
		}
		
		if (pilihan==3){
		cout<<"\n\n PCB Standart\n";
		cout<<" 1. Single Layer\n ";
		cout<<"2. Double Layer\n ";
		cout<<"3. Multiple Layer\n ";
		cout<<"Jenis PCB Standart ...";
		cin>>jenis_pcb_s;
		if (jenis_pcb_s==1){bantu=1;}
		if (jenis_pcb_s==2){bantu=2;}
		if (jenis_pcb_s==3){bantu=3;}
		cout<<"Ukuran PCB (cm)= ";
		cin>>ukuran_pcb_s;
		cout<<"Jumlah PCB = ";
		cin>>jumlah_pcb_s;	
	
		if (bantu==1){
			total_pcb_s=(ukuran_pcb_s/10)*8*jumlah_pcb_s;}	
		if (bantu==2){
			total_pcb_s=(ukuran_pcb_s/10)*10*jumlah_pcb_s;}
		if (bantu==3){
			total_pcb_s=(ukuran_pcb_s/10)*14*jumlah_pcb_s;}
		
		cout<<"\n\n\nRincian Pesanan...\n";
		cout<<"Nama Item    : PCB Standart\n";
		if (bantu==1){cout<<"Jenis Item   : PCB Standart Single Layer\n"; }
		if (bantu==2){cout<<"Jenis Item   : PCB Standart Double Layer\n"; }
		if (bantu==3){cout<<"Jenis Item   : PCB Standart Multiple Layer\n"; }
		cout<<"Banyak Item  : "<<jumlah_pcb_s<<"\n";
		cout<<"Ukuran Item  : "<<ukuran_pcb_s<<"cm"<<"\n";
		cout<<"Total = "<<total_pcb_s<<"000"<<"\n\n";
		cout<<"Ingin Memesan Lagi ? (y/n)";
		cin>>opsi;
		if(strcmp(opsi,"y")==0 ){
			system("cls");
			goto awal;}
		if(strcmp(opsi,"n")==0 ){
			system("cls");
			cout<<"Terima Kasih Telah Berbelanja\n";
			goto akhir;}
		}
		
		
		
		if (pilihan==5){
		cout<<"\n\n PCB Putih Susu\n";
		cout<<" 1. Single Layer\n ";
		cout<<"2. Double Layer\n ";
		cout<<"3. Multiple Layer\n ";
		cout<<"Jenis PCB Putih Susu ...";
		cin>>jenis_pcb_s;
		if (jenis_pcb_s==1){bantu=1;}
		if (jenis_pcb_s==2){bantu=2;}
		if (jenis_pcb_s==3){bantu=3;}
		cout<<"Ukuran PCB (cm)= ";
		cin>>ukuran_pcb_p;
		cout<<"Jumlah PCB = ";
		cin>>jumlah_pcb_p;	
	
		if (bantu==1){
			total_pcb_p=(ukuran_pcb_p/10)*11*jumlah_pcb_p;}	
		if (bantu==2){
			total_pcb_p=(ukuran_pcb_p/10)*14*jumlah_pcb_p;}
		if (bantu==3){
			total_pcb_p=(ukuran_pcb_p/10)*17*jumlah_pcb_p;}
		
		cout<<"\n\n\nRincian Pesanan...\n";
		cout<<"Nama Item    : PCB Putih Susu\n";
		if (bantu==1){cout<<"Jenis Item   : PCB Putih Susu Single Layer\n"; }
		if (bantu==2){cout<<"Jenis Item   : PCB Putih Susu Double Layer\n"; }
		if (bantu==3){cout<<"Jenis Item   : PCB Putih Susu Multiple Layer\n"; }
		cout<<"Banyak Item  : "<<jumlah_pcb_p<<"\n";
		cout<<"Ukuran Item  : "<<ukuran_pcb_p<<"cm"<<"\n";
		cout<<"Total = "<<total_pcb_p<<"000"<<"\n\n";
		cout<<"Ingin Memesan Lagi ? (y/n)";
		cin>>opsi;
		if(strcmp(opsi,"y")==0 ){
			system("cls");
			goto awal;}
		if(strcmp(opsi,"n")==0 ){
			system("cls");
			cout<<"Terima Kasih Telah Berbelanja\n";
			goto akhir;}
		}
	

	
  
  
	akhir:;
}
