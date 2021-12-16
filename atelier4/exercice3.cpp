#include <iostream>
#include <list>

using namespace std;

int main()
{

    int a;
    char more = 'y' ;

    //Declaration du liste

    list <int> my_list;

    //Remplissage du liste

    cout << "Entrer un entier : " ;

    cin >> a;

    my_list.push_back(a);

    do
    {

        cout << "Entrer un entier : " ;

        cin >> a;

        my_list.push_back(a);

        cout << "Continue(y/n): " ;

        cin >> more;

    }
    while(more!='n');

    //Tri des éléments de la liste

    my_list.sort();

    //Affichage des éléments de la liste

    list <int> :: iterator it;

    cout << "Votre liste ordonnee : "<<endl;

    for(it = my_list.begin(); it != my_list.end(); ++it)
    {
        cout << '\t' << *it;
    }


    return 0;
}
