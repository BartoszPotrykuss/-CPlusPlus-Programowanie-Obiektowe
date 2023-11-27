#include <iostream>

using namespace std;

struct Data{
    int dd, mm, rr;
};

class Pracownik {

public:
    static string stanowisko;
    string imie;
    string nazwisko;
    Data dataUrodzenia{};


    void pobierzDane()
    {
        cout << "Podaj imie" << endl;
        cin >> imie;
        cout << "Podaj nazwisko" << endl;
        cin >> nazwisko;
        cout << "Podaj dzien urodzenia" << endl;
        cin >> dataUrodzenia.dd;
        cout << "Podaj miesiac urodzenia" << endl;
        cin >> dataUrodzenia.mm;
        cout << "Podaj rok urodzenia" << endl;
        cin >> dataUrodzenia.rr;
    }

    void wyswietlDane() {
        cout << "Dane pracownika" << endl;
        cout << imie << " " << nazwisko << endl;
        cout << "Stanowisko: " << stanowisko << endl;
        cout << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
    }
};

string Pracownik::stanowisko = "Ksiegowy";


int main()
{
    int ile;
    cout << "Dla jakiego stanowiska chcesz wprowadzic pracownikow?" << endl;
    cin >> Pracownik::stanowisko;
    cout << "Ile chcesz wprowadzic pracownikow?" << endl;
    cin >> ile;
    Pracownik *w_tablica = new Pracownik[ile];
    for (int i = 0; i < ile; i++)
    {
        cout << "Pracownik nr " << i+1 << endl;

        Pracownik *w_p1;
        w_p1 = new Pracownik();
        w_p1 -> pobierzDane();

        w_tablica[i] = *w_p1;
    }

    for (int i = 0; i < ile; i++)
    {
        cout << "" << endl;
        cout << "Pracownik nr " << i+1 << endl;
        w_tablica[i].wyswietlDane();
    }

    return 0;
}
