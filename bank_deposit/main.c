#include <stdio.h>

int main() {
    int mon = 0;
    double hard_sum = 0., per = 0., easy_sum = 0.;
    scanf("%lf%d%lf", &hard_sum, &mon, &per);
    //printf("%f", hard_sum);
    easy_sum = hard_sum;
    easy_sum += easy_sum * per/1200 * mon;
    printf("%f\n", easy_sum);
    for (int i = 1; i <= mon; i++){
        hard_sum += hard_sum * per/1200;
        printf("%d %f\n", i, hard_sum);
    }
    return 0;
}