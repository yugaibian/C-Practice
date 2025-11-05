#include <stdio.h>

int main(void) {
    unsigned long long result = 0;
    unsigned long long singleResult = 1;
    
    for (unsigned long long i = 1; i <= 20; i++) {
        for (unsigned long long j = i; j >= 1; j--) {
            singleResult *= j;
        }        
        result += singleResult;
        singleResult = 1;
    }

    printf("%lld",result);

    return 0;

}
