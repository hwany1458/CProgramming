#include <stdio.h>
#include <stdlib.h>

struct worldcup
{
    const char* nation;
    //�Ǵ� char nation[9];
    char goal;
};

int main(void)
{
    struct worldcup data[4] = { {"������",5},{"�߽���",3},
                                  {"���ѹα�",3},{"����",2} };
    int  i;
    FILE* fp;
    fp = fopen("2018cup.txt", "w");
    if (fp == NULL)
    {
        printf("File open�� ���� �߻�");
        exit(1);
    }
    for (i = 0; i <= 3; i++)
    {
        printf("%s %d\n", data[i].nation, data[i].goal);
        fprintf(fp, "%s %d\n", data[i].nation, data[i].goal);
    }
    fclose(fp);
    return 0;
}

