#include <iostream>

using namespace std;

class Osoba {
private:
    string imie, nazwisko;

public:
    friend class Pracownik;
    friend class Uczen;

};

class Pracownik {
private:
    string stanowisko;

public:
    void setImie(string imie) {
        imie = imie;
    }
    string getImie() {
        return imie;
    }
};

class Uczen {
private:
    string klasa;
};

int main()
{
    Pracownik p1 = Pracownik();
    p1.setImie("Jan");
    p1.getImie();

    return 0;
}
