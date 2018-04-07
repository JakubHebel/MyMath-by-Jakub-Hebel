#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "myVoids.h"

using namespace std;

int main()
{
    beginning:
    int digit;
    string choice;
    cout << "My Mathematics by Jakub Hebel" << endl;
    cout << "-----------------------" << endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------------" << endl;
    cout << "WITAJ W PROGRAMIE WYKONUJACYM WYBRANE OBLICZENIA MATEMATYCZNE!" << endl;
    cout << "WYBIERZ NR OPERACJI: " << endl;
    cout << "1. Pole trojkata z dlugosci jego bokow (wzor Herona)" << endl;
    cout << "2. Podniesienie wybranej liczby do wybranej potegi" << endl;
    cout << "3. Silnia z liczby naturalnej" << endl;
    cout << "4. Czy 1 liczba jest podzielna przez druga" << endl;
    cout << "5. NWD (Algorytm Euklidesa)" << endl;
    cout << "6*. Kalkulator BMI :)" << endl;
    cout << "7. Wyjscie z programu" << endl;

    cin >> digit;

    if (digit == 1)
        firstVoid();
    else if (digit == 2)
        secondVoid();
    else if (digit == 3)
        thirdVoid();
    else if (digit == 4)
        fourthVoid();
    else if (digit == 5)
        fifthVoid();
    else if (digit == 6)
        sixthVoid();
    else if (digit == 7)
    {
        cout << endl << "DO WIDZENIA!" << endl;
        Sleep(1000);
        return 0;
    }
    else
    {
        system("cls");
        cout << "NIEPOPRAWNY WYBOR!" << endl << endl;
        Sleep(1000);
        system("cls");
        goto beginning;
    }

    cout << endl << "Czy chcesz wrocic do menu glownego?" << endl;
    cout << "Wcisnij t jesli tak, inny klawisz jesli nie" << endl;
    cin >> choice;
    if (choice == "t")
    {
        system("cls");
        goto beginning;
    }
    else
    {
        cout << endl << "DO WIDZENIA!" << endl;
        Sleep(1000);
        return 0;
    }

    return 0;
}
