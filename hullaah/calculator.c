#include "calculator.h"

int main(void)
{
        long double num1, num2, ans;
        
        num1 = get_num();
        num2 = get_num();
        ans = get_op()(num1, num2);
        printf("%Lg\n", ans);
}
