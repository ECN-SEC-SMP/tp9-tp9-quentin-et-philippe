#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main () {

    /* 1) */ 
    vector<int> tab;   

    /* 2) */ 
    tab.reserve(3); // Change la capacite
    int tailleVector = tab.size();

    /* 3) */ 
    for (int i = 0; i <= 2; i++ ) {
        tab.push_back(-i);
    }

    /* 4) */

    int varCourante;


    //for (int i = 0; i < tailleVector-1; i++) varCourante = tab[i]; //iterateur simple

    //for (int& current : tab) varCourante = tab[current]; //For each

    for (vector<int>::iterator i = tab.begin(); i < tab.end(); i++) {
        varCourante = *i; //iterateur de la stl
        cout << varCourante << endl;
    }

    /* 5) */

    tab.push_back(10);

    (tailleVector - tab.size() > 0) ? cout << "Taille augmentee\n" :  cout << "Taille pas augmentee\n";

    /* 6) */

    vector<int> newVector;

    copy(tab.begin(), tab.end(), newVector.begin());

    for (vector<int>::iterator i = newVector.begin(); i < newVector.end()-1; i++) {
        varCourante = *i; //iterateur de la stl
        cout << varCourante << endl;
    }

    return 0;
}
