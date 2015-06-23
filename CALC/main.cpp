#include <iostream>

using namespace std;

int dodawanie (int a, int b)
{
    return a+b;
}

int odejmowanie (int a, int b)
{
    return a-b;
}

int mnozenie (int a, int b)
{
    return a*b;
}

int dzielenie (int a, int b)
{
    return a/b;
}

int modulo  (int a, int b)
{
    return a%b;
}

int main()
{
    char coZrobic;
    int a=0,b=0;

    while(cin>>coZrobic>>a>>b){

        switch(coZrobic){
            case '+':
                cout<<dodawanie(a,b)<<endl;
                break;
            case '-':
                cout<<odejmowanie(a,b)<<endl;
                break;
            case '*':
                cout<<mnozenie(a,b)<<endl;
                break;
            case '/':
                cout<<dzielenie(a,b)<<endl;
                break;
            case '%':
                cout<<modulo(a,b)<<endl;
                break;
        }
    }
}


/*
997. Kalkulator

Kod zadania: CALC

Napisz program, który dzia³a jak prosty kalkulator obs³uguj¹cy piêæ operacji: dodawanie, odejmowanie, mno¿enie, dzielenie i obliczanie reszty z dzielenia liczb ca³kowitych.

Wejœcie

Na wejœcie programu podana zostanie pewna nieokreœlona liczba zestawów danych. Zestawy sk³adaj¹ siê z jednoznakowego symbolu operacji do wykonania (+ dodawanie, - odejmowanie, * mno¿enie, / dzielenie ca³kowitoliczbowe, % reszta z dzielenia) oraz nastêpuj¹cych po nim dwóch liczb ca³kowitych. Poszczególne sk³adowe zestawu zostan¹ rozdzielone spacjami, a same zestawy znakiem nowej linii. Liczba testów nie przekracza 100, wynik zawiera siê w typie int32.

Wyjœcie

Na wyjœciu programu ma siê pojawiæ ci¹g liczb bêd¹cych rezultatem wykonania pojawiaj¹cych siê na wejœciu poleceñ. Poszczególne liczby nale¿y rozdzieliæ znakami nowej linii. Uwaga! Mo¿na za³o¿yæ, ¿e dane wejœciowe nie zawieraj¹ polecenia dzielenia przez 0.

Przyk³ad

Wejœcie:
+ 7 9
- 0 4
* 5 6
/ 8 3
% 5 2

Wyjœcie:
16
-4
30
2
1
*/

