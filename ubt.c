#include <stdlib.h>
#include <stdio.h>

int main(){
    
    unsigned int cur = 0x01;
    char buf[16];

    for(int i=1;i<=17;i++){
        printf("\n%02x ",cur);
        cur++;
        for(int j=1;j<15;j++){
            printf("%02x ",cur);
            printf("\u28%x",cur); //proof of concept, fix this line
            cur++;
        }
    }
    printf("\n\n");
    return 0;
}
