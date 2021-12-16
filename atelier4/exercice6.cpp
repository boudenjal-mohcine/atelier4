#include <iostream>

//Les Problemes a gérée :
// 1 - La division sur 0
// 2 - Respecter les indices du tableau


using namespace std;
class Test
{
public:
    static int tableau[] ;
public :
    static int division(int indice, int diviseur)
    {
        if((diviseur == 0)&&(indice<0 || indice>9))
        {
            throw "On a pas cet indice dans le tableau et la division impossible par 0!";
        }
        if( diviseur == 0)
        {
            throw "Division impossible par 0!";
        }
        if(indice<0 || indice>9)
        {
            throw "On a pas cet indice dans le tableau";
        }
        cout << "Le resultat de la division est: "<< endl;
        return tableau[indice]/diviseur;
    }
};


int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
    int x, y;
    bool refaire;

//refaire la devision

    while(!refaire)
    {
        cout << "Entrez l'indice de l'entier a diviser : " << endl;
        cin >> x ;
        cout << "Entrez le diviseur: " << endl;
        cin >> y ;

//Gestion des erreurs

        try
        {
            cout <<Test::division(x,y)<< endl;
            refaire=true;
        }
        catch (const char *err)
        {
            cerr << err <<endl;
            refaire=false;
        }

    }
    return 0;
}
