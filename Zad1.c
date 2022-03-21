#include <stdio.h>
#include <math.h>
int cylinder() {
    double r;
    double h;
    double V;
    double S;
    printf("Input r and h:");
    scanf("%lf %lf", &r, &h);
    if (r <= 0 | h<=0) {
        printf("Invalid data, try again");
    } else {
        S = 3.14 * pow(r, 2);
        V = 3.14 * pow(r, 2) * h;
        while (getchar() != EOF) {
            printf("S=%lf V=%lf", S, V);
            if (S >= 0 & V >= 0) {
                printf("0");
            } else {
                printf("-1");
            }
        }
    }
}
int main() {
    cylinder();
    return 0;
}