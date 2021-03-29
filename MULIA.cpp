#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>

int opsi,opsi2,opsi3,total_hasil;
int jumlah_aqua,harga_aqua,bayar_aqua,Jumlah_pembelian_aqua,tes_aqua;
int jumlah_roti,harga_roti,bayar_roti,Jumlah_pembelian_roti,tes_roti;
int jumlah_permen,harga_permen,bayar_permen,Jumlah_pembelian_permen,tes_permen;
int jumlah_kripik,harga_kripik,bayar_kripik,Jumlah_pembelian_kripik,tes_kripik;
int jumlah_teh,harga_teh,bayar_teh,Jumlah_pembelian_teh,tes_teh;
int kunci1,kunci2,kunci3,kunci4,kunci5;





int main(){
	awal:
	kunci1=0;
	kunci2=0;
	kunci3=0;
	kunci4=0;
	kunci5=0;
	printf("=============================\n");
	printf("Selamat Datang Di Toko Mulia\n");
	printf("=============================\n");
	printf("=============================\n\n");
	
	printf("Menu Operator :\n");
	printf("===============\n");
	printf("1. Input Barang\n");
	printf("2. Penjualan Barang\n");
	printf("3. Cek Barang\n");
	printf("4. About Us\n");
	printf("Masukkan Pilihan Anda....(1/2/3/4)");
		
	scanf("%d",&opsi);
	
	if (opsi==1){
		input_menu:
		system("cls");
		printf("Menu Input Barang\n");
		printf("1. Aqua\n");
		printf("2. Roti\n");
		printf("3. Permen\n");
		printf("4. Kripik\n");
		printf("5. Teh\n");
		printf("Masukkan Pilihan Anda....(1/2/3/4/5)");
		scanf("%d",&opsi2);
		if (opsi2==1){
			system("cls");
			printf("Menu Input Barang Aqua\n");
			printf("Jumlah Barang yang masuk = ");
			scanf("%d",&jumlah_aqua);
			printf("Harga Barang yang masuk = ");
			scanf("%d",&harga_aqua);
			printf("\n\n1=Untuk kembali kemenu awal\n");
			printf("0=Untuk kembali kemenu Input\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto awal;}
			if (opsi3==0){goto input_menu;}			
		}
		if (opsi2==2){
			system("cls");
			printf("Menu Input Barang Roti\n");
			printf("Jumlah Barang yang masuk = ");
			scanf("%d",&jumlah_roti);
			printf("Harga Barang yang masuk = ");
			scanf("%d",&harga_roti);
			printf("\n\n1=Untuk kembali kemenu awal\n");
			printf("0=Untuk kembali kemenu Input\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto awal;}
			if (opsi3==0){goto input_menu;}			
		}
		if (opsi2==3){
			
			system("cls");
			printf("Menu Input Barang Permen\n");
			printf("Jumlah Barang yang masuk = ");
			scanf("%d",&jumlah_permen);
			printf("Harga Barang yang masuk = ");
			scanf("%d",&harga_permen);
			printf("\n\n1=Untuk kembali kemenu awal\n");
			printf("0=Untuk kembali kemenu Input\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto awal;}
			if (opsi3==0){goto input_menu;}			
		}
		if (opsi2==4){
			
			system("cls");
			printf("Menu Input Barang Kripik\n");
			printf("Jumlah Barang yang masuk = ");
			scanf("%d",&jumlah_kripik);
			printf("Harga Barang yang masuk = ");
			scanf("%d",&harga_kripik);
			printf("\n\n1=Untuk kembali kemenu awal\n");
			printf("0=Untuk kembali kemenu Input\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto awal;}
			if (opsi3==0){goto input_menu;}			
		}
		if (opsi2==5){
			system("cls");
			printf("Menu Input Barang Teh\n");
			printf("Jumlah Barang yang masuk = ");
			scanf("%d",&jumlah_teh);
			printf("Harga Barang yang masuk = ");
			scanf("%d",&harga_teh);
			konfirmasi:
			printf("\n\n1=Untuk kembali kemenu awal\n");
			printf("0=Untuk kembali kemenu Input\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto awal;}
			if (opsi3==0){goto input_menu;}			
		}				
	}
	
	
	if(opsi==2){
		beli_lagi:
		system("cls");
		printf("====================================================\n");
		printf("Nama Barang	Harga Barang	   Stok Barang\n");
		printf("1. Aqua		  %d000			%d\n",harga_aqua,jumlah_aqua);
		printf("2. Roti		  %d000			%d\n",harga_roti,jumlah_roti);
		printf("3. Permen	  %d000			%d\n",harga_permen,jumlah_permen);
		printf("4. Kripik	  %d000			%d\n",harga_kripik,jumlah_kripik);
		printf("5. Teh		  %d000			%d\n",harga_teh,jumlah_teh);
		printf("====================================================\n");
		printf("====================================================\n");
		printf("Pilih nomor barang yang akan dijual....(1/2/3/4/5/)");
		scanf("%d",&opsi2);
		if (opsi2==1){
			kunci1=1;
			printf("Masukkan Jumlah....");
			scanf("%d",&Jumlah_pembelian_aqua); 
			tes_aqua=jumlah_aqua-Jumlah_pembelian_aqua;
			if (tes_aqua<0){
				printf("\n\n============= WARNING ============\n");
				printf("Stok Aqua Tidak Mencukupi\n");
				printf("Pemesanan tidak dapat dilanjutkan\n");
				printf("==================================\n");
			}
			konfirmasi2:
			printf("====================================================\n");
			printf("1 = untuk melanjutkan pembelian\n");
			printf("0 = untuk Check Out\n");
			scanf("%d",&opsi3);
			if (opsi3==1){
				system("cls");
				goto beli_lagi;}
			if (opsi3==0){
				system("cls");
				goto check_out;}
			
		}
		if (opsi2==2){
			kunci2=2;
			printf("Masukkan Jumlah....");
			scanf("%d",&Jumlah_pembelian_roti); 
			tes_roti=jumlah_roti-Jumlah_pembelian_roti;
			if (tes_roti<0){
				printf("\n\n============= WARNING ============\n");
				printf("Stok Roti Tidak Mencukupi\n");
				printf("Pemesanan tidak dapat dilanjutkan\n");
				printf("==================================\n");
			}
			goto konfirmasi2;	
		}
		if (opsi2==3){
			kunci3=3;
			printf("Masukkan Jumlah....");
			scanf("%d",&Jumlah_pembelian_permen); 
			tes_permen=jumlah_permen-Jumlah_pembelian_permen;
			if (tes_permen<0){
				printf("\n\n============= WARNING ============\n");
				printf("Stok Permen Tidak Mencukupi\n");
				printf("Pemesanan tidak dapat dilanjutkan\n");
				printf("==================================\n");
			}
			goto konfirmasi2;	
		}
		if (opsi2==4){
			kunci4=4;
			printf("Masukkan Jumlah....");
			scanf("%d",&Jumlah_pembelian_kripik); 	
			tes_kripik=jumlah_kripik-Jumlah_pembelian_kripik;
			if (tes_kripik<0){
				printf("\n\n============= WARNING ============\n");
				printf("Stok Kripik Tidak Mencukupi\n");
				printf("Pemesanan tidak dapat dilanjutkan\n");
				printf("==================================\n");
			}
			goto konfirmasi2;
		}
		if (opsi2==5){
			kunci5=5;
			printf("Masukkan Jumlah....");
			scanf("%d",&Jumlah_pembelian_teh); 
			tes_teh=jumlah_teh-Jumlah_pembelian_teh;
			if (tes_teh<0){
				printf("\n\n============= WARNING ============\n");
				printf("Stok Teh Tidak Mencukupi\n");
				printf("Pemesanan tidak dapat dilanjutkan\n");
				printf("==================================\n");
			}	
			goto konfirmasi2;
		}
		
		check_out:
		printf("Total Pesanan :.....\n");
		printf("====================\n");
		if (kunci1==1){
			jumlah_aqua=jumlah_aqua-Jumlah_pembelian_aqua;
			printf("Aqua    = %d\n",Jumlah_pembelian_aqua);
			printf("Harga   = %d000\n",harga_aqua);
			bayar_aqua=Jumlah_pembelian_aqua*harga_aqua;
			printf("total   = %d000\n",bayar_aqua);			
		}	
		if (kunci2==2){
			jumlah_roti=jumlah_roti-Jumlah_pembelian_roti;
			printf("Roti    = %d\n",Jumlah_pembelian_roti);
			printf("Harga   = %d000\n",harga_roti);
			bayar_roti=Jumlah_pembelian_roti*harga_roti;
			printf("total   = %d000\n",bayar_roti);			
		}
		if (kunci3==3){
			jumlah_permen=jumlah_permen-Jumlah_pembelian_permen;
			printf("Permen  = %d\n",Jumlah_pembelian_permen);
			printf("Harga   = %d000\n",harga_permen);
			bayar_permen=Jumlah_pembelian_permen*harga_permen;
			printf("total   = %d000\n",bayar_permen);			
		}
		if (kunci4==4){
			jumlah_kripik=jumlah_kripik-Jumlah_pembelian_kripik;
			printf("Kripik  = %d\n",Jumlah_pembelian_kripik);
			printf("Harga   = %d000\n",harga_kripik);
			bayar_kripik=Jumlah_pembelian_kripik*harga_kripik;
			printf("total   = %d000\n",bayar_kripik);			
		}
		if (kunci5==5){
			jumlah_teh=jumlah_teh-Jumlah_pembelian_teh;
			printf("Teh     = %d\n",Jumlah_pembelian_teh);
			printf("Harga   = %d000\n",harga_teh);
			bayar_teh=Jumlah_pembelian_teh*harga_teh;
			printf("total   = %d000\n",bayar_teh);			
		}
		printf("====================\n");
		total_hasil=bayar_aqua+bayar_roti+bayar_permen+bayar_kripik+bayar_teh;
		printf("Total Keseluruhan = %d000\n",total_hasil);	
		goto konfirmasi;
	}
	
	
	if (opsi==3){
		system("cls");
		printf("Menu Stok Barang\n\n");
		printf("====================================================\n");
		printf("Nama Barang	Harga Barang	   Stok Barang\n");
		printf("1. Aqua		  %d000			%d\n",harga_aqua,jumlah_aqua);
		printf("2. Roti		  %d000			%d\n",harga_roti,jumlah_roti);
		printf("3. Permen	  %d000			%d\n",harga_permen,jumlah_permen);
		printf("4. Kripik	  %d000			%d\n",harga_kripik,jumlah_kripik);
		printf("5. Teh		  %d000			%d\n",harga_teh,jumlah_teh);
		printf("====================================================\n");
		printf("====================================================\n");
		goto konfirmasi;				
	}
	
	
	if(opsi==4){
		system("cls");
		printf("==============================================\n");
		printf("==============================================\n\n");
		printf("Terima Kasih Telah Menggunakan Program Kami\n");
		printf("Hak Cipta Milik Praktikan\n\n");
		printf("==============================================\n");
		printf("==============================================\n");
		
	}
	
	
	
	
	
	
	
	
}
