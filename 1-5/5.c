#include <stdio.h>

int main(void) {
    int nums[] = {1231,2312,34,34,2,342,34,1,4,324,1123,412,34,1,123412341,34234,343};
    int exchangeTemp = 0;
    int indicator = 0;
    int length = sizeof(nums) / sizeof(nums[0]);

    while (1) {
        indicator = 0;
        for (int i = 0; i <= length - 2; i++) {
            if (nums[i+1] > nums[i]) {
                exchangeTemp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = exchangeTemp;
                indicator++;
            }
        }
        if (indicator == 0) {
            break;
        }
    }
    
    for (int i = 0; i <= length - 1; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}