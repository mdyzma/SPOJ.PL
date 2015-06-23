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

Równanie liniowe jest postaci ax+b=c, gdzie a, b, c s¹ liczbami rzeczywistymi. Niewiadom¹ jest x, która równie¿ jest liczb¹ rzeczywist¹. Równanie to mo¿e mieæ jedno rozwi¹zanie, brak rozwi¹zañ lub nieskoñczenie wiele rozwi¹zañ.
Input

W pojedyñczej linii podane s¹ trzy liczby rzeczywiste zaokr¹glone do drugiego miejsca po przecinku.
Output

Rozwi¹zaniem problemu jest liczba rzeczywista zaokr¹glona do drugiego miejsca po przecinku w przypadku, gdy równanie liniowe ax+b=c posiada rozwi¹zanie. W przypadku braku rozwi¹zania powinien zostaæ wydrukowany napis BR, a w przypadku nieskoñczenie wielu rozwi¹zañ napis NWR
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
