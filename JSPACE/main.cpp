#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;

string delSpaces(string &str)
{
   str.erase(str.begin(), str.end(), ' ', str.end());
   return str;
}

int main() {
string str;
if( !str.empty() )
{
    cin>>str;
    delSpaces(str);
/*    str[0] = toupper( str[0] );
    for( size_t i = 1 ; i < str.length() ; ++i )
        str[0] = toupper( str[0] );*/
}

	return 0;
}

/*
1276. Spacje

Kod zadania: JSPACE

W celu zaoszczêdzenia iloœci znaków w krótkich wiadomoœciach tekstowych (SMS) nie pisze siê spacji, a ka¿dy wyraz rozpoczyna siê wielk¹ liter¹. Twoim zadaniem jest otrzymany tekst przerobiæ zgodnie z powy¿szym trendem.

Input

Na wejœciu znajduje siê dowolny tekst bez polskich znaków.

Output

Tekst wprowadzony z wejœcia, ale bez spacji. Ponadto ka¿dy wyraz poprzedzony na wejœciu spacj¹ zaczyna siê wielk¹ liter¹.

Example

Input:
Dzisiaj jest czwartek,
A jutro bedzie piatek.

Output:
DzisiajJestCzwartek,
AJutroBedziePiatek.
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s("Somewhere down the road");
    istringstream iss(s);

    do
    {
        string sub;
        iss >> sub;
        cout << "Substring: " << sub << endl;
    } while (iss);

}
