// https://adventofcode.com/2021/day/2
#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("in.txt", "r");
    if(!in){
        printf("dawaj hajs (plik)\n");
        return 1;
    }
    int x = 0, y = 0;
    int ile, aim = 0;
    char rozkaz[20], e;
    while (e!=EOF) {
        fscanf(in, "%s", rozkaz);
        if (!strcmp(rozkaz, "forward")) {
            fscanf(in, "%d", &ile);
            x += ile;
            y += ile*aim;
        } else if (!strcmp(rozkaz, "up")) {
            fscanf(in, "%d", &ile);
            aim -= ile;
        } else {
            fscanf(in, "%d", &ile);
            aim += ile;
        }
        printf("%d\n", ile);
        ile = 0;
        e = fgetc(in);
    }
    printf("%d", x*y);
    fclose(in);
    return 0;
}

