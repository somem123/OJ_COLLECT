#include <stdio.h>

int main(void){
    int h=0;
    int m=0;

    scanf("%d %d\n", &h, &m);

    int duration =0;
    scanf("%d", &duration);

    int d_h = duration / 60;
    int d_m = duration % 60;

    h = (h + d_h) + ((m + d_m)/60);
    m = (m + d_m)%60;


    if( h >= 24){
        h -=24;
    }
    
    printf("%d %d", h, m);

}