//
// Created by camps on 4/7/2023.
//

#ifndef MORTARCOMPUTER_INFORMATIONDISPLAY_H
#define MORTARCOMPUTER_INFORMATIONDISPLAY_H
#include <iostream>

using namespace std;

// Display information function
void informationDisplay(double elevation, double timeOfFire, int charge) {
    cout << endl << "Charge: " << charge
         << endl << "Elevation: " << elevation << " mils"
         << endl << "Time Until Impact: " << timeOfFire << " seconds" << endl;
}

#endif //MORTARCOMPUTER_INFORMATIONDISPLAY_H
