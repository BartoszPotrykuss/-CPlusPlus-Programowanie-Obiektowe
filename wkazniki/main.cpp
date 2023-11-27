#include <iostream>

using namespace std;

class Pracownik{
public:
    string imie, nazwisko;
    void wyswietlDane(){
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
};

void pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);

int main(){
    Pracownik *w_pracownik = new Pracownik[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Pracownik nr: " << i+1 << endl;
        pobierzDane(&w_pracownik[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Pracownik nr " << i+1 << endl;
        w_pracownik[i].wyswietlDane();
    }
    return 0;
}

void pobierzDane(Pracownik *w_p){
    cout << "Imie: " << endl;
    cin >> w_p -> imie ;
    cout << "Nazwisko: " << endl;
    cin >> w_p -> nazwisko;
}

void wyswietlDane(const Pracownik *w_p){
    cout << "Imie: " << w_p -> imie << endl;
    cout << "Nazwisko: " << w_p -> nazwisko << endl;
}
