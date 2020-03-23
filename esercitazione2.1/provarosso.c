#include <stdio.h>
 
int main() {
    int a = 1, b = 1;
    int *p;
    p = &a;
    int *m;
    m = &b;
 
    do{
        printf("ins int pos\n");
        scanf("%d", p);
    } while (*p < 0);



    while(*m != 0){
        do {
            printf("ins int pos\n");
            scanf("%d", m);
        } while (*m < 0);
        if(*m<*p && *m != 0){
            *p=*m;
        }
    }
    printf("%d\n",*p);
}
