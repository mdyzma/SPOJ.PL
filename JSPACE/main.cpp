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

W celu zaoszcz�dzenia ilo�ci znak�w w kr�tkich wiadomo�ciach tekstowych (SMS) nie pisze si� spacji, a ka�dy wyraz rozpoczyna si� wielk� liter�. Twoim zadaniem jest otrzymany tekst przerobi� zgodnie z powy�szym trendem.

Input

Na wej�ciu znajduje si� dowolny tekst bez polskich znak�w.

Output

Tekst wprowadzony z wej�cia, ale bez spacji. Ponadto ka�dy wyraz poprzedzony na wej�ciu spacj� zaczyna si� wielk� liter�.

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
