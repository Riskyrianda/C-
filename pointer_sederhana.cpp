#include<iostream>
using namespace std;
//* reference -> menyimpan alamat dari variabel di memori
//& dereference -> mengetahui alamat dari sebuah variabel
int main(){
int a = 10;
//pointer
int *aPtr = &a;
//int a memiliki nilai dan alamat
cout<<"nilai dari a: " <<a <<endl;
cout<<"alamat dari a: " <<&aPtr <<endl;
}
