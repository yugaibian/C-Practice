#include <stdio.h>

int main() {
    // 定义字符图形
    const char *c_pattern[] = {
        " ****",
        " *",
        " *",
        " ****"
    };

    const char c_pattern_a[][6] = {
        " ****",
        " *",
        " *",
        " ****"
    };

    // 输出字符图形
    printf("用 * 号输出字母 C!\n");
    for (int i = 0; i < (int)(sizeof(c_pattern) / sizeof(c_pattern[0])); i++) {
        printf("%s\n", c_pattern[i]);
    }


      for (int i = 0; i < (int)(sizeof(c_pattern) / sizeof(c_pattern[0])); i++) {
        printf("%s\n", c_pattern_a[i]);
    }

    return 0;
}