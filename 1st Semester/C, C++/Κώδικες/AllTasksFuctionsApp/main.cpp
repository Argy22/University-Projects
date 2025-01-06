/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on October 14, 2020, 12:04 PM
 */

#include <iostream>

using namespace std;

void erotima1 () {
    
    cout << "Hello World 1";
    cout << endl;
    cout << "Hello World 1\tHello World 2\tHello World 3" << endl;
    
}


void erotima2 (){
    cout << "Ιωάννης Αργυρόπουλος\n\n";
}


void erotima3 () {
 cout << "Argyropoulos Ioannis\n" << endl;
 cout << "Kountouriotou 50\n\n";
}


void erotima4 () {
     //Οριζόντια εμφάνιση 5 αριθμών
    cout << "1 2 3 4 5" << endl;
    
    
    //Κάθετη εμφάνιση 5 αριθμών
    cout << "1\n2\n3\n4\n5\n" << endl;
}


void erotima5 () {
    cout <<"      *" << endl;
    cout <<"     ***" << endl;
    cout <<"    *****" <<endl;
    cout <<"   ********" <<endl;
    cout <<"  **********" <<endl; 
    cout <<"     ***" <<endl;
    cout <<"     ***" <<endl;
    cout <<"     ***" <<endl;
}


void erotima6 () {
    
    cout <<"     ***" <<endl;
    cout <<"     ***" <<endl;
    cout <<"     ***" <<endl;
    cout <<"  *********" <<endl;
    cout <<"   *******" <<endl;
    cout <<"    *****" <<endl;
    cout <<"     ***" <<endl;
    cout <<"      *" <<endl;
}
    
    
    
int main(int argc, char** argv) {
    
    cout << "ΕΡΩΤΗΜΑ 1\n";
    cout<< "___________" << endl;
    cout <<"\n\n";
    //Κλήση συνάρτησης erotima1
    erotima1();
    cout << endl;
   
    cout << "ΕΡΩΤΗΜΑ 2\n";
    cout<< "___________" << endl;
    cout <<"\n\n";
    //Κλήση συνάρτησης erotima2
    erotima2();
    cout << endl;
   
    cout << "ΕΡΩΤΗΜΑ 3\n";
    cout<< "___________" << endl;
    cout <<"\n\n";
    //Κλήση συνάρτησης erotima3
    erotima3();
    cout << endl;
    
    cout << "ΕΡΩΤΗΜΑ 4\n";
    cout<< "___________" << endl;
    cout <<"\n\n";;
    //Κλήση συνάρτησης erotima4
    erotima4();
    cout << endl;
   
    cout << "ΕΡΩΤΗΜΑ 5\n";
    cout<< "___________" << endl;
    cout <<"\n\n";
   //Κλήση συνάρτησης erotima5
    erotima5();
    cout << endl <<endl;
   
    cout << "ΕΡΩΤΗΜΑ 6\n";
    cout<< "___________" << endl;
    cout <<"\n\n";
    //Κλήση συνάρτησης erotima6
    erotima6();
    cout << endl << endl;

    return 0;
}

