#include "../inc/libmx.h"

char **mx_strsplit(char const *s, char c) {
    if (s == 0) {
        return 0;
    }
    int size_of_arr = mx_count_words(s, c);
    int j = 0;
    char **arr = (char**)malloc(size_of_arr);
    for (int i = 0; i < size_of_arr; i++) {
        int length = 0;
        int begin = 0;
       while(s[j]){
            if (s[j] != c) {
                length++;
                if (begin == 0) {
                    begin = j;
                }
            }
            else {
                if (s[j] == c && length) {
                    break;
                }
            }
            j++;
        }
        char *temp = mx_strnew(length);
        for (int k = 0, n = begin; n < j; k++, n++) {
            temp[k] = s[n];
        }
        arr[i] = temp;
    }
    arr[size_of_arr] = NULL;
    return arr;
}
