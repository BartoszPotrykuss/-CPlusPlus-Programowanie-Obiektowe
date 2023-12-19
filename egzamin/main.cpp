#include <iostream>

using namespace std;

class Uzytkownik
{
private:
    int Id;
    string Imie;

public:
    static int LiczbaInstancji;

    Uzytkownik()
    {
        this->Id = 0;
        this->Imie = "";
        this->LiczbaInstancji++;
    }

    Uzytkownik(int Id, string Imie)
    {
        this->Id = Id;
        this->Imie = Imie;
        LiczbaInstancji++;
    }

    Uzytkownik(const Uzytkownik& u1)
    {
        this->Id = u1.Id;
        this->Imie = u1.Imie;
        LiczbaInstancji++;
    }

    void WypiszDane(string InneImie)
    {
        if (Imie == "")
            cout << "Nie podano danych" << endl;
        else
            cout << "Czesc " << InneImie << ", nazywam sie " + Imie << endl;
    }
};

int Uzytkownik::LiczbaInstancji = 0;

int main()
{
    Uzytkownik u1;
    u1.WypiszDane("Jan");

    Uzytkownik u2(1, "Piotr");
    u2.WypiszDane("Imie");

    Uzytkownik u3(u2);
    u3.WypiszDane("Imie2");


    return 0;
}
