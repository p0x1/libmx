#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    if (str == NULL || sub == NULL || replace == NULL) {
        return NULL;
    }
   char *temp = mx_strdup(str);
    int length_str = mx_strlen(str);
    int length_sub = mx_strlen(sub);
    int k;
    for(int i = 0; i < length_str; i++){
        k=0;
        if(sub[0] == temp[i]){
            for(int j = i; j < length_sub+i; j++){
                if(temp[j]==sub[k] ){
                    temp[j] = replace[k];
                    k++;
                }
            }
        }
    }
    return temp;
}

