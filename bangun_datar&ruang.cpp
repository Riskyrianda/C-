#include <iostream>
using namespace std;
// Rumus (int) dari 4 bangun datar 
void sayhello (){
cout << "Berikut adalah 4 opsi bangun datar : "<<endl;
}
int hitung_luas_persegipanjang (int p, int l) {
int luas = p * l;
return luas;
}
int hitung_keliling_persegipanjang (int p, int l){
int keliling = 2 * (p+l);
return keliling;
}
int hitung_luas_persegi (int sisi) {
int luas = sisi*sisi;
return luas;
}
int hitung_keliling_persegi (int sisi){
int keliling = 4*sisi;
return keliling;
}
int hitung_luas_segitiga (int alas, int tinggi) {
int luas = 0.5*alas*tinggi;
return luas;
}
int hitung_keliling_segitiga (int sisi){
int keliling = 3*sisi;
return keliling;
}
int hitung_luas_lingkaran (int r) {
const float phi = 3.14;
int luas = phi * r * r;
return luas;
}
int hitung_keliling_lingkaran (int r){
const float phi = 3.14;
int keliling = 2*phi*r;
return keliling;
}
void tampilkan_luas_persegipanjang (int p, int l){
cout << "Hasil dari luas persegi panjang adalah : ";
cout << hitung_luas_persegipanjang(p,l) << endl;
}
void tampilkan_keliling_persegipanjang (int p, int l){
cout << "Hasil dari keliling persegi panjang adalah : ";
cout << hitung_keliling_persegipanjang(p,l) << endl;
}
void tampilkan_luas_persegi (int sisi){
cout << "Hasil dari luas persegi adalah : ";
cout << hitung_luas_persegi(sisi) << endl;
}
void tampilkan_keliling_persegi (int sisi){
cout << "Hasil dari keliling persegi adalah : ";
cout << hitung_keliling_persegi(sisi) << endl;
}
void tampilkan_luas_segitiga (int alas, int tinggi){
cout << "Hasil dari luas segitiga adalah : ";
cout << hitung_luas_segitiga (alas, tinggi) << endl;
}
void tampilkan_keliling_segitiga (int sisi){
cout << "Hasil dari keliling segitiga adalah : ";
cout << hitung_keliling_segitiga (sisi) << endl;
}
void tampilkan_luas_lingkaran (int r){
cout << "Hasil dari luas lingkaran adalah : ";
cout << hitung_luas_lingkaran (r) << endl;
}
void tampilkan_keliling_lingkaran (int r){
cout << "Hasil dari keliling lingkaran adalah : ";
cout << hitung_keliling_lingkaran (r) << endl;
}
// Rumus (int) dari 4 bangun ruang
void sayhello2 (){
cout << "Berikut adalah 4 opsi bangun ruang : "<<endl;
}
int hitung_luas_kubus (int s) {
int luas = 6*s*s;
return luas;
}
int hitung_volume_kubus (int s){
int volume = s*s*s;
return volume;
}
int hitung_luas_bola (int r) {
const float phi = 3.14;
int luas = 4*phi*r;
return luas;
}
int hitung_volume_bola (int r){
const float phi = 3.14;
int volume = 4/3*phi*r;
return volume;
}
int hitung_luas_tabung (int r, int t) {
const float phi = 3.14;
int luas = 2*phi*r*(r+t);
return luas;
}
int hitung_volume_tabung (int r, int t){
const float phi = 3.14;
int volume = phi*r*r*t;
return volume;
}
int hitung_luas_kerucut (int r, int s) {
const float phi = 3.14;
int luas = phi*r*(r+s);
return luas;
}
int hitung_volume_kerucut (int r, int t){
const float phi = 3.14;
int volume = 0.33*phi*r*r*t;
return volume;
}
void tampilkan_luas_kubus (int s){
cout << "Hasil dari luas kubus adalah : ";
cout << hitung_luas_kubus (s)<< endl;
}
void tampilkan_volume_kubus (int s){
cout << "Hasil dari volume kubus adalah : ";
cout << hitung_volume_kubus (s) << endl;
}
void tampilkan_luas_bola (int r){
cout << "Hasil dari luas bola adalah : ";
cout << hitung_luas_bola (r) << endl;
}
void tampilkan_volume_bola (int r){
cout << "Hasil dari volume bola adalah : ";
cout << hitung_volume_bola (r) << endl;
}
void tampilkan_luas_tabung (int r, int tinggi){
cout << "Hasil dari luas tabung adalah : ";
cout << hitung_luas_tabung (r,tinggi) << endl;
}
void tampilkan_volume_tabung (int r, int tinggi){
cout << "Hasil dari volume tabung adalah : ";
cout << hitung_volume_tabung (r,tinggi) << endl;
}
void tampilkan_luas_kerucut (int r, int s){
cout << "Hasil dari luas kerucut adalah : ";
cout << hitung_luas_kerucut (r,s) << endl;
}
void tampilkan_volume_kerucut (int r, int t){
cout << "Hasil dari volume kerucut adalah : ";
cout << hitung_volume_kerucut (r,t) << endl;
}
int main(int argc, char** argv) {
int panjang, lebar, s, alas , t, r, opsi1, opsi2 ; {
char reply;
do {
sayhello ();
cout<<"1. Persegi Panjang"<<endl;
cout<<"2. Persegi"<<endl;
cout << "3. Segitiga"<<endl;
cout << "4. Lingkaran"<<endl;
cout<<"Pilih opsi dengan memasukkan angka : ";
cin>>opsi1;
if (opsi1==1)
{
cout << "Masukan nilai panjang persegi panjang :";
cin >> panjang;
cout << "Masukan nilai lebar persegi panjang : ";
cin >> lebar;
tampilkan_luas_persegipanjang (panjang,lebar);
tampilkan_keliling_persegipanjang(panjang,lebar);
}
else if (opsi1==2)
{
cout << "Masukan nilai sisi persegi : ";
cin >> s;
tampilkan_luas_persegi (s);
tampilkan_keliling_persegi(s);
}
else if (opsi1==3)
{
cout << "Masukan nilai alas segitiga : ";
cin >> alas;
cout << "Masukan nilai tinggi segitiga : ";
cin >> t;
cout << "Masukan nilai sisi segitiga : ";
cin >> s;
tampilkan_luas_segitiga (alas,t);
tampilkan_keliling_segitiga (s);
}
if (opsi1==4)
{
cout << "Masukan nilai jari-jari lingkaran : ";
cin >> r;
tampilkan_luas_lingkaran (r);
tampilkan_keliling_lingkaran(r);
}
{
sayhello2 ();
cout<<"1. Kubus"<<endl;
cout<<"2. Bola"<<endl;
cout << "3. Tabung"<<endl;
cout << "4. Kerucut"<<endl;
cout<<"Pilih opsi dengan memasukkan angka : ";
cin>>opsi2;
}
if (opsi2==1)
{
cout << "Masukan nilai sisi kubus :";
cin >> s;
tampilkan_luas_kubus (s);
tampilkan_volume_kubus (s);
}
else if (opsi2==2)
{
cout << "Masukan nilai jari-jari bola : ";
cin >> r;
tampilkan_luas_bola (r);
tampilkan_volume_bola (r);
}
else if (opsi2==3)
{
cout << "Masukan nilai jari-jari tabung : ";
cin >> r;
cout << "Masukan nilai tinggi tabung : ";
cin >> t;
tampilkan_luas_tabung (r,t);
tampilkan_volume_tabung (r,t);
}
else if (opsi2==4)
{
cout << "Masukan nilai jari-jari kerucut : ";
cin >> r;
cout << "Masukan nilai tinggi kerucut : ";
cin >> t;
cout << "Masukan nilai sisi kerucut : ";
cin >> s;
tampilkan_luas_kerucut (r,s);
tampilkan_volume_kerucut(r,t);
}
cout << "Apakah Ingin Melanjutkan??";
cin >> reply;
}
while (reply=='y');
}
return 0;
}

