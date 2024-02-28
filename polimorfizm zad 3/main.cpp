#include <iostream>
#include <string>

using namespace std;

class Telefon {
public:
    string marka;
    string model;
    int cena;
};

class Stacjonarny : public Telefon {
public:
    string zwrocDane() {
        return "marka: " + marka +
        ", model: " + model +
        ", cena: " + to_string(cena);
    }
};

class Smartfon : public Telefon {
public:
    string zwrocDane() {
        return "marka: " + marka +
        ", model: " + model +
        ", cena: " + to_string(cena);
    }
};

int main()
{
    Stacjonarny *w_stacjonarny = new Stacjonarny[1];
    w_stacjonarny[0].marka = "marka1";
    w_stacjonarny[0].model = "model1";
    w_stacjonarny[0].cena = 200;

    cout << "Dane telefonu stacjonarnego: " << w_stacjonarny[0].zwrocDane() << endl;

    Smartfon *w_smartfon = new Smartfon[1];
    w_smartfon[0].marka = "marka2";
    w_smartfon[0].model = "model2";
    w_smartfon[0].cena = 500;

    cout << "Dane smartfona: " << w_smartfon[0].zwrocDane() << endl;
    return 0;
}
