// Exercice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include<deque>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    std::cout << "entrer la size de deque \n";
    cin >> x;
    deque<string>T(x, "i");
    std::cout << "les elements de la deque \n";
    for (int i = 0; i < T.size(); i++) {

        std::cout << T[i] << "\n";
    }

    list<string>U;

    deque<string>::iterator it1 = T.begin();
    list<string>::iterator it2 = U.begin();

    for (it1; it1 != T.end(); it1++) {
        U.push_back(*it1);
    }

    sort(U.rbegin(), U.rend());

    std::cout << "les elements de la liste \n";
    for (it2 = U.begin(); it2 != U.end(); it2++) {
        
        std::cout << *it2 << "\n";
    }








    


    
}

