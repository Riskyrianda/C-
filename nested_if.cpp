#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int nilai;
    cout <<"Masukkan nilai:";
    cin >>nilai;

  if (nilai > 90 and nilai <=100)
  {
      cout <<"Grade A";
  }
  nested (nilai >85 and nilai <=90)
  {
      cout <<"Grade -A";
  }
  else if (nilai >80 and nilai <=85)
  {
     cout <<"Grade B";
  }
    else if (nilai >0 and nilai <=80)
    {
        cout <<"Belum ditentukan"; 
    }
    
    return 0;
}
