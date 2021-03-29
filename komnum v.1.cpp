#include <iostream>
using namespace std;


//deklarasi variabel
int menit,jam,detik,waktu,diskon,total_biaya;
int opsi;

int main(){
	
	awal:
		
		
		
		
		jam=0;
		menit=0;
		detik=0;
		waktu=0;
		diskon=0;
		total_biaya=0;
	//menampilkan kalimat pembantu sebagai opsi inputan
		cout<<"Program Menghitung Tarif Telepon"<<endl<<endl<<endl;
		cout<<"Masukkan Waktu (jam-menit-detik)"<<endl;
		
		
		//memasukkan inputan jam ke variabel jam, menit ke varibel menit, dan detik ke variabel detik
		cout<<"Jam :";
		cin>>jam;
		cout<<"Menit :";
		cin>>menit;
		cout<<"Detik :";
		cin>>detik;
			
		//program untuk mengubah nilai inputan detik jika lebih dari 59 detik maka akan diubah menjadi menit dan sisanya
		//akan menjadi nilai detik	
			
		if (detik>59){
			bagi2:
				detik=detik-60;
				menit++;
				if(detik<59){
					goto selesai;
				}
			goto bagi2;
		}	
		
		
		//program untuk mengubah nilai inputan menit jika lebih dari 59 menit maka akan diubah menjadi jam dan sisanya
		//akan menjadi nilai menit
		
		selesai:	
		if (menit>59){
			bagi:
				menit=menit-60;
				jam++;
				if(menit<59){
					goto selesai2;
				}
			goto bagi;
		}
		
			
			
		selesai2:
		
		//menampilkan waktu panggilan setelah diubah menjadi jam, menit ,detik
		
		cout<<endl<<endl<<jam<<" jam"<<endl;
		cout<<menit<<" menit"<<endl;
		cout<<detik<<" detik"<<endl<<endl<<endl;
		
		
		//melakukan penghitungan biaya dengan mengubah total waktu menjadi detik dan dikalikan 10 rupiah
		
		waktu=(jam*3600*10)+(menit*60*10)+(detik*10);
		diskon=jam*10000;
		total_biaya=waktu-diskon;
		cout<<"Biaya perdetik (Rp) adalah....  "<<waktu<<endl;
		cout<<"Diskon (Rp) adalah....          "<<diskon<<endl;
		cout<<"Total biaya (Rp) adalah....     "<<total_biaya<<endl<<endl<<endl;
		
		
		menu:
		cout<<"Apakah Ingin Menghitung Tarif lagi? (1=ya  0=tidak)"<<endl;
		cin>>opsi;
		
		if(opsi==1){
				cout<<endl<<endl<<endl<<endl;
				goto awal;
			}
			else if(opsi==0){
				exit(1);
			}
			else{cout<<"Perintah tidak dikenali"<<endl;
				goto menu;	
			}
		
		
		
	
	
}

	
	
	
	
		
	
	
	
