#include <iostream>

using namespace std;

class Osoba {
private:
    string imie, nazwisko;

public:
    friend class Pracownik;
    friend class Uczen;

    Osoba(string imie, string nazwisko) {
        this->imie = imie;
        this->nazwisko = nazwisko;
    }

};

class Pracownik {
private:
    string stanowisko;

public:
    Pracownik(string stanowisko) {
        this->stanowisko = stanowisko;
    }

    void wyswietlDane(Osoba& osoba) {
        cout << "Dane pracownika: " << endl <<
        "Imie: " << osoba.imie << endl <<
        "Nazwisko: " << osoba.nazwisko << endl <<
        "Stanowisko: " << stanowisko << endl;
    }
};

class Uczen {
private:
    string klasa;

public:
    Uczen(string klasa) {
        this->klasa = klasa;
    }

    void wyswietlDane(Osoba& osoba) {
        cout << "Dane ucznia: " << endl <<
        "Imie: " << osoba.imie << endl <<
        "Nazwisko: " << osoba.nazwisko << endl <<
        "Klasa: " << klasa << endl;
    }
};

int main()
{
    Osoba pracownik = Osoba("Jan", "Kowalski");
    Pracownik p1 = Pracownik("nauczyciel");
    p1.wyswietlDane(pracownik);
    cout << endl;

    Osoba uczen = Osoba("Piotr", "Nowak");
    Uczen u1 = Uczen("1a");
    u1.wyswietlDane(uczen);





    return 0;
}
