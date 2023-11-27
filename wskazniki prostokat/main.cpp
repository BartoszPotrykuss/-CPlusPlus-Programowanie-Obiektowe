#include <iostream>

using namespace std;

class Prostokat
{
    public:
        int a , b, obwod, pole;

    int ObliczObwod()
    {
        obwod = 2 * a + 2 * b;
        return obwod;
    }
    int ObliczPole()
    {
        pole = a * b;
        return pole;
    }
    void WyswietlDane()
    {
        cout << "Obwod tego prostokata jest rowny: " << ObliczObwod() << endl;
        cout << "Pole tego prostokata jest rowne: " << ObliczPole() << endl;
    }
};

int main()
{
    Prostokat *w_prostokat;
    w_prostokat = new Prostokat();
    cout << "Podaj pierwsza dlugosc: " << endl;
    cin >> w_prostokat -> a;
        cout << "Podaj druga dlugosc: " << endl;
    cin >> w_prostokat -> b;
    w_prostokat -> WyswietlDane();
    return 0;
}
