#include "../inc/libmx.h"

char *mx_strdup(const char *str) {
    int length = mx_strlen(str);
    char *res = mx_strnew(length);
    mx_strcpy(res, str);
    return res;
}
