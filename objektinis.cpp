#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
//
void spausdinti(int dydis, string vardas);
//
int main()
{
    string vardas;
    int dydis;
    //
    printf("Koks Jusu vardas: ");
    cin >> vardas;
    printf("Iveskite remelio dydi (nuo 1 iki 10): ");
    cin >> dydis;
    spausdinti(dydis, vardas);
    system("PAUSE");
    return 0;
}
//
void spausdinti(int dydis, string vardas) {
    int plotis = dydis*2 + 10 + vardas.length();
    
    int ilgis = dydis*2 + 1;
    for (int i=1; i<=plotis+2; i++) { // pirma *** eilute
        printf("*");
    }
    printf("\n");
    for (int i=1; i<=ilgis; i++) {

        if(i==dydis+1) {
            printf("%*cSveikas, %s!%*c\n", -(dydis+1), '*', vardas.c_str(), dydis+1, '*');
        } else {
            printf("%c%*c\n", '*', plotis+1, '*');
        }
    }
    for (int i=1; i<=plotis+2; i++) { // paskutine *** eilute
        printf("*");
    }
    printf("\n");
}
