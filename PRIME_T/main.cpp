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

SprawdŸ, które spoœród danych liczb s¹ liczbami pierwszymi
Input

n - liczba testów n<100000, w kolejnych liniach n liczb z przedzia³u [1..10000]
Output

Dla ka¿dej liczby s³owo TAK, jeœli liczba ta jest pierwsza, s³owo: NIE, w przeciwnym wypadku.
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
Wczytaj liczbê n.
Krok 2:
Zmiennej p przypisz wartoœæ 2.
Krok 3:
Jeœli p jest równe n, wtedy wypisz komunikat „tak” i zakoñcz dzia³anie algorytmu. W przeciwnym razie przejdŸ do nastêpnego kroku.
Krok 4:
Jeœli n mod p jest równe 0, wtedy wypisz komunikat „nie” i zakoñcz dzia³anie algorytmu.
Krok 5:
Powiêksz wartoœæ zmiennej p o 1 i przejdŸ do kroku 3.

Je¿eli masz jeszcze problem z schematem blokowym to napisz.

*/
