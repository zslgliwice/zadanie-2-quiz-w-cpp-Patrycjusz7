#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;
int punkt = 0;

vaid wyswietl()
{
    cout<<"Podaj imie: ";
    cin>>imie;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

    cout<<"3";
    Sleep(1000);
    cout<<"3..2";
    Sleep(1000);
    system("cls");
    cout<<"3..2..1";
    Sleep(1000);
    system("cls");
    cout<<imie<<"witaj w quizie\n";
}


void Pytanie(const string& tresc, const string& odpPopr, const string& opcjaA, const string& opcjaB, const string& opcjaC) {
    cout << tresc << endl;
    cout << "a) " << opcjaA << endl;
    cout << "b) " << opcjaB << endl;
    cout << "c) " << opcjaC << endl;

    cout << "Podaj odpowiedź: ";
    cin >> odp;

    if (odp == odpPopr) {
        cout << "Poprawna odpowiedź!\n";
        pkt++;
    } else {
        cout << "Zła odpowiedź:(\n";
    }
}

int main() {
    wyswietl();

    Pytanie("Pytanie pierwsze: ile kół ma rower?", "a", "2", "100", "4");

    system("cls");

    wyswietl();

    Pytanie("Pytanie drugie: Pumba z filmu Król Lew był?:", "b", "lwem", "guzcem", "malpą");

    system("cls");

    wyswietl();

    Pytanie("Pytanie trzecie: Jaki jest najmniejszy ptak na świecie?:", "c", "sęp", "kon", "koliber pszczol");

    system("cls");

    wyswietl();

    Pytanie("Pytanie czwarte: Jaka jest stolica Portugalii?:", "c", "warszawa", "berlin", "lizbona");

    system("cls");

    cout << "Twoja liczba poprawnych odpowiedzi: " << pkt << "/4\n";

    if (pkt <= 1) {
        cout << "Słabo Ci poszło.\n";
    } else if (pkt >= 2 && pkt <= 3) {
        cout << "Nie jest źle.\n";
    } else if (pkt == 4) {
        cout << "Dobrze Ci poszło!\n";
    }

    return 0;
}
