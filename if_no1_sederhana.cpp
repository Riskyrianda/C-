#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    //Karena berisi Karakter jadinya Char
    char Keadaan;
    cout <<"Apakah Keadaan Hari ini Hujan?"<<endl;
    cout <<"y or n" <<endl;
    cin >>Keadaan;
    
    //Karena 
 if (Keadaan == 'y' ) {
    cout << "Bawalah Payung dan Kenakanlah Mantel" <<endl;
  }
    return 0;
}
