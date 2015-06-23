#include <iostream>

using namespace std;

int main()
{
    int n1=1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;
    cout<< n1*k1+n2*k2;

    return 0;
}

/*

Kod zadania: POTSAM

Bajtockie Linie Lotnicze wzbogaci³y swoj¹ flotê o nowy model samolotu. W samolocie tym jest n1 rzêdów miejsc siedz¹cych w klasie biznesowej oraz n2 rzêdów w klasie ekonomicznej. W klasie biznesowej ka¿dy rz¹d ma k1 miejsc siedz¹cych, a w klasie ekonomicznej — k2 miejsc.
Zadanie
Napisz program, który:
wczyta informacje na temat dostêpnych miejsc siedz¹cych w samolocie,
wyznaczy sumaryczn¹ liczbê wszystkich miejsc siedz¹cych,
wypisze wynik
Wejœcie

W pierwszym i jedynym wierszu wejœcia znajduj¹ siê cztery liczby naturalne n1, k1, n2, i k2 (1<=n1,k1,n2,k2<=1000), pooddzielane pojedynczymi odstêpami.
Wyjœcie

Pierwszy i jedyny wiersz wyjœcia powinien zawieraæ jedn¹ liczbê ca³kowit¹ - liczbê miejsc siedz¹cych w analizowanym samolocie.
Przyk³ad

Wejœcie
2 5 3 20

Wyjœcie
70
*/
