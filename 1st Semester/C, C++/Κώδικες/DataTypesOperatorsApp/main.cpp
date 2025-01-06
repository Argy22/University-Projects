/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on October 21, 2020, 10:51 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

void dataTypes(){
    int i=9;
    bool b=false; //b=0
    float f=3.1f;
    double d=3.1;
    char c='A';
    cout << c << endl; //A
    if (f==3.1)
        cout << "equality"; //thelei f==3.1f stin sinthiki gia na bgei true
    else
        cout << "not equality"; //not equality
    cout << endl;
    cout << setprecision(6) << f << endl; //f=3.1
    cout << fixed << setprecision(6) << f << endl; //f=3.100000
    cout << defaultfloat << setprecision(6) << f <<endl; //f=3.1
    //b=true
    cout<< i <<" " << b; //9 0
}


void assignment(){
    int i=1, j=2, k;
    cout << (i=j) << endl; //bazei sto i tin timi tou j,cout to 2
    k=i=j=7;
    cout << (k=i=j=7) << endl; //7=7=7=7,cout to 7
    cout << i+j << endl; //14
    cout << i-j << endl; //0
    cout << i*j << endl; //49
    i=3; j=2;
    cout << i/j << endl; //i,j integers, cout to 1
    double d=3.0;
    cout << d/j << endl; //1.5
}


void incrementOps(){
    int i=0;
    cout << i++ << endl; //1 (0+1)  //0
    cout << i << endl; //1
    int j=0;
    cout << ++j << endl; //0 //1
    cout << j << endl; //0  //1
}


void relationalOps(){
    int i=1,j=2;
    cout << (i>j) << endl; //f
    cout << (i<j) << endl; //t
    cout << (i>=j) << endl; //f
    cout << (i<=j) << endl; // t
    cout << (i!=j) << endl; //t
    cout << (i==j) << endl; //f
}


void arithmetic(){
    int j=2,i=3;
    cout << i+j+5 << endl; //10
    int sum=i+j+9;
    cout << "sum:" << sum << endl; // sum:14
    cout << i-j << endl; //1
    cout << i*j << endl; //6
    cout << i+j*2 << endl; //7
    cout << (i+j)*2 << endl; //10
    cout << i/j << endl; //1
    cout << i%j << endl; //1
    double d=3.0,d1=2.0;
    cout << d/d1 << endl; //1.5
    i+=5;
    cout << i << endl; //8
    i=i+5;
    cout << i << endl; //13
    i-=5;
    cout << i << endl; //8
    i*=2;
    cout << i << endl; //16
    i=2*i;
    cout << i << endl; //32
    i/=3;
    cout << i << endl; //10 
}


void auxiliary(){
    int i=3;
    double d=5.2;
    int k=d+i;
    cout << k << endl; //k=int, cout int, diladi 8
    cout << d+i << endl; //8.2
}


void increment(){
    int i=1;
    cout << ++i << endl; //2
    cout << i << endl; //2
}


void charArithmetic(){
    char c='A';
    cout << ++c << endl; //B
}


void comparison(){
    bool b=true;
    int k=5;
    b=k>4;
    cout << b << endl; //b=true, cout to 1
}


void shortCirquitLogicals(){
    int k=5,j=4;
    bool b=(++k>1)&&(++j>1);
    cout << k << " " << j << " " << b << endl; //6,5,1
}

void ternary(){
    int k=9;
    int j=6;
    bool b=true;
    cout << ((k>j)?1:0) << endl; //1
    cout << ((k<j)?1:0) << endl; //0
    cout << b << endl; //1
    b=(k<j)?1:0;
    cout << b << endl; //0
    cout << (k>j+3)?2*j+32/k:0; //0
}

/*
 * 
 */


      
        
int main(int argc, char** argv) {
    //dataTypes();
    //assignment();
    //incrementOps();
    //relationalOps();
    //arithmetic();
    //auxiliary();
    //increment();
    //charArithmetic();
    //comparison();
    //shortCirquitLogicals();
    //ternary();
    return 0;
}

