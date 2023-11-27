#include <iostream>

using namespace std;

struct Data
{
    int dd, mm, rr;
};

class Samochod
{
    public:
        string marka, model, nrRejestracyjny;
        int cena;
        Data dataProdukcji;

        void WyswietlDane()
        {
            cout << "Dane samochodu: " << endl;
            cout << "Marka: " << marka << endl;
            cout << "Model: " << model << endl;
            cout << "Cena: " << cena << endl;
            cout << "Numer rejestracyjny: " << nrRejestracyjny << endl;
            cout << "Data: " << dataProdukcji.dd << "." << dataProdukcji.mm << "." << dataProdukcji.rr << endl;
        }
};

int main()
{
    Samochod *w_samochod;

    w_samochod = new Samochod();

    cout << "Podaj marke: " << endl;
    cin >> w_samochod -> marka;
    cout << "Podaj model: " << endl;
    cin >> w_samochod -> model;
    cout << "Podaj cene: " << endl;
    cin >> w_samochod -> cena;
    cout << "Podaj numer rejestracyjny: " << endl;
    cin >> w_samochod -> nrRejestracyjny;
    cout << "Podaj rok produkcji" << endl;
    cin >> w_samochod -> dataProdukcji.rr;
    cout << "Podaj miesiac produkcji" << endl;
    cin >> w_samochod -> dataProdukcji.mm;
    cout << "Podaj dzien produkcji" << endl;
    cin >> w_samochod -> dataProdukcji.dd;

    w_samochod -> WyswietlDane();
    return 0;
}
