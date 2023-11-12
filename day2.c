#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
    FILE *file = fopen("day2.txt", "r");
    char directions[MAX];
    int forward;
    int up;
    int down;
    int depth;

    if (file != NULL) {
        while (fgets(directions, MAX, file) != NULL) {
            if (strstr(directions, "forward") != NULL) {
                forward += atoi(strtok(directions, "forward "));
            }
            else if (strstr(directions, "up") != NULL) {
                up += atoi(strtok(directions, "up "));
            } 
            else if (strstr(directions, "down") != NULL){
                down += atoi(strtok(directions, "down "));
            }
        }
        depth = forward * (down - up);
        printf("%d",depth);
    } 
    return 0;
}

