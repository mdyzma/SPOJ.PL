#include<iostream>
#include<vector>

using namespace std;


//Rozwiazanie iteracyjne
int nwd(int a, int b){

    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;
}

int main()
{
    int a,b,t;
    vector<int> v1;
    cin >>t;
    for (int x =0;x<t;x++){
    cin>>a>>b;
    v1.push_back(nwd(a,b));
    }
    for (unsigned int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    return 0;
}

/*
//Rozwiazanie rekurencyjne.


int nwd(int a, int b){
    if (a!=b){
    return NWD(a>b?a-b:a,b>a?b-a:b);
    return a;
    }
}

*/

/*
601. NWD
Kod zadania: PP0501A

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
