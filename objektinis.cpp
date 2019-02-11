#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
//
void spausdinti(string vardas);
//
int main()
{
    string vardas;
    //
    printf("Koks Jusu vardas: ");
    cin >> vardas;
    spausdinti(vardas);
    system("PAUSE");
    return 0;
}
//
void spausdinti(string vardas) {
    string eilute1, eilute2, eilute3, eilute4, eilute5, sveikas;
    int plotis;
    if (vardas.back() == 's') {
        sveikas = "Sveikas";
        plotis =  12 + vardas.length();
    } else {
        sveikas = "Sveika";
        plotis =  11 + vardas.length();
    }
    int ilgis = 3;
    for (int i=1; i<=plotis+2; i++) { // pirma *** eilute
        eilute1 = eilute1 + '*';
    }
    cout  << eilute1 << endl;
    //
    eilute2 = eilute2 + '*'; // tuscia *** eilute
    for (int i=1; i<=plotis; i++) { 
        eilute2 = eilute2 + ' ';
    }
    eilute2 = eilute2 + '*';
    cout  << eilute2 << endl;
    //
    eilute3 = eilute3 + "* " + sveikas + ", " + vardas + "! *";
    cout  << eilute3 << endl;
    //
    eilute4 = eilute4 + '*'; // tuscia *** eilute
    for (int i=1; i<=plotis; i++) { 
        eilute4 = eilute4 + ' ';
    }
    eilute4 = eilute4 + '*';
    cout  << eilute4 << endl;
    //
    for (int i=1; i<=plotis+2; i++) { // paskutine *** eilute
        eilute5 = eilute5 + '*';
    }
    cout  << eilute5 << endl;
   
}
