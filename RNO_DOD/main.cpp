#include <iostream>
#include<vector>
#include<string>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
    short t=0;
    cin>>t;

    for (int i=0;i<t;i++)
    {
        int iloscL;
        cin>>iloscL;
        for  (int i=0;i<iloscL;i++)
        {
            string input;

            while (getline(cin,input,' '))
            {
                vector < string > liczby;
                int num[256];
                liczby.push_back(input);
                liczby.pop_back();
                num = atoi(liczby.c_str());
            }
        }
    }

    return 0;
}

/*
Twoim zadaniem jest dodaæ wszystkie liczby ca³kowite podane na wejœciu.

Wejœcie

W pierwszym wierszu znajduje siê liczba t testów (0 < t < 100) Ka¿dy test opisany jest w nastêpuj¹cy sposób. W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania. Nastêpnie podanych jest n liczb pooddzielanych spacj¹.

Przyk³ad

Input:
2
5
1 2 3 4 5
2
-100 100

Output:
15
0

*/
