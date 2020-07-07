#include <stdio.h>

#include "windows_head.h"

void welcome() {
    printf("欢迎使用由lilua构建的，基于c语言的番茄时钟！\n");
    printf("希望您可以在工作入迷之时，及时起身休息，健康万岁！\n");
}

void menu() {
    printf("输入编号以选择功能：\n");
    printf("1. 番茄时钟模式（默认30分钟工作，5分钟休息，自动循环）\n");
    printf("2. 自定义工作时间模式\n");
    printf("3. 单纯的倒计时模式\n");
    printf("4. 单纯的计时器模式\n");
    printf("-1. 输入-1退出程序\n");
    printf("请输入：");
}

void case1() {
    char c = '0';
    do {
        alarm(30, 0, "番茄时钟30分钟正在倒计时\n");
        alarm(5, 0, "休息时间~\n");
        printf("是否继续（y/n）?");
    } while ((scanf("%c", &c) != 0) && (c == 'y'));
    return;
}

int main(int argc, char const *argv[]) {
    welcome();
    int s_menu;
    menu();
    while (scanf("%d", &s_menu) != 0) {
        switch (s_menu) {
            case 1:
                case1();
                break;
            case 2:
                
            case -1:
                return 0;
                break;
            default:
                break;
        }
        menu();
    }

    return 0;
}
