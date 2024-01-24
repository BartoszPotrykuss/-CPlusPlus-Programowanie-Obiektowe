#include <iostream>

using namespace std;

class Pomieszczenie
{
public:
    int a;
    int b;
    int c;
    int d;
    int h;

    int obwod;
    int pole;


    int ObliczPole();
    int ObliczObwod();

    void WypiszDane() {
        cout << "Obwod: " << obwod << ". Pole: " << pole << endl;
    }

};

class Kwadrat : public Pomieszczenie {

public:

    Kwadrat(int a) {
        this->a = a;
    }

    Kwadrat(const Pomieszczenie& wzorzec) {
        this->a = wzorzec.a;
    }

    int ObliczPole() {
        return pole = a*a;
    }

    int ObliczObwod() {
        return obwod = 2*a + 2*a;
    }
};

class Prostokat : public Pomieszczenie {

public:

    Prostokat(int a, int b) {
        this->a = a;
        this->b = b;
    }

    Prostokat(const Pomieszczenie& wzorzec) {
        this->a = wzorzec.a;
        this->b = wzorzec.b;
    }

    int ObliczPole() {
        return pole = a*b;
    }

    int ObliczObwod() {
        return obwod = 2*a + 2*b;
    }
};

class Rownoleglobok : public Pomieszczenie {

public:

    Rownoleglobok(int a, int b, int h) {
        this->a = a;
        this->b = b;
        this->h = h;
    }

    Rownoleglobok(const Pomieszczenie& wzorzec) {
        this->a = wzorzec.a;
        this->b = wzorzec.b;
        this->h = wzorzec.h;
    }

    int ObliczPole() {
        return pole = a*h;
    }

    int ObliczObwod() {
        return obwod = 2*a + 2*b;
    }
};

class Trapez : public Pomieszczenie {

public:


    Trapez(int a, int b, int h, int c, int d) {
        this->a = a;
        this->b = b;
        this->h = h;
        this->c = c;
        this->d = d;
    }

    Trapez(const Pomieszczenie& wzorzec) {
        this->a = wzorzec.a;
        this->b = wzorzec.b;
        this->h = wzorzec.h;
        this->c = wzorzec.c;
        this->d = wzorzec.d;
    }

    int ObliczPole() {
        return pole = (a+b)*h/2;
    }

    int ObliczObwod() {
        return obwod = a + b + c + d;
    }
};

int main()
{

    cout << "Kwadrat" << endl;
    Kwadrat k1 = Kwadrat(10);
    k1.ObliczPole();
    k1.ObliczObwod();
    k1.WypiszDane();

    cout << "Prostokat" << endl;
    Prostokat p1 = Prostokat(5, 2);
    p1.ObliczPole();
    p1.ObliczObwod();
    p1.WypiszDane();

    cout << "Rownoleglobk" << endl;
    Rownoleglobok r1 = Rownoleglobok(5, 2, 3);
    r1.ObliczPole();
    r1.ObliczObwod();
    r1.WypiszDane();

    cout << "Trapez" << endl;
    Trapez t1 = Trapez(5, 2, 4, 4, 5);
    t1.ObliczPole();
    t1.ObliczObwod();
    t1.WypiszDane();


    cout << "Z konstruktorem kopiujacym: " << endl << endl;

    cout << "Skopiowany Kwadrat: " << endl;
    Kwadrat kk1 = Kwadrat(k1);
    kk1.WypiszDane();

    cout << "Skopiowany Prostokat: " << endl;
    Prostokat kp1 = Prostokat(p1);
    kp1.WypiszDane();

    cout << "Skopiowany Rownoleglobok: " << endl;
    Rownoleglobok kr1 = Rownoleglobok(r1);
    kr1.WypiszDane();

    cout << "Skopiowany Trapez: " << endl;
    Trapez kt1 = Trapez(t1);
    kt1.WypiszDane();
    return 0;
}
