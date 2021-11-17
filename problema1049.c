#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){
    char a[20], b[20], c[20], *r = "aguia";
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    
    if (!strcmp(a, "vertebrado")) {
        if (!strcmp(b, "ave")) {
            if (!strcmp(c, "onivoro")) {
                r = "pomba";
            }
        }
        else {
            if (!strcmp(c, "onivoro")) {
                r = "homem";
            }
            else {
                r = "vaca";
            }
        }
    }
    else {
        if (!strcmp(b, "inseto")) {
            if (!strcmp(c, "hematofago")) {
                r = "pulga";
            }
            else {
                r = "lagarta";
            }
        }
        else {
            if (!strcmp(c, "hematofago")) {
                r = "sanguessuga";
            }
            else {
                r = "minhoca";
            }
        }
    }

    printf("%s\n", r);
    return 0;
}
