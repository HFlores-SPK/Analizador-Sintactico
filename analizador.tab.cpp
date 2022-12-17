#include <stdio.h> 
#include "analizador/y.tab.h"
void parse(FILE *file);

void main(){
    FILE *file = fopen("entrada.txt", "r");
    parse(file);   
}
