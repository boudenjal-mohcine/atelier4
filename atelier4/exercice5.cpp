#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <list>


using namespace std;

//fonction de recherche avec 2 parametres :



/*bool recherche(set <int> s,int element ){

    set <int> :: iterator it;

    for(it=s.begin();it!=s.end();it++){

    if(element==*it) return(element==*it);
}
return 0;
}
*/



//fonction de recherche avec 3 parametres :




/*bool recherche(set <int> :: iterator debut,set <int> :: iterator fin,int element){

    for(debut;debut!=fin;debut++){

    if(element==*debut) return(element==*debut);
}
return 0;
}
*/




//Fonction recherche multi-templates :


template<typename IT,typename X> bool recherche(IT debut,IT fin,X element){
for(debut;debut!=fin;debut++){

    if(element==*debut) return(element==*debut);
}
return 0;
}





int main()
{
//Set
set<int> s1;
//Vector
vector<string> v1;
//List
list <int> l1;
//Tableau classique
float t1[8];


//Remplissage du set

for(int i=1;i<=100;i++){
    s1.insert(i);
}

//Remplissage du liste

for (int i = 0; i < 10; ++i)
{
l1.push_back(i * 2);
}

//Remplissage du tableau

for(int i=0;i<8;i++){
    t1[i]=i*1.3;
}



//Remplissage du vector

v1.push_back("linux");
v1.push_back("devweb");
v1.push_back("reseau");
v1.push_back("python");
v1.push_back("java");
v1.push_back("html");



//recherche

cout << "1:True   0:False" <<endl;
cout << "Recherche 20 dans set : " << recherche(s1.begin(),s1.end(),20) << endl;
cout << "Recherche 200 dans set : " << recherche(s1.begin(),s1.end(),200) << endl;
cout << "Recherche java dans vecteur : " << recherche(v1.begin(),v1.end(),"java") << endl;
cout << "Recherche css dans vecteur : " << recherche(v1.begin(),v1.end(),"css") << endl;
cout << "Recherche 0 dans liste : " << recherche(l1.begin(),l1.end(),0) << endl;
cout << "Recherche -22 dans liste : " << recherche(l1.begin(),l1.end(),-22) << endl;
cout << "Recherche 1.6 dans tableau : " << recherche(t1,(t1+8),1.6) << endl;



}
