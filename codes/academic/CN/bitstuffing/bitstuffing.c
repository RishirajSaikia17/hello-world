#include<stdio.h>
#include<string.h>

int main() {
    int data[25], stuffedData[50];
    int count, i=0, j=0;
    printf();
    scanf();


    int len = strlen(data);
    
    for(i=0; i<len; i++) {
        if(data[i] == '1') {
            count++;
            stuffedData[j++] = data[i];
        } else {
            count = 0;
            stuffedData[j++] = data[i];
        }

        if(count == 5) {
            count =0;
            stuffedData[j++] = '0';
        }
    }
    stuffedData[j++] = '\0';
    printf("\nThe entered data is: ", data);
    printf("The stuffed data is: ", stuffedData);
    return 0;
}

    