#include <iostream>
#include <string>

using namespace std;

class Smartfon {
public:
    string marka;
    string model;
    int rok_produkcji;
    int cena;
    string system_operacyjny;
    int przekatna_wyswietlacza;

    void wprowadzDane(string marka, string model, int rok_produkcji, int cena, string system_operacyjny, int przekatna_wyswietlacza) {
        this->marka = marka;
        this->model = model;
        this->rok_produkcji = rok_produkcji;
        this->cena = cena;
        this->system_operacyjny = system_operacyjny;
        this->przekatna_wyswietlacza =przekatna_wyswietlacza;
    }

    void wprowadzDane(string marka, string model) {
        this->marka = marka;
        this->model = model;
    }

    string zwrocDane() {
        return "marka: " + marka
        + ", model: " + model
        + ", rok produkcji: " + to_string(rok_produkcji)
        + ", cena: " + to_string(cena)
        + ", system operacjny: " + system_operacyjny
        + ", przekatna wyswietlacza: " + to_string(przekatna_wyswietlacza);
    }

    string zwrocDane(string marka, string model) {
        return "marka: " + marka
        + ", model: " + model;
    }
};

int main()
{
    string marka;
    string model;
    int rok_produkcji;
    int cena;
    string system_operacyjny;
    int przekatna_wyswietlacza;

        cout << "Wprowadz marke: " << endl;
        cin >> marka;

        cout << "Wprowadz model: " << endl;
        cin >> model;

        cout << "Wprowadz rok produkcji: " << endl;
        cin >> rok_produkcji;

        cout << "Wprowadz cene: " << endl;
        cin >> cena;

        cout << "Wprowadz system operacyjny: " << endl;
        cin >> system_operacyjny;

        cout << "Wprowadz przekatna wyswietlacza: " << endl;
        cin >> przekatna_wyswietlacza;

        Smartfon s1 = Smartfon();
        s1.wprowadzDane(marka, model, rok_produkcji, cena, system_operacyjny, przekatna_wyswietlacza);
        cout << "Dane smartfona:" << s1.zwrocDane() << endl;


        Smartfon s2 = Smartfon();
        cout << "Wprowadz marke: " << endl;
        cin >> marka;

        cout << "Wprowadz model: " << endl;
        cin >> model;
        s1.wprowadzDane(marka, model);
        cout << "Nowe dane smartfona" << s1.zwrocDane(marka, model);
    return 0;
}
