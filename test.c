#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(int argc, char const *argv[]) {
    clock_t t_start, t_end;
    t_start = clock();
    int second = 0, minite = 0;
    while (1) {
        int s, m;
        t_end = clock();
        s = (t_end - t_start) / CLOCKS_PER_SEC;
        m = s / 60;
        s %= 60;
        if (s != second) {
            second = s;
            minite = m;
            system("cls");
            // 输出，可以自定义样式，但是受限于窗口大小，自行调整
            printf("duration=====> %02d:%02d\n", m, s);
            // 假睡眠过渡，减少cpu消耗
            Sleep(997);
        }
        if ((m - 1 == 0) && (s - 0 == 0)) {
            printf("计时结束\n");
            return 0;
        }
    }
    return 0;
}
