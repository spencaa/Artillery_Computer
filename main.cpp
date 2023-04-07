// M777 FUNCTION IS INOP; PROGRAM WILL NOT WORK IF CHOSEN
#include <string>
#include "Headers/m252functions.h"

using namespace std;

int main() {
    string line_;
    int menu_choice = 0;
    double distance, range, elevation, timeOfFire;

    cout << "Select your weapons system:\n1. Mk6/Podnos Mortar\n2. M777 Howitzer [INOP]\n3. Quit\n\n";
    do {
        cin >> menu_choice;
    } while (!(menu_choice == 1 || menu_choice == 3));

    if (menu_choice == 3)
        return 0;

    //  Need to add weather before this for better calculations
    //  Podnos/M252
    while (menu_choice != 3) {
        if (menu_choice == 1) {
            cout << "\nEnter your desired distance in increments of 50 meters (100-4050): ";
            cin >> distance;
    //      Podnos charge 0
            if (distance <= 500) {
                charge0Open(distance, range, elevation, timeOfFire, line_);
            }
    //      Podnos charge 1
            else if (distance > 500 && distance <= 2000) {
                charge1Open(distance, range, elevation, timeOfFire, line_);
            }
    //      Podnos charge 2
            else if (distance > 2000 && distance <= 4050) {
                charge2Open(distance, range, elevation, timeOfFire, line_);
            }
    //      System pause and clear formatting
            cout << endl;
            system("pause");
            system("cls");
        }
    }
    return 0;
}