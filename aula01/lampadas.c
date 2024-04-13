#include <stdio.h>

int main()
{
    int i1 = 0, i2 = 0, N, cmp;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &cmp);
        if (cmp == 1)
        {
            if (i1 == 0){
                i1 = 1;
            }
            else {
                i1 = 0;
            }
        }
        else{
            if (i1 == 0){
                i1 = 1;
            }
            else
            {
                i1 = 0;
            }
            
            if (i2 == 0){
                i2 = 1;
            }
            else{
                i2 = 0;
            }
        }
    }

    // Output
    printf("%d\n%d\n", i1, i2);
    return 0;
}