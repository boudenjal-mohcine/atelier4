#include <iostream>
#include <list>
using namespace std;


class repas;
class chat;
class animal;
class entraineur;
class elements;
class chien;
class competition;
class race;

//Class animale

class animal {
protected:
    string nom;
    string genre;
    int age;
public:
    void setN(string nom);
    void setA(int age);
    void setG(string genre);
    string getN();
    int getA();
    string getG();
};

//Class elements

class elements{
    private:
    string nom;
    string type;
    public:
    void setN(string nom){
        this->nom = nom;
    }
    void setT(string type){
        this -> type = type;
    }
    string getN(){
        return this->nom;
    }
    string getT(){
        return this -> type;
    }
};


class race {
protected:
    string specificite;
    israceHybride();
public:
    void setS(string specificite){
        this->specificite = specificite;
    }
    string getS(){
        return this->specificite;
    }
};

// class Entraineur
class entraineur{
    private:
    string nom;
    string description;
    list <chien> c_List;
    public:
    // setters
    void setN(string nom){
        this->nom = nom;
    }
    void setD(string description){
        this->description = description;
    }
    void setc_List(list <chien> chienList){
        this->c_List = chienList;
    }
    // getters
    string getN(){
        return this->nom;
    }
    string getD(){
        return this->description;
    }
    list <chien> getc_List(){
        return this->c_List;
    }
};

class entraineur;
class chien : public animal , public race {
private:
    string taille;
    list <entraineur> e_List;
public:
    void setT(string taille){
        this->taille = taille;
    }
    void sete_List(list <entraineur> entraineurList){
        this->e_List = entraineurList;
    }
    string getT(){
        return this->taille;
    }
    list <entraineur> gete_List(){
        return this->e_List;
    }
    ischass3();
};

class elements;
class repas {
private:
    string nom;
    string description;
    int heure;
public:
    void setN(string nom){
        this->nom = nom;
    }
    void setH(int heure){
        this->heure = heure;
    }
    void setD(string description){
        this->description = description;
    }
    void setE_List(list <elements> elementsList){
        this->E_List = elementsList;
    }
    string getN(){
        return this->nom;
    }
    int getH(){
        return this->heure;
    }
    string getD(){
        return this->description;
    }
    list <elements> getElementsList(){
        return this->elementsList;
    }

};

class chat : public animal {
private:
    string type;
    repas repas1;
public:
    void setT(string type){
        this -> type = type;
    }
    void setRRepas chatRepas){
        this->chatRepas = chatRepas;
    }
    string getT()){
        return this -> type;
    }
    Repas getR(){
        return this->chatRepas;
    }
     sauter();
};



// class Competition
class competition{
    private:
    string date;
    string nom;
    chien chien;
    entraineur entraineur;
    public:
    int ordre;
    void setD(string date){
        this->date = date;
    }
    void setN(string nom){
        this->nom = nom;
    }
    void setC(Chien chien){
        this->chien = chien;
    }
    void setE(entraineur entraineur1){
        this->entraineur = entraineur1;
    }

    string getD(){
        return this->date;
    }
    string getN(){
        return this->nom;
    }
    chien getC(){
        return this->chien;
    }
    entraineur getE(){
        return this->entraineur;
    }
};

int main(){

return 0;
}
