#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inKetQua1(int i);
void inKetQua2(int j);
void main()
{
    printf("Chuong trinh chia bai tien len cho 4 nguoi:\n");
    printf("________________________________\n\n");
    // Chia bai:
    srand(time(NULL));
    int dem = 1, bool[13][4] = {}, chiabai[4][13] = {};
    int x, i, j, flag, a = 0, b = 0;
    do
    {
        x = rand() %52;
        flag = 0;
        do
        {
            i = x/4; j = x % 4;
            if (bool[i][j] == 0)
            {
                bool[i][j] = 1;
                dem++;
                chiabai[a][b] = x;
                a++;
                if (a == 4)
                {
                    b++;
                    a = 0;
                }
                flag = 1;
            }
            else
            {
                x++;
                if (x == 52) x = 0; 
            }
        } while (flag == 0);
    } while (dem <= 52);
    // In ket qua chia bai:
    for (a = 0; a <= 3; a++)
    {
        printf("Nguoi choi %d: ", a+1);
        for (b = 0; b <= 12; b++)
        {
            i = chiabai[a][b]/4; j = chiabai[a][b] %4;
            inKetQua1(i), inKetQua2(j);
        }
        printf("\n");
    }
    printf("\n");
    // Tim tu quy:
    int checkTuQuy[13][4] = {}, coTuQuy = 0;
    for (a = 0; a <= 3; a++)
    {
        for (b = 0; b <= 12; b++)
        {
            i = chiabai[a][b] /4; 
            j = chiabai[a][b] %4;
            checkTuQuy[i][j] = a;
        }
    }
    for (i = 0; i <= 12; i++)
    {
        j = 0;
        if (checkTuQuy[i][j] == checkTuQuy[i][j+1])
        {
            if (checkTuQuy[i][j] == checkTuQuy[i][j+2])
            {
                if (checkTuQuy[i][j] == checkTuQuy[i][j+3])
                {
                    printf("Nguoi choi %d co tu quy ", checkTuQuy[i][j]+1); inKetQua1(i);
                    printf("\n");
                    coTuQuy = 1;
                }
            }
        }
    }
    if (coTuQuy == 0)
        printf("Khong co nguoi choi nao co tu quy!");
}
void inKetQua1(int i)
{
    switch (i)
    {
        case 0:
            printf("A  ");
            break;
        case 1:
            printf("2  ");
            break;
        case 2:
            printf("3  ");
            break;
        case 3:
            printf("4  ");
            break;
        case 4:
            printf("5  ");
            break;
        case 5:
            printf("6  ");
            break;
        case 6:
            printf("7  ");
            break;
        case 7:
            printf("8  ");
            break;
        case 8:
            printf("9  ");
            break;
        case 9:
            printf("10 ");
            break;
        case 10:
            printf("J  ");
            break;
        case 11:
            printf("Q  ");
            break;
        case 12:
            printf("K  ");
            break;
    }
}
void inKetQua2(int j)
{
    switch (j)
    {
        case 0:
            printf("%-4s ", "co");
            break;
        case 1:
            printf("%-4s ", "ro");
            break;
        case 2:
            printf("%-4s ", "bich");
            break;
        case 3:
            printf("%-4s ", "tep");
            break;
    }
}
