#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout <<"Bulan Hijriah ke berapa?"<<endl;
    cin >>a;
 switch (a){
        case 1:
        cout <<"Bulan Hijriah ke "<<a<<" Muharram";
        break;
        case 2:
        cout <<"Bulan Hijriah ke "<<a<<" Safar";
        break;
        case 3:
        cout <<"Bulan Hijriah ke "<<a<<" Rabiul awal";
        break;
        case 4:
        cout <<"Bulan Hijriah ke "<<a<<" Rabiul akhir";
        break;
        case 5:
        cout <<"Bulan Hijriah ke "<<a<<" Jumadil awal";
        break;
        case 6:
        cout <<"Bulan Hijriah ke "<<a<<" Jumadil akhir";
        break;
        case 7:
        cout <<"Bulan Hijriah ke "<<a<<" Rajab";
        break;
        case 8:
        cout <<"Bulan Hijriah ke "<<a<<" Sya'ban";
        break;
        case 9:
        cout <<"Bulan Hijriah ke "<<a<<" Ramadhan";
        break;
        case 10:
        cout <<"Bulan Hijriah ke "<<a<<" Syawal";
        break;
        case 11:
        cout <<"Bulan Hijriah ke "<<a<<" Dzulqa'dah";
        break;
        case 12:
        cout <<"Bulan Hijriah ke "<<a<<" Dzulhijjah";
        break;
default:
    cout <<"Tidak terdapat nama Bulan Hijriah lebih dari 12 ";
    }
  return 0;
}
