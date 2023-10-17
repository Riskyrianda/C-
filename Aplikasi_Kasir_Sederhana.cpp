#include <iostream>
#include <string>
using namespace std;

int diamond1(int jumlah){
long harga,total;
harga=15000;
total=jumlah*harga;
return total;
}
void yoigaming1(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 1 "<<endl;
cout<<" 50 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 15000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond1(jumlah)<<endl;
cout<<"=================================";
}
int diamond2(int jumlah){
long harga,total;
harga=75000;
total=jumlah*harga;
return total;
}
void yoigaming2(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 2 "<<endl;
cout<<" 250+25 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 75000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond2(jumlah)<<endl;
cout<<"=================================";
}
int diamond3(int jumlah){
long harga,total;
harga=149000;
total=jumlah*harga;
return total;
}
void yoigaming3(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 3 "<<endl;
cout<<" 500 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 149000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond3(jumlah)<<endl;
cout<<"=================================";
}
int diamond4(int jumlah){
long harga,total;
harga=300000;
total=jumlah*harga;
return total;
}
void yoigaming4(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 4 "<<endl;
cout<<" 1200 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 300000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond4(jumlah)<<endl;
cout<<"=================================";
}
int diamond5(int jumlah){
long harga,total;
harga=450000;
total=jumlah*harga;
return total;
}
void yoigaming5(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 5 "<<endl;
cout<<" 1700 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 450000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond5(jumlah)<<endl;
cout<<"=================================";
}
int diamond6(int jumlah){
long harga,total;
harga=740000;
total=jumlah*harga;
return total;
}
void yoigaming6(int jumlah){
cout<<endl<<endl;
cout<<"================================="<<endl;
cout<<" ##UMRI Gaming ML## "<<endl;
cout<<"================================="<<endl;
cout<<"PAKET Diamond 6 >> SUPER HEMAT "<<endl;
cout<<" 50000 Diamond "<<endl;
cout<<"================================="<<endl;
cout<<"Harga : Rp. 740000 "<<endl;
cout<<"Jumlah Pembelian : "<<jumlah<<endl;
cout<<"Total : Rp. "<<diamond6(jumlah)<<endl;
cout<<"=================================";
}
int main(int argc, char** argv) {
int pilihan,d;
char reply;
char salah;
do {
cout<<"------------------------@UMRI E-sport.com---------------------------"<<endl;
cout<<"------------------Silahkan Pilih Paket Diamond----------------------"<<endl;
cout<<"|==================================================================|"<<endl;
cout<<"| KODE PAKET Top UP | Jumlah Diamond | HARGA |"<<endl;
cout<<"|==================================================================|"<<endl;
cout<<"|1. PAKET Diamond 1 | 50 Diamond     |Rp. 15.000                   |"<<endl;
cout<<"|2. PAKET Diamond 2 | 250+25 Diamond |Rp. 75.000                   |"<<endl;
cout<<"|3. PAKET Diamond 3 | 500 Diamond    |Rp. 149.000                  |"<<endl;
cout<<"|4. PAKET Diamond 4 | 1200 Diamond   |Rp. 300.000                  |"<<endl;
cout<<"|5. PAKET Diamond 5 | 1700 Diamond   |Rp. 450.000                  |"<<endl;
cout<<"|6. PAKET Diamond 6 | 50000 Diamond  |Rp. 750.000                  |"<<endl;
cout<<"|==================================================================|"<<endl;

cout<<"Masukkan Kode Paket Top Up  = ";cin>>pilihan;
if (pilihan==1){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming1(d);
}
else if (pilihan==2){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming2(d);
}
else if (pilihan==3){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming3(d);
}
else if (pilihan==4){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming4(d);
}
else if (pilihan==5){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming5(d);
}
else if (pilihan==6){
cout<<"Masukkan Jumlah Pemesanan = ";cin>>d;
yoigaming6(d);
}
else {
cout<<"Maaf Pilihan Tidak Tersedia";
}
cout<<endl<<endl;

string server1,server,bayar,id;

cout<<"Lengkapi data dengan benar!  "<<endl;
getline(cin,id);

cout<<"Masukkan id akun anda!"<<endl;
getline(cin,server);

cout<<"Masukkan server akun anda!"<<endl;
getline(cin,server1);

int bayar1;

cout<<"------------------------@UMRI E-sport.com---------------------------"<<endl;
cout<<"----------------Silahkan Pilih Metode Pembayaran--------------------"<<endl;
cout<<"|==================================================================|"<<endl;
cout<<"| --Daftar Pembayaran-- |"<<endl;
cout<<"|==================================================================|"<<endl;
cout<<"|1. Alfamart           |"<<endl;
cout<<"|2. Indomaret          |"<<endl;
cout<<"|3. Dana               |"<<endl;
cout<<"|4. Ngutang dulu boss!!|"<<endl;
cout<<"|==================================================================|"<<endl;

cin>>bayar;

if (bayar1==1){
cout<<"DILARANG NGUTANGG BOSS! = ";
}
else {
cout<<"Mohon Ditunggu 1x24 jam yaa-- Have fun  :) ";
}

cout<<"do you want to continue (y/n)= ";cin>>reply;
cout<<endl;
}
while (reply=='y');
return 0;
}
