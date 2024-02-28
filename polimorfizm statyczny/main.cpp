#include <iostream>
#include <string>

using namespace std;

class Uczen {
public:
    string imie;
    string nazwisko;
    int nr;
    string klasa;
    int grupa;

    string zwrocDane() {
        return  imie + " " + nazwisko + "  numer: " + to_string(nr) + ", klasa: " + klasa + ", grupa: " + to_string(grupa);
    }

    string zwrocDane(string imie, string nazwisko) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        return imie + " " + nazwisko;
    }
};

int main()
{
    Uczen u1 = Uczen();
    u1.imie = "Jan";
    u1.nazwisko = "Kowalski";
    u1.nr = 11;
    u1.klasa = "3ft";
    u1.grupa = 1;
    cout << "Dane ucznia:" << u1.zwrocDane() << endl;

    cout << "Nowe dane ucznia: " << u1.zwrocDane("Piotr", "Nowak") << endl;


    return 0;
}
