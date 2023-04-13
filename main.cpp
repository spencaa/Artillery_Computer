#include <string>
#include "Classes and Headers/artilleryFunctions.h"

using namespace std;

int main() {
    string line_;
    int menu_choice = 0;
    double distance, range, elevation, timeOfFire;
    string range_input;

    // Opens the artillery weapon selection menu
    openArtilleryMenu(menu_choice);

    // Closes the program upon selecting option 3
    if (menu_choice == 3)
        return 0;

    //  Need to add weather before this for better calculations
    while (menu_choice != 3) {
        requestDistance(distance, range_input, menu_choice);
    //  M252/Podnos Calculations
        if (menu_choice == 1) {
    //      Podnos charge 0
            if (distance <= 500)
                charge0Open(distance, range, elevation, timeOfFire, line_);
    //      Podnos charge 1
            else if (distance > 500 && distance <= 2000)
                charge1Open(distance, range, elevation, timeOfFire, line_);
    //      Podnos charge 2
            else if (distance > 2000 && distance <= 4050)
                charge2Open(distance, range, elevation, timeOfFire, line_);
        }
        if (menu_choice == 2) {
    //      M119A Charge 0
            if (distance <= 2350)
                m119charge0Open(distance, range, elevation, timeOfFire, line_);
    //      M119A Charge 1
            else if (distance > 2350 && distance <= 6000)
                m119charge1Open(distance, range, elevation, timeOfFire, line_);
    //      M119A Charge 2
            else if (distance > 6000 && distance <= 15400)
                m119charge2Open(distance, range, elevation, timeOfFire, line_);
        }
    //      System pause and clear formatting
        cout << endl;
        system("pause");
        system("cls");
    }
    return 0;
}