// https://adventofcode.com/2021/day/1
#include <stdio.h>

int main() {
    FILE *in = fopen("in.txt", "r");
    if(!in){
        printf("dawaj hajs (plik)\n");
        return 1;
    }
    int a = 0, b = 0, c = 0;
    int poprzedni, obecny;
    int wiekszeSumy = 0;
    char e;
    fscanf(in, "%d", &a);
    fscanf(in, "%d", &b);
    fscanf(in, "%d", &c);
    while (e!=EOF){
        a = b;
        b = c;
        fscanf(in, "%d", &c);
        obecny = a + b + c;
        if (obecny>poprzedni)
            wiekszeSumy++;
        poprzedni = obecny;
        e = fgetc(in);
    }
    printf("%d", wiekszeSumy-1);
    fclose(in);
    return 0;
}

