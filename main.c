#include <stdio.h>
int main(int argc,char **argv){
    for (int i = 0; i < argc; i++) {  // 使用计数变量 i 进行遍历
        printf("%s\n", argv[i]);
    }
    return 0;
}