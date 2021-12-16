#include <iostream>
#include <list>
#include <iterator>


using namespace std;



int main()
{

    list <string> Plist;

    Plist.push_back("Zineb Lobna 17 ANS");
    Plist.push_back("Zineb Mahmud 20 ANS");
    Plist.push_back("Daba Hamza 27 ANS");
    Plist.push_back("Ahmed Asalim 21 ANS");
    Plist.push_back("Saida Ismail 24 ANS");
    Plist.push_back("Omaima Ilham 22 ANS");
    Plist.push_back("Ayoub Omar 20 ANS");


    // Tri des elements

    Plist.sort();

    //affichage

    list <string> :: iterator it;


    cout << "Votre liste ordonnee : "<<endl;

    for(it = Plist.begin(); it != Plist.end(); ++it)
    {
        cout << '\t' << *it;

        cout << '\n';

    }

    return 0;
}
