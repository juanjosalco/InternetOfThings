#include <stdio.h>

int main(){

    FILE *sort;

    char *str1[10];
    str1[0] = "Hola";
    str1[1] = "Como";
    str1[2] = "Estas";
    str1[3] = "Mi";
    str1[4] = "Pana";

    sort = popen("sort", "w");

    for(int i = 0; i < 5; i++){
        fprintf(sort, "%s\n", str1[i]);
    }

    pclose(sort);
    return 0;
}