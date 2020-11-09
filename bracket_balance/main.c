#include <stdio.h>
# define N 100

char bracket_reverse(char bracket){
    if (bracket == '(')
        return ')';
    if (bracket == '[')
        return ']';
    if (bracket == '{')
        return '}';
    if (bracket == '<')
        return '>';
}

int main() {

    int m = 0; // указатель в стеке
    char string[N] = "";
    char stack[N/2] = ""; // стек для скобок
    int flag = 1;
    int len = 0;

    gets_s(string, N);

    for (int i = 0; i < N; i++){ //вычисление длинны строки
        if (string[i] == '\0'){
            len = i;
            break;
        }
    }

    for (int i = 0; i < len; i++){

        if (string[i] == '(' || string[i] == '[' || string[i] == '{' || string[i] == '<'){
            stack[m] = bracket_reverse(string[i]);
            m++;
        }

        if (string[i] == ')' || string[i] == ']' || string[i] == '}' || string[i] == '>'){
            if (stack[m-1] == string[i])
                m--;
            else{
                flag = 0;
                break;
            }
        }

        if (m < 0) {
            flag = 0;
            break;
        }
    }
    //printf("%d%d", flag, count);
    if (flag == 1)
        printf("OK");
    else
        printf("NOT OK");

    return 0;
}
