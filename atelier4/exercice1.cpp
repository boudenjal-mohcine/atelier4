#include <iostream>
#include <cmath>

using namespace std;

// class complexe
class complexe
{
public:
    float re;
    float img;

//constructeur
    complexe(float reel,float imaginaire)
    {
        re=reel;
        img=imaginaire;
    }
//affichage d'un complexe selon les cas (operateur %)
    void display()
    {
        if (re==0)
        {
            if(img==0)
            {
                cout << "0" ;
            }
            else if(img==1)
            {
                cout <<"i";
            }
            else
            {
                cout <<"i"<<img;
            }
        }
        else if(img==0)
        {
            cout <<re;
        }
        else
        {
            if(img==1)
            {
                cout <<re<<"+i";
            }
            else
            {
                cout <<re<<"+"<<img<<"i";
            }
        }
    }
// calcule de module

    void operator ||(complexe z)
    {
        cout << " | ";
        z.display();
        cout << " | = "<<float(sqrt(pow(z.re,2)+pow(z.img,2)))<<endl;
    }
// calcule d'argument
    void argument()
    {
        if(img!=0&&re!=0)
        {
            cout <<"arg(";
            display();
            cout<<")="<<atan(img/re)<<"rad"<<endl;
        }
        else if (img==0&&re==0)
        {
            cout << "le nombre 0 n'a pas d'argument" << endl;
        }
        else
        {
            if(re==0)
            {
                cout <<"arg(";
                display();
                cout<<")="<< "pi/2 rad" << endl;
            }
            else
            {
                cout <<"arg(";
                display();
                cout<<")="<< "0 rad" << endl;
            }
        }
    }
// addition
    void operator + (complexe z)
    {
        complexe result_a(re+z.re,img+z.img);
        cout << endl;
        cout << "(";
        z.display();
        cout <<")+(";
        display();
        cout << ") = ";
        result_a.display();
        cout << endl;
    }

//produit
    void operator * (complexe z)
    {
        complexe result_p(((re*z.re)-(img*z.img)),((re*z.img)+(img*z.re)));
        cout << endl;
        cout << "(";
        z.display();
        cout <<")x(";
        display();
        cout << ") = ";
        result_p.display();
        cout << endl;
    }

};


//menu des opeartions :


void menu()
{
    cout << "=================================== Menu =====================================" << endl;
    cout << "= Voici la liste des operations pour s'appliquer sur les nombres complexes   =" << endl;
    cout << "= 1 - calculer l'argument des nombres complexes                              =" << endl;
    cout << "= 2 - calculer le module des nombres complexes                               =" << endl;
    cout << "= 3 - l'additions des nombres complexes                                      =" << endl;
    cout << "= 4 - le produit des deux nombres                                            =" << endl;
    cout << "= 0 - quittez le programme                                                   =" << endl;
    cout << "==============================================================================" << endl;



    cout << "l'operation choisit : " ;



}


int main()
{

//construction des nbr complexes par l'utilisateur :

    int re1,img1,re2,img2,operation ;

    cout << "Entrez la partie reel du 1ere nombre : ";
    cin >> re1;
    cout << "Entrez la partie imaginaire du 1ere nombre : ";
    cin >> img1;
    cout << "Entrez la partie reel du 2eme nombre : ";
    cin >> re2;
    cout << "Entrez la partie imaginaire du 2eme nombre : ";
    cin >> img2;
    complexe z1(re1,img1);
    complexe z2(re2,img2);

// affichage :

    cout << "Z1=";
    z1.display();
    cout << endl;
    cout << "Z2=";
    z2.display();
    cout << endl;

// boucle de refaire les operations :

    do
    {
        menu();
        cin >> operation;
        switch(operation)
        {
        case 1:
            //calcule d'argument
            z1.argument();
            z2.argument();
            break;
        case 2:
            //calcule du module
            z1||z1;
            z2||z2;
            break;

        //calcule d'addition
        case 3:
            z1+z2;
            break;

        //calcule du produit
        case 4:
            z1*z2;
            break;

        case 0:
            cout <<"Au revoir"<<endl;
            break;

        default :
            cout << "Svp respecter le menu" << endl;
            break;
        }
    }
    while(operation!=0);

    return 0;
}
