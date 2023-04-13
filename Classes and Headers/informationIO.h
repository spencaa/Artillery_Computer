//
// Created by camps on 4/7/2023.
//

#ifndef MORTARCOMPUTER_INFORMATIONIO_H
#define MORTARCOMPUTER_INFORMATIONIO_H
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double const M252_MAX_RANGE = 4050, M119A_MAX_RANGE = 15400;

// Request shot distance function
void requestDistance(double& distance, string range, int menu_choice) {
    if (menu_choice == 1)
        range = "(100-4050)";
    else if (menu_choice == 2)
        range = "(100-15400)";
    cout << "\nEnter your desired distance in increments of 50 meters " << range << ": ";
    cin >> distance;
//  Input validation
    while (remainder(distance, 50) != 0) {
        cout << "Invalid range.\nEnter your desired distance in increments of 50 meters " << range << ": ";
        cin >> distance;
    }
//  M252 out of range
    if (menu_choice == 1) {
        while (distance > M252_MAX_RANGE) {
            cout << "Out of range!\nEnter your desired distance in increments of 50 meters " << range << ": ";
            cin >> distance;
        }
    }
//  M119A out of range
    if (menu_choice == 2) {
        while (distance > M119A_MAX_RANGE) {
            cout << "Out of range!\nEnter your desired distance in increments of 50 meters " << range << ": ";
            cin >> distance;
        }
    }
}

// Request menu choice function
void openArtilleryMenu(int& menu_choice) {
    cout << "Select your weapons system:\n1. Mk6/Podnos Mortar\n2. M119A Howitzer\n3. Quit\n\n";
    do {
        cin >> menu_choice;
    } while (!(menu_choice == 1 || menu_choice == 2 || menu_choice == 3));
    system("cls");
}

// Display information function
void informationDisplay(double elevation, double timeOfFire, int charge) {
    cout << endl << "Charge: " << charge
         << endl << "Elevation: " << elevation << " mils"
         << endl << "Time Until Impact: " << timeOfFire << " seconds" << endl;
}

// Scrape data from sheet function
void scrapeData(double& range, double& elevation, double& timeOfFire, double distance, int charge, string& line_, string filename) {
    ifstream inputFile(filename);
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

#endif //MORTARCOMPUTER_INFORMATIONIO_H
