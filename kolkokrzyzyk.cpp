#include <iostream>
using namespace std;


void drukujPlansze(char plansza[3][3]);
bool wykonajRuch(char plansza[3][3], int wiersz, int kolumna, char gracz);
bool sprawdzCzyWygrales(char plansza[3][3], char gracz);
bool zajetaPlansza(char plansza[3][3]);

int main() {
    char plansza[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char obecnyGracz = 'X';

    cout << "Kolko i krzyzyk" << endl;

    do {
        // Wydrukuj aktualna plansze
        drukujPlansze(plansza);

        int wiersz, kolumna;
        cout << "Gracz " << obecnyGracz << ", podaj swoj ruch (wiersz i kolumna): ";
        cin >> wiersz >> kolumna;

        // Sprawdz czy ruch jest dozwolony
        if (wiersz >= 1 && wiersz <= 3 && kolumna >= 1 && kolumna <= 3 && plansza[wiersz - 1][kolumna - 1] == ' ') {
            // Zrob ruch
            plansza[wiersz - 1][kolumna - 1] = obecnyGracz;

            // Sprawdz czy ktos wygral
            if (sprawdzCzyWygrales(plansza, obecnyGracz)) {
                drukujPlansze(plansza);
                cout << "Gracz " << obecnyGracz << " wygral." << endl;
                break;
            }

            // Sprawdz czy jest remis
            if (zajetaPlansza(plansza)) {
                drukujPlansze(plansza);
                cout << "Remis" << endl;
                break;
            }

            // Zmiana gracza
            obecnyGracz = (obecnyGracz == 'X') ? 'Y' : 'X';
        } else {
            cout << "Niedozwolony ruch." << endl;
        }

    } while (true);

    return 0;
}

// Funkcja drukujaca plansze
void drukujPlansze(char plansza[3][3]) {
    system("clear"); // Czysci konsole po ruchu
    cout << " 1   2   3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << plansza[i][j];
            if (j <= 2) {
                cout << " |";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << " ----------" << endl;
        }
    }
    cout << endl;
}

// Funkcja ktora sprawdza czy ktorys z graczy wygral
bool sprawdzCzyWygrales(char plansza[3][3], char gracz) {
    // Sprawdza wiersze i kolumny
    for (int i = 0; i < 3; ++i) {
        if ((plansza[i][0] == gracz && plansza[i][1] == gracz && plansza[i][2] == gracz) ||
            (plansza[0][i] == gracz && plansza[1][i] == gracz && plansza[2][i] == gracz)) {
            return true;
        }
    }
    // To z kolei sprawdza po ukosie
    if ((plansza[0][0] == gracz && plansza[1][1] == gracz && plansza[2][2] == gracz) ||
        (plansza[0][2] == gracz && plansza[1][1] == gracz && plansza[2][0] == gracz)) {
        return true;
    }
    return false;
}

// Sprawdza czy sa jakies wolne miejsca, jak nie to remis
bool zajetaPlansza(char plansza[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (plansza[i][j] == ' ') {
                return false; // plansza nie jest pelna
            }
        }
    }
    return true; // plansza jest pelna
}
