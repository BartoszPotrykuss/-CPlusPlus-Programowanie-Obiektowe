#include <iostream>

using namespace std;

class Uczen
{
    static string klasa;
    static string zawod;

    public:
    string imie;
    string nazwisko;

    void wyswietlDane();

    static void setKlasa(string);
    static string getKlasa();
    static void setZawod(string);
    static string getZawod();
};
    string Uczen::klasa = "3fT";
    string Uczen::zawod = "Programista";

    void Uczen::wyswietlDane()
    {
        cout << "Dane ucznia:" << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << klasa << endl;
        cout << "Zawod: " << zawod << endl;
    }

    void Uczen::setKlasa(string pKlasa)
    {
        klasa = pKlasa;
    }
    string Uczen::getKlasa()
    {
        return klasa;
    }
    void Uczen::setZawod(string pZawod)
    {
        zawod = pZawod;
    }
    string Uczen::getZawod()
    {
        return zawod;
    }
int main()
{
    Uczen u1;
    u1.imie = "Jan";
    u1.nazwisko = "Nowak";
    u1.wyswietlDane();

    cout << "" << endl;
    cout << "Zmienione dane: " << endl;
    Uczen::setKlasa("2b");
    Uczen::setZawod("elektronik");
    cout << "Klasa: " << Uczen::getKlasa() << endl;
    cout << "Zawod: " << Uczen::getZawod() << endl;
    cout << "" << endl;
    //Uczen::klasa = "4a";
    //Uczen::zawod = "informatyk";

    Uczen u2;
    u2.imie = "Piotr";
    u2.nazwisko = "Kowalski";
    u2.setKlasa("2a");
    u2.setZawod("elektryk");
    u2.wyswietlDane();



    return 0;
}
