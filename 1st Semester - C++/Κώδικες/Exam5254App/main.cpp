/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on January 13, 2021, 10:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

void sequenceUp() {
    double y;
    for (double x = 2; x <= 14; x = x + 2) {
        y = pow(x, 1.0 / 2);
        cout << y << ", ";
    }
    cout << endl;
}

void sequenceDown() {
    double y;
    for (double x = 14; x >= 2; x = x - 2) {
        y = pow(x, 1.0 / 2);
        cout << y << ", ";
    }
    cout << endl;
}

void func2(int times) {
    if (times <= 0) {
        cout << "Invalid Parameter times";
    } else {
        for (int x = 0; x < times; x++) {
            sequenceDown();
        }
    }
    cout << endl;
}

void func2b(bool isSequenceDown, int times) {
    if (times <= 0) {
        cout << "Invalid Parameter times";
    } else {
        if (isSequenceDown == true) {
            for (int x = 0; x < times; x++) {
                sequenceDown();
            }
        } else {
            for (int x = 0; x < times; x++) {
                sequenceUp();
            }
        }
    }
    cout << endl;
}

double func3(double t[], int size, double &result){
    int z=1, sum=0;
    double result1;
    for (int x=0; x<size; x++){
        z=z*t[x];
        sum=sum+t[x];
    }
    result1=pow(z, 1.0 / 2);
    result=pow(sum, 1.0 / 2);
    &result;
    return result1;
}

double func3b(int N){
    double *t[N];
}

/*
 * 
 */
int main(int argc, char** argv) {
    //1a.
    sequenceUp();
    
    //1b.
    sequenceDown();
    
    //2a.
    func2(-1);
    func2(2);
    
    //2b.
    func2b(true, -5);
    func2b(false, 2);
    
    //3a.
    double result;
    double table[5]={1,2,3,4,5};
    double Apotelesma=func3(table,5,result);
    cout << result << endl;
    cout << Apotelesma << endl; 
    
    //3b.
   
    return 0;
}

