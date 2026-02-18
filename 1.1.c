#include <stdio.h>

void drawAirplane(int offset) {
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("    __|__\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("  *---o---*\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("     /|\\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("    / | \\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("   /  |  \\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("  /   |   \\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf(" /    |    \\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("/_____|_____\\\n");
    
    for(int i = 0; i < offset; i++) {
        printf(" ");
    }
    printf("  ( )    ( )\n");
}

int main()
 {
    printf("飞行动画（按Enter键继续）：\n");
    
    for(int i = 0; i < 10; i++) {
        system("cls"); // Windows系统清屏，Linux/Mac用 system("clear");
        printf("飞机位置：%d\n", i);
        drawAirplane(i * 5);
        getchar(); // 按Enter继续
    }
    
    return 0;
}