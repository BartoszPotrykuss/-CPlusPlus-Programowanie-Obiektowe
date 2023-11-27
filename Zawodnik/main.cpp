//Bartosz Potrykus
#include <iostream>
#include <string>

using namespace std;

class Zawodnik
{
    public:
    static string konkurencja;

    private:
    string imie;
    string nazwisko;
    int numerStartowy;
    int miejsce;

    public:
    Zawodnik()
    {
        imie = "";
        nazwisko = "";
        numerStartowy = 0;
        miejsce = 0;
    }
    Zawodnik(string imie, string nazwisko, int numerStartowy, int miejsce);

    public:
    void wyswietlDane();
    bool czyPodium();

    string getImie();
    void setImie(string);
    string getNazwisko();
    void setNazwisko(string);
    int getNumerStartowy();
    void setNumerStartowy(int);
    int getMiejsce();
    void setMiejsce(int);
};

string Zawodnik::konkurencja = "strzelectwo";

string Zawodnik::getImie()
{
    return imie;
}
void Zawodnik::setImie(string pimie)
{
    imie = pimie;
}
string Zawodnik::getNazwisko()
{
    return nazwisko;
}
void Zawodnik::setNazwisko(string pnazwisko)
{
    nazwisko = pnazwisko;
}
int Zawodnik::getNumerStartowy()
{
    return numerStartowy;
}
void Zawodnik::setNumerStartowy(int pnumerstartowy)
{
    numerStartowy = pnumerstartowy;
}
int Zawodnik::getMiejsce()
{
    return miejsce;
}
void Zawodnik::setMiejsce(int pmiejsce)
{
    miejsce = pmiejsce;
}

Zawodnik::Zawodnik(string pimie, string pnazwisko, int pnumerStartowy, int pmiejsce)
    {
        imie = pimie;
        nazwisko = pnazwisko;
        numerStartowy = pnumerStartowy;
        miejsce = pmiejsce;
    }

    void Zawodnik::wyswietlDane()
    {
        cout << "Dane zawodnika: " << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Numer Startowy: " << numerStartowy << endl;
        cout << "Konkurencja: " << konkurencja << endl;
        cout << "Miejsce: " << miejsce << endl;
    }

    bool Zawodnik::czyPodium()
    {
        if (miejsce < 4 && miejsce > 0)
        {
            return true;
        }
        else return false;
    }
int main()
{
    Zawodnik z1("Jan", "Nowak", 12, 4);
    z1.wyswietlDane();
    cout << "Czy jest podium?" << endl;
    if (z1.czyPodium())
    {
        cout << "Tak" << endl;
    }
    else
    {
        cout << "Nie" << endl;
    }
    cout << " " << endl;
    Zawodnik z2;
    z2.setImie("Piotr");
    z2.setNazwisko("Kowalski");
    z2.setNumerStartowy(54);
    z2.setMiejsce(2);
    Zawodnik::konkurencja = "bieg narciarski";
    z2.wyswietlDane();
    cout << "Czy jest podium?" << endl;
        if (z2.czyPodium())
    {
        cout << "Tak" << endl;
    }
    else
    {
        cout << "Nie" << endl;
    }
    return 0;
}
