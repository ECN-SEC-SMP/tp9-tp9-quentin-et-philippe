#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


class myclass {
    public :
        bool operator() (string i,string j) { return (i[0]<j[0]);}
} myobject;

void affichevector(vector<string> & A){
for (vector<string>::iterator it = A.begin(); it !=A.end() ;++it)
{
    cout<<*it<<endl;
}
}


int main(){
vector<string> chaines;
vector<string> inter;
chaines.push_back("Bonjour");
chaines.push_back("Comment");
chaines.push_back("Allez");
chaines.push_back("Vous");
chaines.push_back("?");

cout<<chaines.size()<<endl;//la taille est le nombre d'élément dans le vecteur 

cout<<chaines.capacity()<<endl; // la difference est que la capacite du vecteur evolue 
//de 8 en 8

for (string &i : chaines)
{
    cout<<i<<endl;
}

inter.push_back("Allez");
inter.push_back("Comment");
inter.push_back("Bonjour");
inter.push_back("Vous");
inter.push_back("?");


chaines.swap(inter);

cout<<"Inversion du 1 et du 3"<<endl;

for (string &i : chaines)
{
    cout<<i<<endl;
}

chaines.emplace(chaines.begin() + 1,"A tous");

cout<<"Ajout de A tous"<<endl;

for (vector<string>::iterator it = chaines.begin(); it !=chaines.end() ;it++)
{
    cout<<*it<<endl;
}

chaines.pop_back();
chaines.emplace_back("???");

cout<<"Remplacement de ? par ???"<<endl;

for (vector<string>::iterator it = chaines.begin(); it !=chaines.end() ;++it)
{
    cout<<*it<<endl;
}

sort(chaines.begin(),chaines.end(),myobject);

cout<<"test tri"<<endl;

for (vector<string>::iterator it = chaines.begin(); it !=chaines.end() ;++it)
{
    cout<<*it<<endl;
}

}