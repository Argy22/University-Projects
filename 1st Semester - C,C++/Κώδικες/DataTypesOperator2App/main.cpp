/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on November 11, 2020, 11:25 AM
 */


#include <cstdlib>
#include <iostream>
#include <bitset>
using namespace std;


void incOps(){
    int i=0, j=1;
    i+=5;              // 0+5=5 
    cout << i << endl; //5
    i+=j+2;            //5+1+2
    cout << i << endl; //8
    i-=2;              //8-2=6
    cout << i << endl; //6
    i*=2;              //6*2=12
    cout << i << endl; //12
    i/=2;              //12/2=6
    cout << i << endl; //6
}


void notOp(){
    bool a=false;
    cout << !a << endl; //not a = not false = not 0 = 1
}


void logAnd(){
    int i=5;
    bool a=true, b=i>2;
    cout << (a&&b) << endl;
    cout << (i++ >1 and i++ >5);
    cout << i << endl; 
}


void logOr(){
    int i=5, j=9;
    cout << (i++ >4 || j++ >6) << endl;
    cout << i << " " << j << endl;   
}


void operatorPrecedence(){
    int myNumber=10*30+20-5*5;
    cout << "myNumber is: " << myNumber;
}


void sizeOfOperator(){
    cout << "Size of bool: " << sizeof(bool) << endl; //1
    cout << "Size of char: " << sizeof(char) << endl; //1
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl; //2
    cout << "Size of short int: " << sizeof(short) << endl; //2
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl; //4
    cout << "Size of long int: " << sizeof(long) << endl; //4
    cout << "Size of int: " << sizeof(int) << endl; //4
    cout << "Size of unsigned long long: " << sizeof(unsigned long long ) << endl; //8
    cout << "Size of long long: " << sizeof(long long) << endl; //8
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl; //4
    cout << "Size of float: " << sizeof(float) << endl; //4
    cout << "Size of double: " << sizeof(double) << endl; //8
    double d=0.0;
    cout << sizeof(double) << " " << sizeof(d) << endl; //8 8 
}

void bitwiseOperators(){
    
    cout << "Enter a number (0-225): ";
    unsigned short inputNum=0;
    cin >> inputNum; //181
    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;
    
    bitset<8> bitwiseNOT=(~inputNum);
    cout << "Logical NOT ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;
    
    cout << "Logical AND, & with 00001111" << endl;
    bitset<8> bitwiseAND=(0x0F & inputNum);
    cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;
    
    cout << "Logical OR,| with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
    
    cout << "Logical XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;
   
    cout << "Bitwise left shift operator, 2 bits" << endl;
    bitset<8> bitwiseLeftShiftOp = (inputNum<<2);
    cout << inputBits << " << 2 = " <<bitwiseLeftShiftOp << endl;
    
    cout << "Bitwise right shift operator, 2 bits" << endl;
    bitset<8> bitwiseRightShiftOp = (inputNum>>2);
    cout << inputBits << " >> 2 = " <<bitwiseRightShiftOp << endl;   
}

void xOr(){
    int i=-1, j=2;
    bool result=(i>=1)^(j>=2);
    cout << result << endl;
    
    
    int k=2, m=-1;
    bool result1=(k>=1)^(m>=2);
    cout << ((k>=1)^(m>=2)) << endl; //1
}


/*
 * 
 */


int main(int argc, char** argv) {
    //incOps();
    //notOp();
    //logAnd();
    //logOr();
    //operatorPrecedence();
    //sizeOfOperator();
    //bitwiseOperators();
    //xOr();
    return 0;
}

