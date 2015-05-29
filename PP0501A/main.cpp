#include <iostream>
#include<vector>
using namespace std;

int nwd(int a, int b)
{
    while (a!=b)
    {
        if (a<b) b-=a;
        else a-=b;
    }
    return a;
}

int main()
{
    vector <int> liczby;
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {

        int a,b,wynik ;
        cin >>a>>b;
        wynik = nwd(a,b);
        liczby.push_back(wynik);
    }
    for (unsigned int i=0;i<liczby.size();i++)
        cout<<liczby[i]<<endl;
    return 0;
}


/*
Napisz funkcjê:

 int nwd(int a, int b);
która oblicza najwiêkszy wspólny dzielnik liczb a i b,

 0 <= a,b <= 1000000
Input



W pierwszej linii liczba testów t, w kolejnych liniach po dwie liczby w ka¿dym wierszu.

Output

W ka¿dej linii jedna liczba - wynik dzia³ania funkcji nwd

Example

Input:
5
1 4
4 1
12 48
48 100
123456 653421

Output:
1
1
12
4
3
*/
