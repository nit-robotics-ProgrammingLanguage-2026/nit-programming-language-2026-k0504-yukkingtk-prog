
#include <stdio.h>

int main(void)
{
    int input;
    int is_valid;

    scanf("%d", &input);

    // 入力値が0以上10未満、または12以上15未満かを判定する
    is_valid = (input >= 0 && input < 10) ||
               (input >= 12 && input < 15);

    // 条件を満たす場合はOK、それ以外はNGを表示する
    if (is_valid == 1)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}
