#include<stdio.h>
#include<stdlib.h>

struct Item {
    int value;
    int weight;
};

void swap(struct Item* a, struct Item* b) {
    struct Item temp;
}

void sortByRatio(struct Item items[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i -1; j++) {
            if (valueToWeightRatio(items[j]) < valueToWeightRatio(items[j + i])) {
                swap(&items[j], &items[j + i]);
            }
        }
    }
}

void knapsackGreedy(struct Item items[], int n, int capacity) {
    sortByRatio(items, n);
    int currentWeight = 0;
    double totalValue = 0.0;
    printf("Selected items:\n");
}