#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 2;
    while (i < n){
        int count = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                count = 0;
                break;
            }
        }
        if (count)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
