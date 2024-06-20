#include<stdio.h>

int main() {
    int incomingPages[] = {3, 1, 2, 3, 4, 2, 3, 0, 3, 1, 3};
    int pageFaults = 0;
    int frames = 3;
    int m, n, s, pages;
    pages = sizeof(incomingPages) / sizeof(incomingPages[0]);   //calculates the total number of pages
    printf("Incoming pages \t     Frame 1 \t          Frame 2 \t             Frame 3 ");
    int temp[frames];


     //m is used as an index for iterating over each incoming page request.
    //It represents the index of the current page being processed
    for (m = 0; m < frames; m++) {
        temp[m] = -1;
    }

    for (m = 0; m < pages; m++) {

        //s is used to track whether the incoming page is already present in any of the frames.
        //It serves as a flag to indicate whether a page fault has occurred for the current incoming page.
        s = 0;

        //n is used as an index for iterating over each frame in the temp array.
        //It represents the index of the current frame being considered for page replacement.
        for (n = 0; n < frames; n++) {
            if (incomingPages[m] == temp[n]) {    //This line checks if the incoming page is already present in the current frame
                s++;    //s is incremented,indicating that the page is already in memory
                pageFaults--;     //pageFaults is decremented as no page fault occurred.
            }
        }

        pageFaults++;


        //If the total number of page faults (pageFaults) is less than or equal to the total number of frames (frames),
        //it means there are frames available for storing pages without needing to replace any existing pages.

        if ((pageFaults <= frames) && (s == 0)) {
            temp[m] = incomingPages[m];
        } else if (s == 0) {
            int lru_index = 0;   //to assume that the first frame (temp[0]) might be the least recently used.
            int lru_time = temp[0];   //assuming the time or value in the first frame is the baseline for comparison.

            //The loop starts from `i = 1`
            //because `lru_index` and `lru_time` have already been initialized with the values of the first frame.

            for (int i = 1; i < frames; i++) {
                if (temp[i] < lru_time) {  //If the last used time of the current frame (temp[i]) is less than the current lru_time,
                                           //it indicates that the frame `i` is less recently used than the current `lru_time`.
                    lru_index = i;   //to keep track of the index and last used time of the LRU frame, respectively.
                    lru_time = temp[i];  //When such a frame is found, `lru_index` is updated to `i`,
                                         //and `lru_time` is updated to `temp[i]`.
                }
            }

            temp[lru_index] = incomingPages[m]; //Assigns the incoming page to the least recently used frame
        }

        printf("\n");
        printf("%d\t\t\t", incomingPages[m]);

        for (n = 0; n < frames; n++) {   //This loop iterates over each of the frames (in this case, there are 3 frames).
            if (temp[n] != -1)   //checks if the frame at index n contains a valid page (i.e., it is not -1).
                printf(" %d\t\t\t", temp[n]);
            else
                printf(" - \t\t\t");
        }
    }

    printf("\nTotal Page Faults:\t%d\n", pageFaults);
    return 0;
}
