/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 9, 2020, 11:37 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//sqrt(144) = 12 

double diakr(double a, double b, double c) {
    double D;
    D = pow(b, 2) - 4 * a * c;
    return D;
}

bool triwnymo(double a, double b, double c, double & x1, double & x2) {
    bool exeiLush = true;

    double diakrinousa = diakr(a, b, c);
    if (diakrinousa < 0) {
        exeiLush = false;
    } else
        if (diakrinousa > 0) {
        x1 = (-b + sqrt(diakrinousa)) / (2 * a);
        x2 = (-b - sqrt(diakrinousa)) / (2 * a);
    } else
        if (diakrinousa == 0) {
        x1 = x2 = (-b) / (2 * a);
    }

    return exeiLush;
}

int main(int argc, char** argv) {

    //double Diakrinousa, Diakrinousa=diakr(a,b,c);
    
    /* cout << diakr(2,5,3) << endl;
    cout << diakr(6,5,2) << endl;
    cout <<diakr(-16,8,-1) << endl; */

    
    /* double A = -16;
    double B = 8;
    double C = -1;
    double R1;
    double R2;
    if (triwnymo(A, B, C, R1, R2) == true) {
        cout << "Diakrinousa= " << diakr(A, B, C) << endl;
        cout << "X1= " << R1 << endl;
        cout << "X2= " << R2 << endl;
    } else {
        cout << "Den yparxei lush :(";
    } */

    
    /* bool again=true;
    char answer;
    do {
        double A;
        cout << "Give A: ";
        cin >> A;       
        double B;
        cout << "Give B: ";
        cin >> B;
        double C;
        cout << "Give C: ";
        cin >> C;
        double R1;
        double R2;
        if (triwnymo(A, B, C, R1, R2) == true) {
            cout << "Diakrinousa= " << diakr(A, B, C) << endl;
            cout << "X1= " << R1 << endl;
            cout << "X2= " << R2 << endl;
        } else {
            cout << "Diakrinousa= " << diakr(A, B, C) << endl;
            cout << "Den yparxei lush :( " << endl;
        }
        cout << "Thelete na epilisete nea eksiswsh? Y/N " << endl;
        cin >> answer;
        if (answer == 'N'){
            again=false;
        }
    } while (again==true); */
   
    return 0;
}








