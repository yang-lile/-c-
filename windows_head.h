#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 倒计时器
int alarm(int aim_m, int aim_s, const char* str) {
    // 设置Windows终端的窗口大小
    system("mode con cols=30 lines=2");
    system("title 计时器计时中");
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
            // 假睡眠过渡，减少cpu消耗
            Sleep(997);

            // 计算倒计时
            int o_s = aim_s - s;
            int o_m = m;
            if (o_s < 0) {
                o_s += 60;
                o_m--;
            }
            o_m = aim_m - o_m;

            // 输出，可以自定义样式，但是受限于窗口大小，自行调整
            printf(str);
            printf("duration=====> %02d:%02d\n", m, s);
        }
        printf("ssss");
        Sleep(1000);
        if ((aim_m - m == 0) && (aim_s - s == 0)) {
            system("mode con cols=150 lines=10");
            return 0;
        }
    }
    system("mode con cols=150 lines=10");
    return -1;
}

// 计时器
int click(int aim_m, int aim_s, const char* str) {
    // 设置Windows终端的窗口大小
    system("mode con cols=30 lines=2");
    system("title 计时器计时中");
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
            // 假睡眠过渡，减少cpu消耗
            Sleep(997);
            system("cls");
            // 输出，可以自定义样式，但是受限于窗口大小，自行调整
            printf(str);
            printf("duration=====> %02d:%02d\n", m, s);
        }
        if ((aim_m - m == 0) && (aim_s - s == 0)) {
            system("mode con cols=150 lines=10");
            return 0;
        }
    }
    system("mode con cols=150 lines=10");
    return -1;
}