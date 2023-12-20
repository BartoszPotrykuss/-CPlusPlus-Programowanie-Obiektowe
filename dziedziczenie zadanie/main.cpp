#include <iostream>

using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;

};

class Policjant: public Pracownik
{
public:
    string Stopien;

    void WypiszDane()
    {
        cout << "Imie: " << imie << ", nazwisko: " << nazwisko << ", stopien: " << Stopien << endl;
    }
};

class Naczelnik: public Policjant
{
public:
    string Wydzial;

        void WypiszDane()
    {
        cout << "Imie: " << imie << ", nazwisko: " << nazwisko << ", stopien: " << Stopien << ", wydzial: " << Wydzial << endl;
    }
};

int main()
{
    Policjant *w_policjant;
    w_policjant = new Policjant();
    w_policjant->imie = "Jan";
    w_policjant->nazwisko = "Kowal";
    w_policjant->Stopien = "komisarz";
    w_policjant->WypiszDane();

    Naczelnik *w_naczelnik;;
    w_naczelnik = new Naczelnik();
    w_naczelnik->imie = "Piotr";
    w_naczelnik->nazwisko = "Rutkowski";
    w_naczelnik->Stopien = "inspektor";
    w_naczelnik->Wydzial = "Prewencja";
    w_naczelnik->WypiszDane();
    return 0;
}
