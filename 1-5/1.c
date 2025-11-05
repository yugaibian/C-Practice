# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("The three-digit numbers are:\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (i != j && j != k && i != k) {
                    printf("%d%d%d\n", i, j, k);
                }
                
        }
    }

    
}   
    return 0;
}