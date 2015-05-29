#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < int> liczby;
    unsigned int i,n;
    cin>>n;
    for (i=0; i<n; i++)
    {
        int D;
        cin>> D;
        liczby.push_back(D);
    }

    for (i=0; i<liczby.size(); i++)
	{
		int jedn=0,dzies=0;
		if (liczby[i]==0||liczby[i]==1)
		{
			dzies=0;jedn=1;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==2)
		{
			dzies=0;jedn=2;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==3)
		{
			dzies=0;jedn=6;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==4)
		{
			dzies=2;jedn=4;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==5||liczby[i]==6||liczby[i]==8)
		{
			dzies=2;jedn=0;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==7)
		{
			dzies=4;jedn=0;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]==9)
		{
			dzies=8;jedn=0;
			cout<<dzies<<" "<<jedn<<endl;
		}

		if(liczby[i]>10)
		{
			dzies=0;jedn=0;
			cout<<dzies<<" "<<jedn<<endl;
		}

    }
    return 0;
}

/*int silnia(int x)
{
    if (x==0) return 1;
    else return x*silnia(x-1);
}

int main()
{

    vector < int> liczby;
    unsigned int i,n,D;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>D;
        liczby.push_back(D);
    }

for (i=0;i<liczby.size();i++)

    cout<<silnia(liczby[i])<<endl;
}

Niech n będzie nieujemną liczbą całkowitą. Liczbę n! (czytaj n-silnia) definiuje się następująco. Jeśli n ≤ 1, to n! = 1. Dla n > 1, n! jest równe iloczynowi wszystkich liczb od 1 do n, czyli n! = 1 * 2 * ... * n. Na przykład 4! = 1*2*3*4 = 24.

Zadanie
Napisz program, który:
wczyta ze standardowego wejścia nieujemną liczbę całkowitą n,
policzy cyfrę dziesiatek oraz cyfrę jedności w zapisie dziesiętnym liczby n!,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤30), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku składa się z jednej linii, w której znajduje się jedna nieujemna liczba całkowita n (0 ≤ n ≤ 1 000 000 000).

Wyjście
Dla każdego przypadku z wejścia. Twój program powinien wypisać w osobnej linii dokładnie dwie cyfry (oddzielone pojedynczą spacją): cyfrę dziesiątek i cyfrę jedności liczby n! zapisanej w systemie dziesiętnym.

Przykład
Dla danych wejściowych:
2
1
4
poprawną odpowiedzią jest:
0 1
2 4
=============================================
 0!=                   1
 1!=                   1
 2!=                   2
 3!=                   6
 4!=                  24
 5!=                 120
 6!=                 720
 7!=               5 040
 8!=              40 320
 9!=             362 880
10! =          3 628 800
11! =         39 916 800
12! =        479 001 600
13! =      6 277 020 800
14! =     87 178 291 200
15! =   1 307 674368 000
16! = 20 922 789 888 000
17! = 355 687 428 096 000
18! = 6 402 373 705 728 000
19! =
20! =
============================================

            if (liczby[i]==0)
        {
            cout<<"0 1"<<endl;
			if (liczby[i]==5)
			{
				cout<<"2 0"<<endl;
				if (liczby[i]>=10)
				{
					cout<<"0 0"<<endl;
				}
			}
        }

    */

