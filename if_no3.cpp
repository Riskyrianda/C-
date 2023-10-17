#include <iostream>
using namespace std;

int prima(int bil, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bil % i == 0) { 
		return 1 + prima(bil, --i); 
		} else { 
		return 0 + prima(bil, --i); 
	} 
}
  
int samain(int bil){ 
	if (bil > 1) { 
		return (prima(bil, bil) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int bil;
	cout<<"Masukan Bilangan : ";
	cin>>bil;

	if (samain(bil)){
		cout<<"Bilangan Prima"<<endl;
	}else {
		cout<<"Bilangan yang anda ketik bukan Bilangan prima"<<endl;
	}
	return 0;
} 
