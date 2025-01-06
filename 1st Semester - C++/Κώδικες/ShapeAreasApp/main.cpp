/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 9, 2020, 11:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double squareArea(double pleura) {
    return pleura*pleura;
    //area=pow(pleura,2); kai meta return area;
}

double rectangleArea(double mikos, double platos) {
    return mikos*platos;
}

double circleArea(double R) {
    if (R > 0) {
        return 2 * 3.14 * R;
    } else {
        return -1;
    }
}

double triangleArea(double B, double H) {
    return B * H;
}

/*
 * 
 */
int main(int argc, char** argv) {

    /* double P=8.25;
    double E;
    E=squareArea(P);
    cout << E; */

    /* double M=4, PL=6;
    double E2;
    E2=rectangleArea(M,PL);
    cout << E2; */

    /* double R=0;
    double E3;
    E3=circleArea(R);
    cout << E3; */

    /* double E4;
    E4 = triangleArea(1, 2);
    cout << E4; */

    return 0;
}

