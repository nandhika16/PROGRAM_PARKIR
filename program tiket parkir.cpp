#include<iostream>
using namespace std;
int waktu;
int kendaraan;
int biaya='0';
// cara mempermudah mengoreksi parkir untuk beberapa jam.
// Putu Nandhika Pratama Artana

int main()
{
	cout<<endl;
	cout<<"====================PROGRAM PARKIR KENDARAAN MOTOR DAN MOBIL===================="<<endl;
	cout<<endl;
	cout<<"Masukan Lama Parkir(jam):";
	cin>>waktu;
	cout<<"Masukan Jenis Kendaraan(1.Motor 2.Mobil):";
	cin>>kendaraan;
	if(waktu>2&&kendaraan==1)
	{
		biaya=(waktu+2)*2000+1500;
	}
	else if(waktu>2&&kendaraan==2)
	{
		biaya=(waktu+2)*2000+3000;
	}
	else if(waktu<2&&kendaraan==1)
	{
		biaya=3500;
	}
	else if(waktu<2&&kendaraan==2)
	{
		biaya=100000;
	}
	
	cout<<endl;
	cout<<"=============================="<<endl;
	cout<<"Informasi Parkir:"<<endl;
	cout<<"Lama Parkir\t\t"<<":"<<waktu<<"jam"<<endl;
	if(kendaraan==1)
	{
		cout<<"Jenis Kendaraan\t"<<":"<<"Motor"<<endl;
	}
	else if(kendaraan==2)
	{
		cout<<"Jenis Kendaraan\t"<<":"<<"Mobil"<<endl;
	}
	else 
	{
		cout<<"Mohon Maaf Anda Salah Memasukan Kendaraan";
	}
	
	cout<<"Biaya Parkir\t\t"<<":Rp."<<biaya<<endl;
	cout<<"=========================================="<<endl;
	
}
