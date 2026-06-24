#include<stdio.h>
#include<stdlib.h>

#define SIZEA 1000
#define SIZEB 10000
#define SIZEC 100000


int main() {
    FILE *file;

    file = fopen("best-1000.txt", "w");
    for(int i=0; i<SIZEA; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    file = fopen("avg-1000.txt", "w");
    for(int i=0; i<SIZEA; i++) {
        fprintf(file, "%d\n", rand()*SIZEA);
    }
    fclose(file);
    
    file = fopen("worst-1000.txt", "w");
    for(int i=SIZEA-1; i>=0; i--) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    
    
    file = fopen("best-10000.txt", "w");
    for(int i=0; i<SIZEB; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    file = fopen("avg-10000.txt", "w");
    for(int i=0; i<SIZEB; i++) {
        fprintf(file, "%d\n", rand()*SIZEB);
    }
    fclose(file);
    
    file = fopen("worst-10000.txt", "w");
    for(int i=SIZEB-1; i>=0; i--) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    
    
    file = fopen("best-100000.txt", "w");
    for(int i=0; i<SIZEC; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    file = fopen("avg-100000.txt", "w");
    for(int i=0; i<SIZEC; i++) {
        fprintf(file, "%d\n", rand()*SIZEC);
    }
    fclose(file);
    
    file = fopen("worst-100000.txt", "w");
    for(int i=SIZEC-1; i>=0; i--) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
}