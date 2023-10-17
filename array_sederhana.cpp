#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int nilai[5];
	int i;
	int j;
	for (int i = 0; i < 5; i++){
	           cout << "Input nilai ke-" << (i) << ":";
	           cin >> nilai[i];
	} 
	           cout << "Nilai yang Anda masukkan adalah" << endl;
	for (int i = 0; i <5; i++){
	            cout << "\nNilai ke-" << (i) << " adalah " << nilai[i];
	}
	    cout<<endl<<endl;

	for (int i = 0; i <5; i++){
 		for (int j=i+1; j < 5; j++){
			if(nilai[i]==nilai[j]){  
				cout<<"Ditemukan duplikasi pada urutan array ke-"<<(i)<<" dan ke-"<<(j)<<endl;
			}
			else if(nilai[i]!=nilai[j]){  
				cout<<"tidak ada duplikasi pada urutan array ke-"<<(i)<<" dan ke-"<<(j)<<endl;
			}
		}
		
	}
	
	
	
	return 0;
}
