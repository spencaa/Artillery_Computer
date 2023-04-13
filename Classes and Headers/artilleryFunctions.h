//
// Created by camps on 4/7/2023.
//

#ifndef MORTARCOMPUTER_ARTILLERYFUNCTIONS_H
#define MORTARCOMPUTER_ARTILLERYFUNCTIONS_H
#include "informationIO.h"

using namespace std;

// ********* M252/PODNOS FUNCTIONS *********

// M252 Charge 0 Function
void charge0Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 0;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m252charge0.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}

// M252 Charge 1 Function
void charge1Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 1;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m252charge1.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}

// M252 Charge 2 Function
void charge2Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 2;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m252charge2.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}

// ********* M119A FUNCTIONS *********

// M119A Charge 0 Function
void m119charge0Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 0;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m119charge0.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}

// M119A Charge 1 Function
void m119charge1Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 1;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m119charge1.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}

// M119A Charge 2 Function
void m119charge2Open(double distance, double& range, double& elevation, double& timeOfFire, string& line_) {
    int charge = 2;
    string filename = R"(C:\Users\camps\CLionProjects\mortarComputer\Firing Data\m119charge1.txt)";
    ifstream inputFile(filename);
    scrapeData(range, elevation, timeOfFire, distance, charge, line_, filename);
}
#endif //MORTARCOMPUTER_ARTILLERYFUNCTIONS_H
