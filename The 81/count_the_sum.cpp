#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll phi(ll n)
{
    float result = n;
    for (ll p = 2; p * p <= n; ++p) {


        if (n % p == 0) {


            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }


    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));

    return (ll)result;
}


int main()
{

    return 0;
}
