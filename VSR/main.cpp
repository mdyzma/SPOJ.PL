#include <iostream>
#include <vector>

using namespace std;

int vsr(int v1, int v2)
{
    return (2*(v1*v2))/(v1+v2);
}


int main()
{
    int t;
    vector<int>wyniki;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        wyniki.push_back(vsr(v1,v2));

    }
    for (unsigned int i=0;i<wyniki.size();i++)
    {
        cout<<wyniki[i]<<endl;
    }
    return 0;
}


/*
1016. Predkoœæ œrednia

Kod zadania: VSR

Poci¹g z miejscowoœci A do B jedzie z prêdkoœci¹ v1, a wraca z miejscowoœci B do A z prêdkoœci¹ v2. Obliczyæ œredni¹ prêdkoœæ na ca³ej trasie. Uwaga: Dane wejœciowe bêd¹ tak dobrane, aby wynik by³ liczba ca³kowit¹.

Wejœcie

Na wejœciu znajduje siê dok³adnie jedna liczba ca³kowita t (1<=t<=1000) oznaczaj¹ca liczbê zestawów danych. W wierszach od 2 do t+1 znajduj¹ siê dwie liczby ca³kowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000).

Wyjœcie

Wyjœcie sk³ada siê z t wierszy. W ka¿dym wierszu powinna znaleŸæ siê dok³adnie jedna liczba ca³kowita oznaczaj¹ca œredni¹ prêdkoœæ.

Przyk³ad

Wejœcie:
2
50 50
60 40

Wyjœcie:
50
48
*/
