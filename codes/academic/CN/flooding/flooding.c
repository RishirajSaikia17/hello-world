#include<stdio.h>

void nonAdaptiveRouting(int sourceX, int sourceY, int destX, int destY) {
    printf("Source: (%d, %d)\n", sourceX, sourceY);
    printf("Destination: (%d, %d)\n", destX, destY);

    while(sourceX != destX) {
        if(sourceX < destX) {
            printf("Go down\n");
            sourceX++;
        } else {
            printf("Go up\n");
            sourceX--;
        }
    }
    while(sourceY != destY) {
        if(sourceY < destY) {
            printf("Go right\n");
            sourceY++;
        } else {
            printf("Go left\n");
            sourceY--;
        }
    }
}

int main() {
    int sourceX = 2, sourceY = 1;
    int destX = 3, destY = 4;
    nonAdaptiveRouting(sourceX, sourceY, destX, destY);
    return 0;
}