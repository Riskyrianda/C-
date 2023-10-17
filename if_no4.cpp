#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nilai;
    cout <<"Masukkan nilai:";
    cin >>nilai;

if (nilai > 85 and nilai <=100){
    cout <<"Grade A+";
}
else if (nilai >80 and nilai <=84)
{
    cout <<"Grade A";
}
else if (nilai >75 and nilai <=79)
{
    cout <<"Grade B+";
}
else if (nilai >70 and nilai <=74)
{
    cout <<"Grade B-";
}
else if (nilai >65 and nilai <=69)
{
    cout <<"Grade C";
}
else 
{
cout <<"Grade E";
}
    
    return 0;
}
