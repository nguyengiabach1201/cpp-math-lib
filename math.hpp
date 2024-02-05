#include <cmath>
#include <algorithm>

namespace math
{
    int ceil(float x)
    {
        return std::ceil(x);
    }

    int comb(int n, int k)
    {
        if (k > n)
            return 0;
        if (k == 0 || k == n)
            return 1;
        return (comb(n - 1, k - 1) + comb(n - 1, k));
    }

    float copysign(float x, float y)
    {
        return std::copysign(x, y);
    }

    float fabs(float x)
    {
        return std::fabs(x);
    }

    int factorial(int x)
    {
        return x == 0 ? 1 : x * factorial(x - 1);
    }

    int floor(float x)
    {
        return std::floor(x);
    }

    float fmod(float x, float y)
    {
        return std::fmod(x, y);
    }

    float frexp(float x)
    {
        int exponent;
        return std::frexp(x, &exponent);
    }

    float fsum(float *x)
    {
        float s;
        for (int i = 0; i < sizeof(x) / sizeof(*x); i++)
        {
            s += x[i];
        }
        return s;
    }

    int gcd(float* x)
    {
        int ans = std::__gcd(x[0], x[1]);
        for (int i = 2; i < sizeof(x) / sizeof(*x); i++)
        {
            ans = std::__gcd((float)ans, x[i]);
        }
        return ans;
    }
}