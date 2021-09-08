#include <stdio.h>

int main()
{
    int cnt = 0;

    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
        int n = 0, r = 0;
        unsigned long long n_fac = 1;

        scanf("%d %d", &r, &n);

        if (r < n - r)
        {
            long long r_fac = 1;
            for (int i = n; i > 0; i--)
            {

                if (i > n - r)
                    n_fac *= i;
                if (i < r + 1)
                    r_fac *= i;
            }
            printf("%d\n", n_fac / r_fac);
        }
        else
        {
            long long n_r_fac = 1;
            for (int i = n; i > 0; i--)
            {

                if (i > r)
                    n_fac *= i;
                if (i < n - r + 1)
                    n_r_fac *= i;
            }
            printf("%d\n", n_fac / n_r_fac);
        }
    }
}