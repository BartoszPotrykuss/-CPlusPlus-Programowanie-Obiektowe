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
// prototypy funkcji zewn�trznych
Pracownik *pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);
main(){


//utworzenie obiektu pracownik jako instancji klasy Pracownik
Pracownik w_pracownik = new Pracownik();
//pobranie danych pracownika z klawiatury
w_pracownik = pobierzDane(w_pracownik);
// wy�wietlenie danych pracownika na ekranie
wyswietlDane(w_pracownik);
//usuni�cie obiektu wskazywanego przez wska�nik w_pracownik
delete w_pracownik;
return 0;
}
// definicje funkcji zewn�trznych
// funkcja pobierzDane() przekazuje do swojego otoczenia wska�nik do obiektu klasy Pracownik
// przekazanie realizowane jest zar�wno za po�rednictwem argumentu tej funkcji, jak i przez
// warto��, kt�r� funkcja zwraca
Pracownik* pobierzDane(Pracownik *w_ p){
cout << "Imie: " << endl;
cin >> w_p -> imie ;
cout << "Nazwisko: " << endl;
cin >> w_p -> nazwisko;
return w_p;
}
// funkcja wyswietlDane() komunikuje si� ze swoim otoczeniem wy��cznie za pomoc� parametru.
// Jest nim wska�nik do obiektu klasy Pracownik, traktowany jako sta�a const.
void wyswietlDane(const Pracownik *w_p){
cout << "Imie: " << w_p -> imie << endl;
cout << "Nazwisko: " << w_p -> nazwisko << endl;
}
