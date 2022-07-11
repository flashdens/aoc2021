// https://adventofcode.com/2021/day/1
#include <stdio.h>

int main() {
    FILE *in = fopen("in.txt", "r");
    if(!in){
        printf("dawaj hajs (plik)\n");
        return 1;
    }
    int poprzedni = 0, obecny = 0;
    int zanurzenia = 0;
    char e;
    while (e!=EOF){
        fscanf(in, "%d", &obecny);
        if (obecny>poprzedni)
            zanurzenia++;
        poprzedni = obecny;
        e = fgetc(in);
    }
    printf("%d", zanurzenia-1);
    fclose(in);
    return 0;
}

