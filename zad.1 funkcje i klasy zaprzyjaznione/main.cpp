#include <iostream>

using namespace std;

class Prostopadloscian {
private:
    int a, b, c, pole, objetosc, krawedzie;

public:


    void obliczPole() {
        pole = 2*a*b + 2*a*c + 2*b*c;
        cout << "Pole jest rowne: " << pole << endl;
    }

    void obliczObjetosc() {
        objetosc = a*b*c;
        cout << "Objetosc jest rowna: " << objetosc << endl;
    }

    void obliczDlugoscKrawedzi() {
        krawedzie = 4*a + 4*b + 4*c;
        cout << "Dlugosc krawedzi jest rowna: " << krawedzie << endl;
    }

    friend void setAFriendProstopadloscian(Prostopadloscian&, int);
    friend double getAFriendProstopadloscian(Prostopadloscian);

    friend void setBFriendProstopadloscian(Prostopadloscian&, int);
    friend double getBFriendProstopadloscian(Prostopadloscian);

    friend void setCFriendProstopadloscian(Prostopadloscian&, int);
    friend double getCFriendProstopadloscian(Prostopadloscian);
};

void setAFriendProstopadloscian(Prostopadloscian &prostopadloscian, int a){
 prostopadloscian.a = a;
 }
 double getAFriendProstopadloscian(Prostopadloscian prostopadloscian){
    return prostopadloscian.a;
 }

 void setBFriendProstopadloscian(Prostopadloscian &prostopadloscian, int b){
 prostopadloscian.b = b;
 }
 double getBFriendProstopadloscian(Prostopadloscian prostopadloscian){
    return prostopadloscian.b;
 }

 void setCFriendProstopadloscian(Prostopadloscian &prostopadloscian, int c){
 prostopadloscian.c = c;
 }
 double getCFriendProstopadloscian(Prostopadloscian prostopadloscian){
    return prostopadloscian.c;
 }

int main()
{
    int a, b, c;

    Prostopadloscian p1 = Prostopadloscian();
        cout << "Wprowadz bok a:" << endl;
        cin >> a;
        setAFriendProstopadloscian(p1, a);
        cout << "Wprowadz bok b:" << endl;
        cin >> b;
        setBFriendProstopadloscian(p1, b);
        cout << "Wprowadz bok c:" << endl;
        cin >> c;
        setCFriendProstopadloscian(p1, c);

    cout << "Wyniki dla prostopadloscianu o bokach: " <<
        getAFriendProstopadloscian(p1) << ", " <<
        getBFriendProstopadloscian(p1) << ", " <<
        getCFriendProstopadloscian(p1) <<
        endl;
    p1.obliczPole();
    p1.obliczObjetosc();
    p1.obliczDlugoscKrawedzi();
    return 0;
}
