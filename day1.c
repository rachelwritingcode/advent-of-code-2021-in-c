#include <stdio.h>
#include <stdlib.h>
#define MAX 2000

int main() {
    // Open input file
    FILE *file = fopen("day1.txt", "r");
    int depths[MAX];
    int i = 0;

    if (file != NULL) {
        while (!feof(file) && i < MAX) {
            fscanf(file, "%d", &depths[i++]);
        }
        fclose(file);
    } else {
        printf("error unable to open file");
        return EXIT_FAILURE;
    }

    int j = 0;
    int increase_counter = 0;
    for (j = 0; j < MAX; j++) {
        if (depths[j] < depths[j+1]){
            increase_counter ++;
        }
    }
    printf(" increase counter: %d ", increase_counter);
    return 0;
}

int get_max(int num1, int num2){
   if (num1 > num2)
      return num1;
   else
      return num2;
}
