#incude <stdio.h>
#incude <stdlib.h>
#include <process.h>

int main()
{
    FILE *tk_bat;            //taskkill.bat
    int back_info = -1;

    back_info = mkdir("C:\\Taskkill");

    (!back_info) ? (printf("�ɹ�����\'C:\\Taskkill\'\n")) :
        (printf("ʧ�ܣ��޷���\'C\'���´����ļ���\'Tasklill\'----�볢���Թ���Ա�������\n")
         ,system("pause")
         ,exit(0));



    tk_bat = fopen("C:\\Taskkill\\");

    return 0;
}
