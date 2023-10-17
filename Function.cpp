#include<iostream>
using namespace std;
void garis(){ //function
cout<<"\n =============================== \n"; //isi dari function
}
void dataDiri(){ //function
char nama[30],alamat[30],hobi[30]; //variable
cout<<"Nama : "; //isi dari function
gets(nama); //isi dari function
cout<<"Alamat : "; //isi dari function
gets(alamat); //isi dari function
cout<<"Hobi : "; //isi dari function
gets(hobi); //isi dari function
}
void usia(){ //function
int tglLahir,tahun,umur; //variable
cout<<"tahun lahir : "; //isi dari function
cin>>tglLahir; //isi dari function
cout<<"Tahun sekarang: "; //isi dari function
cin>>tahun; //isi dari function
umur = tahun-tglLahir;
cout<<"umur anda : "<<umur; //isi dari function
}
main(){ //main function
garis(); //cara memanggil function
cout<<"Data Diri \n";
cout<<"\n";
dataDiri(); //cara memanggil function
usia(); //cara memanggil function
garis(); //cara memanggil function
}
