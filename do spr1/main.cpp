#include <iostream>

using namespace std;

class Uczen
{
    static string klasa;

    public:
    string imie;
    string nazwisko;

    void wyswietlDane();

    static void setKlasa(string);
    static string getKlasa();

};
string Uczen::klasa = "3ft";

void Uczen::setKlasa(string pKlasa)
{
    klasa = pKlasa;
}
string Uczen::getKlasa()
{
    return klasa;
}

void Uczen::wyswietlDane()
{
        cout << "Dane ucznia:" << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << Uczen::getKlasa() << endl;
}

int main()
{
    Uczen u1;
    u1.imie = "Adam";
    u1.nazwisko = "Nowak";
    //Uczen::klasa = "4aT";
    Uczen::setKlasa("4aT");
    cout << Uczen::getKlasa() << endl;
    u1.wyswietlDane();
    return 0;
}
