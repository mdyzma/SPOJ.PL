#include <iostream>

using namespace std;

int main()
{
    int D;
    cin>>D;
    for (int i=0;i<D;i++)
    {
        cout << "Hello world!" << endl;
    }

    return 0;
}


/*
Treœæ
W ostatnim czasie przedszkole opanowa³a nietypowa epidemia. Nie dotknê³a ona przedszkolaków, tylko panie opiekuj¹ce siê dzieæmi. Poœród nielicznych zdrowych pozosta³a, ulubiona przez wszystkie maluchy, pani Agnieszka. Postanowi³a os³odziæ podopiecznym nieobecnoœæ wychowawczyñ i rozdaæ im trochê cukierków. Przedszkolanka wie, ¿e nastêpnego dnia bêdzie siê zajmowa³a jedn¹ z dwóch grup. Zna te¿ liczbê dzieci w ka¿dej z nich. Chce teraz dobraæ tak¹ liczbê s³odyczy, by mo¿na ni¹ by³o obdarowaæ wszystkie dzieci, niezale¿nie od grupy, któr¹ bêdzie prowadzi³a. Musi przy tym spe³niæ kilka warunków. Po pierwsze, ka¿dy z przedszkolaków powinien otrzymaæ jednakow¹ (oczywiœcie niezerow¹) liczbê cukierków. Po drugie, liczba s³odyczy powinna byæ taka, by mo¿na by³o rozdaæ je wszystkie. Po trzecie, poniewa¿ bud¿et przedszkola jest ograniczony, pani Agnieszka musi kupiæ minimaln¹ liczbê cukierków spe³niaj¹c¹ dwa wczeœniejsze warunki. Pomó¿ sympatycznej przedszkolance i napisz program, który obliczy, ile cukierków powinna kupiæ.


Wejœcie
Dane podawane s¹ na standardowe wejœcie. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestawów danych. Dalej podawane s¹ zestawy danych zgodnie z poni¿szym opisem:

Jeden zestaw danych
W pierwszym i jedynym wierszu zestawu danych znajduj¹ siê dwie liczby ca³kowite a i b (10<=a,b<=30), oddzielone pojedyncz¹ spacj¹, oznaczaj¹ce odpowiednio liczbê przedszkolaków w grupach, z których jedna zostanie przydzielona pani Agnieszce.

Wyjœcie
Wyniki programu powinny byæ wypisywane na standardowe wyjœcie. W kolejnych wierszach nale¿y podaæ odpowiedzi obliczone dla kolejnych zestawów danych. Wynikiem dla jednego zestawu jest liczba cukierków, jak¹ powinna zakupiæ przedszkolanka.


Przyk³ad

dane wejœciowe:
2
12 15
11 22

wynik:
60
22
*/
