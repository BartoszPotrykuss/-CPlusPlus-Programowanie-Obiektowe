#include <iostream>

using namespace std;

class Pracownik
{
    public:
    string imie, nazwisko;

    void przedstaw_sie();    //prototyp metody
};

Pracownik:: void przedstaw_sie()
    {
        cout << "Dane pracownika: " << imie + " " + nazwisko <<endl;
    }

int main()
{
    Pracownik p1;
    p1.imie = "Jan";
    p1.nazwisko = "Kowalski";
    p1.przedstaw_sie();
    return 0;
}
