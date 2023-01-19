//
// Created by 张先森 on 2022/12/24.
//
#include "func.h"
void print_message(){
    printf("how do you do\n");
    print_star(3);//函数可以嵌套调用
}

int print_star(int i){ //i即为形式参数
    printf("*********************\n");
    printf("print_star %d\n",i);
    return i+3;
}

