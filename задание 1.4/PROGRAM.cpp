#include <iostream> 
#include <cmath> 
#include <string> 
#include <locale> 
#include "Koren6.h" 
#include "TempaData.h" 
#include "Mediana.h" 

using namespace std;

int main()
{
 system("color F0");

    setlocale(LC_ALL, "rus");

 /*1. 
    cout<<"������� ����� ��� ������ � ������� �����:\n";
    int Chislo, Stepen = 6; 
    double Result = 0; 
    cin>>Chislo; 
    Result = VichWithDiff(Chislo, Stepen); 
    cout<<"\nresult = "<<Result; 
    return 0; 
}*/

  
   /*2. 
    cout<<"������ ������� -> ";
    cin>>N; 
    int Massiv[N] = {0}; 
    for(int i = 0; i < N; i++){ 
        cin>>Massiv[i]; 
    }
    double Mediana = SearchMediana(Massiv, N); 
    cout<<Mediana; */



  /* 3. 
    int Day; 
    string Month;
    cin>>Day; 
    cin>>Month; 
    int Idinf = 0, Tempa = 0;
    if(Month == "jan" || Month == "dec" || Month == "feb"){ 
        Idinf = 1+rand()%+2; 
        Tempa = TemperatureData(Day, Idinf); 
        cout<<Day<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ������ ������. ������ ���������!"; 
    }

    else if(Month == "march" || Month == "april" || Month == "may"){ 
        Idinf = 3+rand()%+5;
        Tempa = TemperatureData(Day, Idinf);
        cout<<Day<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ��������. ���������� ������!";
    }
    else if(Month == "juny" || Month == "july" || Month == "aug"){ 
        Idinf = 6+rand()%+8;
        Tempa = TemperatureData(Day, Idinf);
        cout<<Day<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ����. ����� �� ����!";
    }
    else if(Month == "sep" || Month == "oct" || Month == "nov"){ 
        Idinf = 9+rand()%+11;
        Tempa = TemperatureData(Day, Idinf);
        cout<<Day<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ������. �� ������ ����� ������? ";
    }
    else 
        cout<<"������������ ����!";
    return 0; */

}

   