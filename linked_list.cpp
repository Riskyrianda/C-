#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama, prodi;
	int umur;
	Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *nodebaru, *nodebaru1,*nodebaru2,*nodebaru3,*nodebaru4,*nodebaru5 ;
void buatSingleLinkedList(string nama, string prodi, int umur){
	head = new Mahasiswa;
	head->nama = nama;
	head->prodi= prodi;
	head->umur= umur;
	head->next = nodebaru;
	tail = head;
}


void tambahnilaiakhir(string nama, string prodi, int umur){
	nodebaru = new Mahasiswa;
	nodebaru->nama = nama;
	nodebaru->prodi= prodi;
	nodebaru->umur= umur;
	nodebaru->next = nodebaru1;
	tail = nodebaru;
	
}

void tambahdata(string nama, string prodi, int umur){
	nodebaru1 = new Mahasiswa;
	nodebaru1->nama = nama;
	nodebaru1->prodi= prodi;
	nodebaru1->umur= umur;
	nodebaru1->next = nodebaru2;	
	tail = nodebaru1;
}

void tambahdata2(string nama, string prodi, int umur){
	nodebaru2 = new Mahasiswa;
	nodebaru2->nama = nama;
	nodebaru2->prodi= prodi;
	nodebaru2->umur= umur;
	nodebaru2->next = nodebaru3;	
	tail = nodebaru2;
}

void tambahdata3(string nama, string prodi, int umur){
	nodebaru3 = new Mahasiswa;
	nodebaru3->nama = nama;
	nodebaru3->prodi= prodi;
	nodebaru3->umur= umur;
	nodebaru3->next = nodebaru4;	
	tail = nodebaru3;
}

void tambahdata4(string nama, string prodi, int umur){
	nodebaru4 = new Mahasiswa;
	nodebaru4->nama = nama;
	nodebaru4->prodi= prodi;
	nodebaru4->umur= umur;
	nodebaru4->next = nodebaru5;	
	tail = nodebaru4;
}


void tambahdata5(string nama, string prodi, int umur){
	nodebaru5 = new Mahasiswa;
	nodebaru5->nama = nama;
	nodebaru5->prodi= prodi;
	nodebaru5->umur= umur;
	nodebaru5->next = NULL;
	tail->next = nodebaru5;	
	tail = nodebaru5;
}


void cetakSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout<<"nama = "<<cur->nama<<endl;
		cout<<"Prodi = "<<cur->prodi<<endl;
		cout<<"Umur = "<<cur->umur<<endl<<endl;
		cur = cur->next;
	}
}
int main(){
buatSingleLinkedList("Kevin", "Biologi", 23);
tambahnilaiakhir("Bayu", "Fisika", 19);
tambahnilaiakhir("Riskyriandagantengg", "Informatika", 19); 
tambahnilaiakhir("Ipul", "Management", 19); 
tambahnilaiakhir("Gara", "Matematika", 21); 
tambahnilaiakhir("Akim", "Agama Islam", 20); 
tambahnilaiakhir("Yanto", "Kedokteran", 22); 
cetakSingleLinkedList();
cout<<endl<<endl;
}
