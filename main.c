#include <stdio.h>

int main() {
    int mon = 0;
    double hard_sum = 0., per = 0., easy_sum = 0.;
    scanf("%lf%d%lf", &hard_sum, &mon, &per);
    //printf("%f", hard_sum);
    easy_sum = hard_sum;
    double profit = easy_sum * per;
    for (int i = 1; i <= mon; i++){
        hard_sum += hard_sum * per;
        easy_sum += profit;
        printf("%d %f  %f\n", i, hard_sum, easy_sum);
    }
    return 0;
}
