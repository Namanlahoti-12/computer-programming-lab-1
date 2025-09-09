#include <stdio.h>

int main() {

int x=0;
    for (int i = 2; i <= 500; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
                 x++;
        }


    }
    printf("Total Prime numbers between 1 and 500 are: %d",x);


    return 0;
}
