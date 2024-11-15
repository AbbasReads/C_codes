#include <stdio.h>
unsigned long long pow(unsigned long long n, int p)
{
    if(p==0)
    return 1;
    return n*pow(n,p-1);
}
unsigned long long toBinaryInt(unsigned long long n)
{
    unsigned long long binary = 0ULL;
    unsigned long long place = 1;

    while (n > 0)
    {
        int lastBit = n & 1; // Extract the last bit
        binary += (unsigned long long)lastBit * place;
        place *= 10; // Move to the next decimal place
        n >>= 1;     // Right shift to process the next bit
    }
    return binary;
}
void actual()
{
    int n; 
    scanf("%d", &n);
    unsigned long long num =0;
    unsigned long long bin;
    while (num<pow(2,n))
    {
        bin = toBinaryInt(num);
        unsigned long long x=num^((unsigned long long)pow(2,n)-1);
        unsigned long long final = 6 * bin + 3 * (toBinaryInt(x));
        if (final % 66 == 0)
        {
            printf("%llu\n", final);
            return;
        }
        num+=1;
    }
    printf("-1\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        actual();
    }
}
