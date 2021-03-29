#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>

int n_pesanan,n_pesanan_m[10];
char pembeli[25];
int menu_makanan[6][3][5];
int menu_minuman[6][3][5];
int total[10],total1,total3,total4;//total3 menunjukkan jumlah meja dalam array
int login=1;
int a,b,c;
char pass[10],user[10],kata[10];
int meja_makan,maks_pesanan,ulang_pesanan,naik;
int total_matriks,konfirmasi_maks_pesanan;
int total_matriks_minuman[7],total_matriks_makanan[7];
int total_pesanan_meja_matriks[10],ulang_4;
int jumlah_meja,hapus_1,hapus_2,hapus_3;
int coba,coba1,hasil_meja=1;


int main(){
	

	
	if (login==1){
		printf("Masukan Username : ");
	    scanf("%s",&user);
	    printf("Masukan Password : ");
	    scanf("%s",&pass);
	    if(strcmp(user,"kasir")==0 && strcmp(pass,"123")==0){
	        printf("Akses diterima. Selamat Datang\n");
	        printf("----------------------------------------------------------\n");
	        login=2;
	    }
	    else{
	         printf("Username dan Password Salah\n");
	         exit(1);
	    }
	}
awal:
	printf("Nomor Meja : ");
	scanf("%d",&meja_makan);
	maks_pesanan=0;
	//n_pesanan=0;

		
	
	for(ulang_pesanan=0;ulang_pesanan<=5;ulang_pesanan++){
		
		
		n_pesanan++;
		printf("\n\nNama Pemesan : ");
		scanf("%s",pembeli);		//nama pembeli dimasukkan ke var pembeli
		printf("Nomor Pesanan Anda : 00%d\n", n_pesanan);
		printf("Nomor Meja : %d\n\n",meja_makan);
		
		printf("----------------------------------------------------------\n");
		printf("        Daftar Menu....\n\n");
		printf("No.   Makanan               Harga     \n");
		printf("1.   Nasi Goreng         Rp 10.000\n");
		printf("2.   Indomie Goreng      Rp 10.000\n");
		printf("3.   Ifumie Kuah         Rp 10.000\n");
		printf("4.   Ayam Bakar          Rp 15.000\n");
		printf("5.   Ikan Bakar          Rp 15.000\n\n");
		
		printf("1.   Jus Jeruk           Rp 12.000\n");
		printf("2.   Teh Manis           Rp 5.000\n");
		printf("3.   Fruit Tea           Rp 6.000\n");
		printf("4.   Nutrisari           Rp 5.000\n");
		printf("5.   Aqua                Rp 3.000\n\n");
		printf("----------------------------------------------------------\n");
		printf("Silahkan pilih Menu Makanan (nomor menu)\n");
	
		
		scanf("%s",kata);
		b=strlen(kata);
		for (c=0;c<=b;c++){
			if (kata[c]=='1'){
				printf("\nanda memilih nasi goreng\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_makanan[naik][0][0]);
				menu_makanan[naik][1][0]=menu_makanan[naik][0][0]*10;
				menu_makanan[naik][2][0]=1;							}
			if (kata[c]=='2'){
				printf("\nanda memilih indomie goreng\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_makanan[naik][0][1]);
				menu_makanan[naik][1][1]=menu_makanan[naik][0][1]*10;
				menu_makanan[naik][2][1]=1;							}
			if (kata[c]=='3'){
				printf("\nanda memilih ifumie kuah\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_makanan[naik][0][2]);
				menu_makanan[naik][1][2]=menu_makanan[naik][0][2]*10;
				menu_makanan[naik][2][2]=1;							}
			if (kata[c]=='4'){
				printf("\nanda memilih ayam bakar\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_makanan[naik][0][3]);
				menu_makanan[naik][1][3]=menu_makanan[naik][0][3]*15;
				menu_makanan[naik][2][3]=1;							}
			if (kata[c]=='5'){
				printf("\nanda memilih ikan bakar\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_makanan[naik][0][4]);
				menu_makanan[naik][1][4]=menu_makanan[naik][0][4]*15;
				menu_makanan[naik][2][4]=1;							}	
			
			
		}
		
		printf("----------------------------------------------------------\n");
		printf("Silahkan pilih Menu Minuman (nomor menu)\n");
		
		scanf("%s",kata);
		b=strlen(kata);
		for (c=0;c<=b;c++){
			if (kata[c]=='1'){
				printf("\nanda memilih Jus Jeruk\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_minuman[naik][0][0]);
				menu_minuman[naik][1][0]=menu_minuman[naik][0][0]*12;
				menu_minuman[naik][2][0]=1;							}
			if (kata[c]=='2'){
				printf("\nanda memilih Teh Manis\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_minuman[naik][0][1]);
				menu_minuman[naik][1][1]=menu_minuman[naik][0][1]*5;
				menu_minuman[naik][2][1]=1;							}
			if (kata[c]=='3'){
				printf("\nanda memilih Fruit Tea\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_minuman[naik][0][2]);
				menu_minuman[naik][1][2]=menu_minuman[naik][0][2]*6;
				menu_minuman[naik][2][2]=1;							}
			if (kata[c]=='4'){
				printf("\nanda memilih Nutrisari\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_minuman[naik][0][3]);
				menu_minuman[naik][1][3]=menu_minuman[naik][0][3]*5;
				menu_minuman[naik][2][3]=1;							}
			if (kata[c]=='5'){
				printf("\nanda memilih Aqua\n");
				printf("Masukkan jumlah = ");			
				scanf("%d",&menu_minuman[naik][0][4]);
				menu_minuman[naik][1][4]=menu_minuman[naik][0][4]*3;
				menu_minuman[naik][2][4]=1;							}
			
		}
		naik++;		
		
		n_pesanan_m[ulang_pesanan]=n_pesanan;		
		maks_pesanan++;
		printf("\nApakah Menambah pemesan lagi?\n");
		printf("99 untuk lanjut\n");
		printf("00 untuk selesai\n");
		printf("11 untuk reset\n");
		scanf("%d",&konfirmasi_maks_pesanan);
		if(konfirmasi_maks_pesanan==99){
			continue;
		}
		else if(konfirmasi_maks_pesanan==11){
			goto hapus;
		}
		else if(konfirmasi_maks_pesanan==0){
			goto lompat1;
		}
		else{printf("Perintah tidak dikenali/n");
		exit(1);
		}
	
	}

	lompat1:
	int ulang_2;
	printf("\n\n----------------------------------------------------------\n");
	printf("              Total Pesanan Anda Adalah...\n\n");
	printf("Nomor Meja : %d\n",meja_makan);
	for(total_matriks=1;total_matriks<=maks_pesanan;total_matriks++){
		printf("Nomor Pesanan : 00%d\n", n_pesanan_m[ulang_2]);
		if (menu_makanan[ulang_2][2][0]==1){
			printf("Nasi Goreng   	 = %d X 10 rb = %d rb\n",menu_makanan[ulang_2][0][0],menu_makanan[ulang_2][1][0]);	}
		if (menu_makanan[ulang_2][2][1]==1){
			printf("Indomie Goreng   = %d X 10 rb = %d rb\n",menu_makanan[ulang_2][0][1],menu_makanan[ulang_2][1][1]);	}
		if (menu_makanan[ulang_2][2][2]==1){
			printf("Ifumie Kuah      = %d X 10 rb = %d rb\n",menu_makanan[ulang_2][0][2],menu_makanan[ulang_2][1][2]);	}
		if (menu_makanan[ulang_2][2][3]==1){
			printf("Ayam Bakar       = %d X 15 rb = %d rb\n",menu_makanan[ulang_2][0][3],menu_makanan[ulang_2][1][3]);	}
		if (menu_makanan[ulang_2][2][4]==1){
			printf("Ikan Bakar       = %d X 15 rb = %d rb\n",menu_makanan[ulang_2][0][4],menu_makanan[ulang_2][1][4]);   }
			
		if (menu_minuman[ulang_2][2][0]==1){
			printf("Jus Jeruk   	 = %d X 12 rb = %d rb\n",menu_minuman[ulang_2][0][0],menu_minuman[ulang_2][1][0]);	}
		if (menu_minuman[ulang_2][2][1]==1){
			printf("Teh Manis        = %d X 5 rb  = %d rb\n",menu_minuman[ulang_2][0][1],menu_minuman[ulang_2][1][1]);	}
		if (menu_minuman[ulang_2][2][2]==1){
			printf("Fruit Tea      	 = %d X 6 rb  = %d rb\n",menu_minuman[ulang_2][0][2],menu_minuman[ulang_2][1][2]);	}
		if (menu_minuman[ulang_2][2][3]==1){
			printf("Nutrisari        = %d X 5 rb  = %d rb\n",menu_minuman[ulang_2][0][3],menu_minuman[ulang_2][1][3]);	}
		if (menu_minuman[ulang_2][2][4]==1){
			printf("Aqua             = %d X 3 rb  = %d rb\n",menu_minuman[ulang_2][0][4],menu_minuman[ulang_2][1][4]);   }
			
		total_matriks_makanan[ulang_2]=menu_makanan[ulang_2][1][0]+menu_makanan[ulang_2][1][1]+menu_makanan[ulang_2][1][2]+menu_makanan[ulang_2][1][3]+menu_makanan[ulang_2][1][4];
		total_matriks_minuman[ulang_2]=menu_minuman[ulang_2][1][0]+menu_minuman[ulang_2][1][1]+menu_minuman[ulang_2][1][2]+menu_minuman[ulang_2][1][3]+menu_minuman[ulang_2][1][4];
		total_pesanan_meja_matriks[ulang_2]=	total_matriks_makanan[ulang_2]+total_matriks_minuman[ulang_2];
		printf("Total            = %d rb\n",total_pesanan_meja_matriks[ulang_2]);
		total1=total1+total_pesanan_meja_matriks[ulang_2];
		ulang_2++;				
	}	
	printf("----------------------------------------------------------\n");
	
	//printf("total keseluruhan = %d\n",total1);
	printf("total keseluruhan = %d\n",total1);
	coba=total1;
	total4=total1/100;
	if (total1>100){
		printf("Bonus = Teh Manis Dingin Sebanyak %d \n",total4);
	}
	else{printf("Bonus = -\n");
	}
	printf("Total Yang Harus Dibayar = %d rb\n",total1);

	
	printf("----------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	//total=0;
	for(hapus_1=0;hapus_1<=7;hapus_1++){
		for(hapus_2=0;hapus_2<=7;hapus_2++){
			for(hapus_3=0;hapus_3<=7;hapus_3++){
				menu_makanan[hapus_1][hapus_2][hapus_3]=0;
			}
		}
	}
	for(hapus_1=0;hapus_1<=7;hapus_1++){
		for(hapus_2=0;hapus_2<=7;hapus_2++){
			for(hapus_3=0;hapus_3<=7;hapus_3++){
				menu_minuman[hapus_1][hapus_2][hapus_3]=0;
			}
		}
	}
		//printf("Total Yang Harus Dibayar = %d rb\n",coba);
	for(hapus_1=0;hapus_1<=7;hapus_1++){
		total_pesanan_meja_matriks[hapus_1]=0;
	}
	
		coba1=coba1+coba;
		//printf(" coba ======== %d\n",coba);
		printf("\nApakah Membuat Pesanan lagi?\n");
		printf("99 untuk lanjut\n");
		printf("00 untuk laporan keuangan\n");
		printf("11 untuk reset\n");
		scanf("%d",&konfirmasi_maks_pesanan);
		if(konfirmasi_maks_pesanan==99){
			
		}
		else if(konfirmasi_maks_pesanan==11){
			hapus:
			printf("\nMereset Data.....\n");	
			coba1=0;
			coba=0;
			n_pesanan=0;
			hasil_meja=1;
			for(hapus_1=0;hapus_1<=7;hapus_1++){
				for(hapus_2=0;hapus_2<=7;hapus_2++){
					for(hapus_3=0;hapus_3<=7;hapus_3++){
						menu_makanan[hapus_1][hapus_2][hapus_3]=0;
					}
				}
			}
			for(hapus_1=0;hapus_1<=7;hapus_1++){
				for(hapus_2=0;hapus_2<=7;hapus_2++){
					for(hapus_3=0;hapus_3<=7;hapus_3++){
						menu_minuman[hapus_1][hapus_2][hapus_3]=0;
					}
				}
			}
			for(hapus_1=0;hapus_1<=7;hapus_1++){
				total_pesanan_meja_matriks[hapus_1]=0;
				n_pesanan_m[hapus_1]=0;
			}
			printf("Data Berhasil di Hapus !!!\n\n");
			system("cls");
		}
		else if(konfirmasi_maks_pesanan==0){
			printf("----------------------------------------------------------\n");
			printf("----------------------------------------------------------\n");
			printf("total pendapatan harian = %d rb\n",coba1);
			printf("Jumlah Pelanggan        = %d orang\n",n_pesanan);
			printf("total meja              = %d \n",hasil_meja);
			printf("----------------------------------------------------------\n");
			exit(1);
		}
		else{printf("Perintah tidak dikenali\n");
		exit(1);
		}
	

	hasil_meja++;
	main();
	
	
	
	return 1;
}




