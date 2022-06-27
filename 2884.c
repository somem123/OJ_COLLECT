#include <stdio.h>

int main(void){
    int h=0;
    int m = 0;

    scanf("%d %d", &h, &m);

    if(m >= 45){
        m -= 45;

    }else{
        if(h>=1){
            h-= 1;
            m+= 15;
        }
        else{
            m+= 15;
            h = 23;
        }
    }

    printf("%d %d", h, m);
}