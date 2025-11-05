#include <stdio.h>
 
int main() {
    // 定义甲队和乙队的成员
    char teamA[] = {'a', 'b', 'c'}; // 甲队：a, b, c
    char teamB[] = {'x', 'y', 'z'}; // 乙队：x, y, z
 
    // 变量 i, j, k 分别表示 a, b, c 的对手
    char i, j, k;
 
    // 枚举 a 的对手
    for (i = 'x'; i <= 'z'; i++) {
        // 枚举 b 的对手
        for (j = 'x'; j <= 'z'; j++) {
            // 确保 a 和 b 的对手不同
            if (i != j) {
                // 枚举 c 的对手
                for (k = 'x'; k <= 'z'; k++) {
                    // 确保 c 的对手与 a 和 b 的对手不同
                    if (i != k && j != k) {
                        // 满足题目条件：a 不和 x 比，c 不和 x 和 z 比
                        if (i != 'x' && k != 'x' && k != 'z') {
                            // 输出匹配结果
                            printf("比赛顺序：a--%c\tb--%c\tc--%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }
 
    return 0;
}