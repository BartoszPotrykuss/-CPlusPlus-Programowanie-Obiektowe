#include <iostream>

using namespace std;

class Osoba {
public:
    string imie;
    string nazwisko;
    string zamieszkanie;

    Osoba() {
        imie = "";
        nazwisko = "";
        zamieszkanie = "";
    }

    Osoba(string imie, string nazwisko, string zamieszkanie) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->zamieszkanie = zamieszkanie;
    }

    Osoba(const Osoba& osoba) {
        this->imie = osoba.imie;
        this->nazwisko = osoba.nazwisko;
        this->zamieszkanie = osoba.zamieszkanie;
    }

    void WyswietlDane() {
        cout << "Nazywam sie " << imie << " " << nazwisko << ". Mieszkam w " << zamieszkanie << "." << endl;
    }
};

int main()
{
    Osoba o1 = Osoba("Piotr", "Kowalski", "Wejherowo");
    Osoba o2= Osoba(o1);
    o2.zamieszkanie = "Gdansk";

    o1.WyswietlDane();
    o2.WyswietlDane();
    return 0;
}
