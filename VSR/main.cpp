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
1016. Predko�� �rednia

Kod zadania: VSR

Poci�g z miejscowo�ci A do B jedzie z pr�dko�ci� v1, a wraca z miejscowo�ci B do A z pr�dko�ci� v2. Obliczy� �redni� pr�dko�� na ca�ej trasie. Uwaga: Dane wej�ciowe b�d� tak dobrane, aby wynik by� liczba ca�kowit�.

Wej�cie

Na wej�ciu znajduje si� dok�adnie jedna liczba ca�kowita t (1<=t<=1000) oznaczaj�ca liczb� zestaw�w danych. W wierszach od 2 do t+1 znajduj� si� dwie liczby ca�kowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000).

Wyj�cie

Wyj�cie sk�ada si� z t wierszy. W ka�dym wierszu powinna znale�� si� dok�adnie jedna liczba ca�kowita oznaczaj�ca �redni� pr�dko��.

Przyk�ad

Wej�cie:
2
50 50
60 40

Wyj�cie:
50
48
*/
