#include <iostream>


using namespace std;



int main(){
    int t,x,n;
    cin>>t;

    for (int i=0;i<t;i++){
        cin>>n;
        int suma = 0;
        while (n!=0){

            cin>>x;
            suma+=x;
            n--;
        }
        cout<<suma<<endl;
    }
    return 0;
}

    //for (int i = 0; i < wyniki.size(); i++) {
    //    cout << wyniki[i] << endl;
    //}



/*    for (int k=0;k<sizeof(myArray)/sizeof(myArray[1]);k++){
        cout<<myArray[k]<<endl;
    }*/


/*
Twoim zadaniem jesC:\Program Files\Java\jdk1.8.0_40\bint dodaæ wszystkie liczby ca³kowite podane na wejœciu.

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
