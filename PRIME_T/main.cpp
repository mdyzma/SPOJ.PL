#include <iostream>

using namespace std;

bool jest_pierwsza(int a){
  if(a<2)
    return false;

  for(int i=2;i*i<=a;i++)
    if(a%i==0)
      return false;
  return true;
    }


int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        if (jest_pierwsza(x)){
                cout<<"TAK"<<endl;
        }
        else {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}


/*

Kod zadania: PRIME_T

Sprawd�, kt�re spo�r�d danych liczb s� liczbami pierwszymi
Input

n - liczba test�w n<100000, w kolejnych liniach n liczb z przedzia�u [1..10000]
Output

Dla ka�dej liczby s�owo TAK, je�li liczba ta jest pierwsza, s�owo: NIE, w przeciwnym wypadku.
Example

Input:
3
11
1
4

Output:
TAK
NIE
NIE


Krok 1:
Wczytaj liczb� n.
Krok 2:
Zmiennej p przypisz warto�� 2.
Krok 3:
Je�li p jest r�wne n, wtedy wypisz komunikat �tak� i zako�cz dzia�anie algorytmu. W przeciwnym razie przejd� do nast�pnego kroku.
Krok 4:
Je�li n mod p jest r�wne 0, wtedy wypisz komunikat �nie� i zako�cz dzia�anie algorytmu.
Krok 5:
Powi�ksz warto�� zmiennej p o 1 i przejd� do kroku 3.

Je�eli masz jeszcze problem z schematem blokowym to napisz.

*/
