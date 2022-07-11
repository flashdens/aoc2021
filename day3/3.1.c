// https://adventofcode.com/2021/day/3
#include <stdio.h>

int pow (int podstawa, int wykladnik){
    int wynik = podstawa;
    while(wykladnik){
        wynik *= 2;
        wykladnik--;
    }
    return wynik;
}

int main() {
    FILE *in = fopen("in.txt", "r");
    if (!in) {
        printf("dawaj hajs (plik)\n");
        return 1;
    }
    char gamma[12], epsilon[12];
    char obecny[12];
    int licznik0 = 0, licznik1 = 0;
    for (int i = 0; i <= 11; i++) {
        for (int j = 0; j < 1000; ++j) {
            fscanf(in, "%s", obecny);
            if (obecny[i] == '0')
                licznik0++;
            else
                licznik1++;
        }
        printf("%d %d\n", licznik0, licznik1);
        if (licznik1 > licznik0) {
            gamma[i] = '1';
            epsilon[i] = '0';
        } else{
            gamma[i] = '0';
            epsilon[i] = '1';
        }
    licznik0 = 0;
    licznik1 = 0;
    obecny[0] = '\0';
    rewind(in);
}
    printf("%s\n", epsilon);
    printf("%s\n", gamma);
    int gammaDec = 0;
    int epsilonDec = 0;
    int g = 0;
    for (int i = 11; i; --i) {
        if (gamma[g] == '1')
            gammaDec += pow(2, i-1);
        g++;
    }
    g = 0;
    for (int i = 11; i; --i) {
        if (epsilon[g] == '1')
            epsilonDec += pow(2, i-1);;
            g++;
    }
    printf("%d", gammaDec*epsilonDec);
    return 0;
}

