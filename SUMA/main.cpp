#include <iostream>

using namespace std;

int main()
{
    int a,suma;
    while(cin>>a){

        suma+=a;
        cout<<suma<<endl;
    }
    return 0;
}

/*

Kod zadania: SUMA

Napisz program, który oblicza sumê pojawiaj¹cych siê na wejœciu liczb.
Wejœcie

Na wejœcie programu podana zostanie pewna nieokreœlona, ale niewielka iloœæ ma³ych liczb ca³kowitych (z zakresu -100..100). Poszczególne liczby zostan¹ rozdzielone znakiem nowej linii.
Wyjœcie

Na wyjœciu ma siê pojawiæ ci¹g liczbowy, którego i-ta pozycja jest równa sumie i pierwszych wczytanych z wejœcia liczb. Poszczególne liczby nale¿y rozdzieliæ znakami nowej linii.
Przyk³ad

Wejœcie:
6
8
-3

Wyjœcie:
6
14
11

*/
