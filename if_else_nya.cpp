#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char keadaan;
    cout <<"Apakah Hari ini Hujan??" <<endl;
    cout <<"y or n" <<endl;
    cin >>keadaan;

if (keadaan == 'y'){
    cout <<"Bawalah Payung";
}
else if (keadaan == 'n'){
    cout <<"Tidak Membawa Payung";
}
    return 0;
}
