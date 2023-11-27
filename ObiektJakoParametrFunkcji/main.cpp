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
// prototypy funkcji zewnêtrznych
Pracownik *pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);
main(){


//utworzenie obiektu pracownik jako instancji klasy Pracownik
Pracownik w_pracownik = new Pracownik();
//pobranie danych pracownika z klawiatury
w_pracownik = pobierzDane(w_pracownik);
// wyœwietlenie danych pracownika na ekranie
wyswietlDane(w_pracownik);
//usuniêcie obiektu wskazywanego przez wskaŸnik w_pracownik
delete w_pracownik;
return 0;
}
// definicje funkcji zewnêtrznych
// funkcja pobierzDane() przekazuje do swojego otoczenia wskaŸnik do obiektu klasy Pracownik
// przekazanie realizowane jest zarówno za poœrednictwem argumentu tej funkcji, jak i przez
// wartoœæ, któr¹ funkcja zwraca
Pracownik* pobierzDane(Pracownik *w_ p){
cout << "Imie: " << endl;
cin >> w_p -> imie ;
cout << "Nazwisko: " << endl;
cin >> w_p -> nazwisko;
return w_p;
}
// funkcja wyswietlDane() komunikuje siê ze swoim otoczeniem wy³¹cznie za pomoc¹ parametru.
// Jest nim wskaŸnik do obiektu klasy Pracownik, traktowany jako sta³a const.
void wyswietlDane(const Pracownik *w_p){
cout << "Imie: " << w_p -> imie << endl;
cout << "Nazwisko: " << w_p -> nazwisko << endl;
}
