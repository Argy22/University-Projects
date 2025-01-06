/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 2, 2020, 11:03 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void f1() {
    for (int i = 10; i <= 40; i += 3) {
        if (i < 40) {
            cout << i << ",";
        } else {
            cout << i << ".";
        }
    }
    cout << endl;
}

void f1b() {
    int i = 10;
    while (i <= 40) {
        if (i < 40) {
            cout << i << ",";
        } else {
            cout << i << ".";
        }
        i = i + 3;
    }
}

void f1c() {
    int i = 10;
    do {
        if (i < 40) {
            cout << i << ",";
        } else {
            cout << i << ".";
        }
        i = i + 3;
    } while (i <= 40);
}

void f2() {
    bool b = false;
    for (int i = 1; i <= 10; i++) {
        cout << boolalpha << b;
        cout << " ";
        b = !b;
    }
    cout << endl;
}

void f2b() {
    bool b = false;
    int i = 1;
    while (i <= 10) {
        cout << boolalpha << b;
        cout << " ";
        b = !b;
        i++;
    }
    cout << endl;
}

void f2c() {
    bool b = false;
    int i = 1;
    do {
        cout << boolalpha << b;
        cout << " ";
        b = !b;
        i++;
    } while (i <= 10);
    cout << endl;
}

void f3() {
    for (double d = 20.0; d >= 10.0; d -= 0.5) {
        cout << fixed << setprecision(1) << d << " ";
    }
    cout << endl;
}

void f3b() {
    double d = 20.0;
    while (d >= 10.0) {
        cout << fixed << setprecision(1) << d << " ";
        d -= 0.5;
    }
    cout << endl;
}

void f3c() {
    double d = 20.0;
    do {
        cout << fixed << setprecision(1) << d << " ";
        d -= 0.5;
    } while (d >= 10.0);
    cout << endl;
}

void f4() {
    bool b = true;
    for (char c = 'B'; c <= 'Z'; c += 2) {
        cout << c << "," << c << ",";
    }
    cout << endl;
}

void f4b() {
    bool b = true;
    char c = 'B';
    while (c <= 'Z') {
        cout << c << "," << c << ",";
        c += 2;
    }
    cout << endl;
}

void f4c() {
    bool b = true;
    char c = 'B';
    do {
        cout << c << "," << c << ",";
        c += 2;
    } while (c <= 'Z');
    cout << endl;

}

int f4MeParametro(bool B, int times) {
    char start;
    char end;
    int counter = 0;
    start = (B) ? 'A' : 'B';
    end = (B) ? 'Y' : 'Z';
    for (char c = start; c <= end; c += 2) {
        cout << c << "," << c << ",";
        for (int i = 1; i <= times; i++) {
            cout << c << ",";
            counter++;
        }
    }
    cout << endl;
    return counter;
}

int chooseF(int choice) {
    if (choice >= 1 and choice <= 4) {
        if (choice == 1) {
            f1();
        } else if (choice == 2) {
            f2();
        } else if (choice == 3) {
            f3();
        } else if (choice == 4) {
            f4();
        }
    } else {
        cout << "Μη έγκυρη τιμή παραμέτρου";
    }
}

bool chooseFb(int choice) {
    //Εάν χρησιμοποιήσουμε την εντολή return,
    //δεν έχει νόημα να πάρουμε λογική μεταβλητή.
    bool b = true;
    if (choice >= 1 and choice <= 4) {
        if (choice == 1) {
            f1();
        } else if (choice == 2) {
            f2();
        } else if (choice == 3) {
            f3();
        } else if (choice == 4) {
            f4();
        }
    } else {
        b = false;
    }
    cout << boolalpha << b;
}

/*
Στην εκφώνηση λέτε η συνάρτηση να επιστρέφει T/F,
άρα έπρεπε να χρησιμοποιήσω το return. Το δοκίμασα με πολλές παραλλαγές,
αλλά δεν μου δούλευε. Ήταν σα να προσπερνούταν η εντολή return
και δεν εμφανιζόταν κάτι ως αποτέλεσμα, οπότε προκειμένου τουλάχιστον
να λειτουργήσει το πρόγραμμα χρησιμοποίησα την cout. Το ίδιο ισχύει και για
την παρακάτω συνάρτηση.
 */

bool chooseFwhileOrDoWhile(int choice, bool isWhile) {
    if (isWhile == true && choice >= 1 and choice <= 4) {
        if (choice == 1) {
            f1b();
        } else if (choice == 2) {
            f2b();
        } else if (choice == 3) {
            f3b();
        } else if (choice == 4) {
            f4b();
        } else {
            isWhile = false;
        }
    } else {
        if (choice == 1) {
            f1c();
            isWhile = true;
        } else if (choice == 2) {
            f2c();
            isWhile = true;
        } else if (choice == 3) {
            f3c();
            isWhile = true;
        } else if (choice == 4) {
            f4c();
            isWhile = true;
        } else {
            isWhile = false;
        }
    }
    cout << endl;
    cout << boolalpha << isWhile;
}

/*
 * 
 */


int main(int argc, char** argv) {
    //f1();
    //f1b();
    //f1c();
    //f2();
    //f2b();
    //f2c();
    //f3();
    //f3b();
    //f3c();
    //f4();
    //f4b();
    //f4c();
    //chooseF(5);
    //chooseFb(5);
    //chooseFwhileOrDoWhile(1,true);


    //f4MeParametro(true,5);
    //f4MeParametro(false,3);
    //int lettersFound=f4MeParametro(false,1);
    //cout << "Brethikan:" << lettersFound;
    return 0;
}

