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
Tre��
W ostatnim czasie przedszkole opanowa�a nietypowa epidemia. Nie dotkn�a ona przedszkolak�w, tylko panie opiekuj�ce si� dzie�mi. Po�r�d nielicznych zdrowych pozosta�a, ulubiona przez wszystkie maluchy, pani Agnieszka. Postanowi�a os�odzi� podopiecznym nieobecno�� wychowawczy� i rozda� im troch� cukierk�w. Przedszkolanka wie, �e nast�pnego dnia b�dzie si� zajmowa�a jedn� z dw�ch grup. Zna te� liczb� dzieci w ka�dej z nich. Chce teraz dobra� tak� liczb� s�odyczy, by mo�na ni� by�o obdarowa� wszystkie dzieci, niezale�nie od grupy, kt�r� b�dzie prowadzi�a. Musi przy tym spe�ni� kilka warunk�w. Po pierwsze, ka�dy z przedszkolak�w powinien otrzyma� jednakow� (oczywi�cie niezerow�) liczb� cukierk�w. Po drugie, liczba s�odyczy powinna by� taka, by mo�na by�o rozda� je wszystkie. Po trzecie, poniewa� bud�et przedszkola jest ograniczony, pani Agnieszka musi kupi� minimaln� liczb� cukierk�w spe�niaj�c� dwa wcze�niejsze warunki. Pom� sympatycznej przedszkolance i napisz program, kt�ry obliczy, ile cukierk�w powinna kupi�.


Wej�cie
Dane podawane s� na standardowe wej�cie. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestaw�w danych. Dalej podawane s� zestawy danych zgodnie z poni�szym opisem:

Jeden zestaw danych
W pierwszym i jedynym wierszu zestawu danych znajduj� si� dwie liczby ca�kowite a i b (10<=a,b<=30), oddzielone pojedyncz� spacj�, oznaczaj�ce odpowiednio liczb� przedszkolak�w w grupach, z kt�rych jedna zostanie przydzielona pani Agnieszce.

Wyj�cie
Wyniki programu powinny by� wypisywane na standardowe wyj�cie. W kolejnych wierszach nale�y poda� odpowiedzi obliczone dla kolejnych zestaw�w danych. Wynikiem dla jednego zestawu jest liczba cukierk�w, jak� powinna zakupi� przedszkolanka.


Przyk�ad

dane wej�ciowe:
2
12 15
11 22

wynik:
60
22
*/
