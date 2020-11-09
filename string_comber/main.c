#include <stdio.h>
#define N 100
#define M 200

int space_del(char chr1, char chr2){
    if ((chr1 == ' ' && chr2 == ' ') ||
        (chr1 == ' ' && (chr2 == ',' || chr2 == '.')) ||
        (chr1 == ' ' && (chr2 == '?' || chr2 == '!')))
        return 1;
    else
        return 0;
}

int space_add(char chr1, char chr2){
    if ((chr1 == ',' || chr1 == '.' || chr1 == '?' || chr1 == '!') && chr2 != ' ')
        return 1;
    else
        return 0;
}

int main() {
    char string_in[N] = ""; // входная строка
    char string_out[M] = ""; // выходная строка
    gets_s(string_in, N);
    int len = 0, w = 0; // длинна строки, указатель записи выходной строки

    for (int i = 0; i < N; i++){ //вычисление длинны строки
        if (string_in[i] == '\0'){
            len = i;
            break;
        }
    }

//    if (string_in[0] != ' ' && string_in[0] != ',' && string_in[0] != '.'){ // затычка для 1 символа
//        string_out[w] = string_in[0];
//        w++;
//    }


    for (int i = 0; i < len-1; i++){ // основа, где i - указатель чтения входной сткоки
        if (space_del(string_in[i], string_in[i+1]) == 0){
            string_out[w] = string_in[i];
            w++;
        }
        if (space_add(string_in[i], string_in[i+1]) == 1){
            string_out[w] = ' ';
            w++;
        }
    }

    if (string_in[len - 1] != ' ' && string_in[len - 1] != ','){ // затычка для последнего символа
        string_out[w] = string_in[len - 1];
        w++;
    }

    printf("%s", string_out);

//    for (int i = 0; i < w; i++) { // вывод строки на экран
//        printf("%c", string_out[i]);
//    }


    return 0;
}
