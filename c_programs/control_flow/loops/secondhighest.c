#include <stdio.h>

int main() {
    int n, t, d;
    int hd = -1;
    int sd = -1;
    if (scanf("%d", &n) != 1) return 0;

    t = (n < 0) ? -n : n;

    if (t < 10) {
        printf("you have supplied single digit only\n");
        return 0;
    }

    while (t > 0) {
        d = t % 10;

        if (d > hd) {
            sd = hd;
            hd = d;
        } 
        else if (d > sd && d < hd) {
            sd = d;
        }

        t /= 10;
    }

    if (sd == -1) {
        printf("all digits are same\n");
    } else {
        printf("%d\n", sd);
    }

    return 0;
}