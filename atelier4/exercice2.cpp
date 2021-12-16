#include <iostream>
#include <map>
#include <string>
#include <sstream>  //utiliser une fonction qui convertie une chaine des caracteres a un nombre

using namespace std;
//une classe date
class date
{
public:
    string chaine;

    //constructeur

    date(string ch)
    {
        chaine=ch;
    }



    void display_form()
    {

        long long int date_numbers;

        //Convertissement du chaine de caractére en entier

        stringstream str(chaine);

        str >> date_numbers;

        //deviser le date nombre au jour,mois,annee,heure et minute

        int day = long(date_numbers/10000000000);
        date_numbers = date_numbers - day*10000000000;

        //verifier le jour

        if(day<1 || day>31)
        {
            cout << "le jour est incorrect" << endl ;

        }
        else
        {

            int month_num = long(date_numbers/100000000);
            date_numbers = date_numbers - month_num*100000000;

            //verifier le mois

            if(month_num<1 || month_num>12)
            {
                cout << "le mois est incorrect" << endl ;

            }
            else
            {

                int year = long(date_numbers/10000);
                date_numbers= date_numbers- year*10000;

                //verifier l'annee

                if(year>9999)
                {
                    cout << "l'année est plus grande" << endl ;

                }
                else
                {


                    int h = long(date_numbers/100);
                    date_numbers = date_numbers - h*100;
                    //verifier l'heure

                    if(h<0 || h>23)
                    {
                        cout << "l'heure est incorrect" << endl ;

                    }
                    else
                    {


                        //verifier les minutes

                        int m = date_numbers;

                        if(m<0 || m>59)
                        {
                            cout << "les minutes est incorrect" << endl ;

                        }
                        else
                        {

                            //Map de chaque numero avec son mois

                            map<int, string> month_nbr;
                            month_nbr.insert(pair<int, string>(1,"Janvier"));
                            month_nbr.insert(pair<int, string>(2,"Fevrier"));
                            month_nbr.insert(pair<int, string>(3,"Mars"));
                            month_nbr.insert(pair<int, string>(4,"Avril"));
                            month_nbr.insert(pair<int, string>(5,"Mai"));
                            month_nbr.insert(pair<int, string>(6,"Juin"));
                            month_nbr.insert(pair<int, string>(7,"Juillet"));
                            month_nbr.insert(pair<int, string>(8,"Aout"));
                            month_nbr.insert(pair<int, string>(9,"Septembre"));
                            month_nbr.insert(pair<int, string>(10,"Octobre"));
                            month_nbr.insert(pair<int, string>(11,"Novembre"));
                            month_nbr.insert(pair<int, string>(12,"Decembre"));

                            // affichage

                            //1er, 2eme , ...

                            if(day==1)
                            {
                                cout << day << "er ";
                            }
                            else
                            {
                                cout << day << "eme ";
                            }

                            //nom du mois + l'annee

                            cout << month_nbr.lower_bound(month_num)->second<< " " << year << " a ";

                            //format d'heure et du minute 09h:00

                            if(h>=0 && h <10)
                            {

                                cout << "0" << h << "h:";
                            }
                            else
                            {
                                cout << h << "h:";
                            }

                            if(m>=0 && m <10)
                            {

                                cout << "0" << m <<endl;
                            }
                            else
                            {
                                cout << m <<endl;
                            }

                        }
                    }
                }
            }
        }
    }
};


int main()
{
//Test de l'exemple du question

    string date1;
    cout << "Entrer date Number : " <<endl;
    cin >> date1;
    date a(date1);
    a.display_form();


    return 0;
}
