#include <iostream>
#include<iomanip>

using namespace std;

void liniowe(float a, float b, float c){
    float x;

    if(a==0&&b==c){
            cout<<"NWR"<<endl;
    }
    else if(a==0&&b!=c){
        cout<<"BR"<<endl;
    }
    else{
        x = (c-b)/a;
        cout<<fixed<<setprecision(2)<<x;
    }
}

int main()
{
    float a, b, c;
    cin>>a>>b>>c;
    liniowe(a,b,c);

    return 0;
}

/*

Kod zadania: JROWLIN

R�wnanie liniowe jest postaci ax+b=c, gdzie a, b, c s� liczbami rzeczywistymi. Niewiadom� jest x, kt�ra r�wnie� jest liczb� rzeczywist�. R�wnanie to mo�e mie� jedno rozwi�zanie, brak rozwi�za� lub niesko�czenie wiele rozwi�za�.
Input

W pojedy�czej linii podane s� trzy liczby rzeczywiste zaokr�glone do drugiego miejsca po przecinku.
Output

Rozwi�zaniem problemu jest liczba rzeczywista zaokr�glona do drugiego miejsca po przecinku w przypadku, gdy r�wnanie liniowe ax+b=c posiada rozwi�zanie. W przypadku braku rozwi�zania powinien zosta� wydrukowany napis BR, a w przypadku niesko�czenie wielu rozwi�za� napis NWR
Example 1

Input:
0.52 1.60 -5.44

Output:
-13.54


Example 2

Input:
0.00 2.00 3.00

Output:
BR


Example 3

Input:
0.00 2.00 2.00

Output:
NWR
*/
