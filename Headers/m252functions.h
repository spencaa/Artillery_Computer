//
// Created by camps on 4/7/2023.
//

#ifndef MORTARCOMPUTER_M252FUNCTIONS_H
#define MORTARCOMPUTER_M252FUNCTIONS_H
#include <fstream>
#include "informationDisplay.h"

using namespace std;



// M252 Charge 0 Function
void charge0Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 0;
    ifstream inputFile(R"(C:\Users\camps\CLionProjects\mortarComputer\M252Charges\m252charge0.txt)");
    if (inputFile.is_open())
    {
        while (inputFile >> range)
        {
            inputFile >> elevation;
            inputFile >> timeOfFire;
            getline(inputFile, line_);
            if (range == distance) {
                break;
            }
        }
        informationDisplay(elevation, timeOfFire, charge);
    }
    else
        cout << "Loading failed.";
    inputFile.close();
}

// M252 Charge 1 Function
void charge1Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 1;
    ifstream inputFile(R"(C:\Users\camps\CLionProjects\mortarComputer\M252Charges\m252charge1.txt)");
    if (inputFile.is_open())
    {
        while (inputFile >> range)
        {
            inputFile >> elevation;
            inputFile >> timeOfFire;
            getline(inputFile, line_);
            if (range == distance) {
                break;
            }
        }
        informationDisplay(elevation, timeOfFire, charge);
    }
    else
        cout << "Loading failed.";
    inputFile.close();
}

// M252 Charge 2 Function
void charge2Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 2;
    ifstream inputFile(R"(C:\Users\camps\CLionProjects\mortarComputer\M252Charges\m252charge2.txt)");
    if (inputFile.is_open())
    {
        while (inputFile >> range)
        {
            inputFile >> elevation;
            inputFile >> timeOfFire;
            getline(inputFile, line_);
            if (range == distance) {
                break;
            }
        }
        informationDisplay(elevation, timeOfFire, charge);
    }
    else
        cout << "Loading failed.";
    inputFile.close();
}
#endif //MORTARCOMPUTER_M252FUNCTIONS_H
