#incude <stdio.h>
#incude <stdlib.h>
#include <process.h>

int main()
{
    FILE *tk_bat;            //taskkill.bat
    int back_info = -1;

    back_info = mkdir("C:\\Taskkill");

    (!back_info) ? (printf("成功创建\'C:\\Taskkill\'\n")) :
        (printf("失败：无法在\'C\'盘下创建文件夹\'Tasklill\'----请尝试以管理员身份运行\n")
         ,system("pause")
         ,exit(0));



    tk_bat = fopen("C:\\Taskkill\\");

    return 0;
}
