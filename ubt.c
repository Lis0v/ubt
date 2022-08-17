#include <stdlib.h>

int main(){
    
    unsigned int cur = 0x01;

    for(int i=1;i<=17;i++){
        printf("\n%02x ",cur);
        cur++;
        for(int j=1;j<15;j++){
            printf("%02x ",cur);
            cur++;
        }
    }
    printf("\n\n");
    return 0;
}
