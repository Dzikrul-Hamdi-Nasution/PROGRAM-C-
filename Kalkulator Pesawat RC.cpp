#include<iostream>
using namespace std;

float  berat,power,battery,kapasitas_battery,endurance;
float hitung_motor,c_battery,arus_motor,Daya_battery;

int main(){
	cout << "  Program Kalkulator Pesawat RC Kategori FIXED WINGS" << "\n\n";
	cout << "  Yang dapat di ketahui :" << '\n';
	cout << "  1. Daya Motor Brushless" << '\n';
	cout << "  2. Battery" << '\n';
	cout << "  3. ESC (Elektronik Speed Control)" << '\n';
	cout << "  5. Endurance Pesawat RC" << "\n\n";
	
	
	cout << "  Masukkan berat pesawat ....(gram)" << "\n";
	cin>>berat;
	cout << "  Masukkan power loading ...." << "\n";
	cout << "  120 untuk kategori traininer" << "\n";
	cout << "  220 untuk kategori glidders" << "\n";
	cout << "  300 untuk kategori acrobatic" << "\n";
	cin>> power;
	cout << "  masukkan tegangan battery ...." << "\n";
	cin>>battery;
	cout << "  masukkan C battery ...." << "\n";
	cin>>c_battery;
	
	
	cout << "  \n\nSpesifikasi Minimal Pesawat adalah ...." << "\n";
	cout << "  Tegangan Battery      = "<<battery<<" V" << "\n";
	cout << "  C Battery             = "<<c_battery<<" C" << "\n\n";
	cout << "  Power Loading pesawat = "<<power<<" watt/Kg" << "\n";
	cout << "  Berat pesawat         = "<<berat<<" gram" << "\n\n";
	
	

	hitung_motor = ((berat/1000)*power)/(0.85*0.3);
	cout << "  Daya Motor            = "<<hitung_motor<<" Watt" << "\n";
	
	arus_motor = hitung_motor/battery;
	cout << "  Arus Motor            = "<<arus_motor<<" A" << "\n";
	
	kapasitas_battery = arus_motor / c_battery *1000;
	cout << "  Kapasitas Battery     = "<<kapasitas_battery<<" mAH" << "\n";
	
	Daya_battery= arus_motor*battery;
	cout << "  Daya Battery          = "<<Daya_battery<<" Watt" << "\n";
	
	endurance=Daya_battery-hitung_motor;
	cout << "  Daya tahan            = "<<endurance<<" jam" << "\n";
	
	

	
	
	
	
	
	
	
	
}
