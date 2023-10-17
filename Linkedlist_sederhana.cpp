#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama, prodi;
	int umur;
	Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *nodebaru;
void buatSingleLinkedList(string nama, string prodi, int umur){
	head = new Mahasiswa;
	head->nama = nama;
	head->prodi= prodi;
	head->umur= umur;
	head->next = NULL;
	tail = head;
}


void tambahnilaiakhir(string nama, string prodi, int umur){
	nodebaru = new Mahasiswa;
	nodebaru->nama = nama;
	nodebaru->prodi= prodi;
	nodebaru->umur= umur;
	nodebaru->next = NULL;
	tail->next = nodebaru;
	tail = nodebaru;
	
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
	cetakSingleLinkedList();
	cout<<endl<<endl;
}
