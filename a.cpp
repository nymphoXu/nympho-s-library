#pragma GCC diagnostic error "-std=c++11"
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<time.h>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#define LL long long
using namespace std;
const LL N=1e4+10;
const LL mod=1e9+7;
const LL inf=0x3f3f;
namespace FastIO
{
    template<typename tp> inline void read(tp &x)
    {
        x=0; register char c=getchar(); register bool f=0;
        for(;c<'0'||c>'9';f|=(c=='-'),c = getchar());
        for(;c>='0'&&c<='9';x=(x<<3)+(x<<1)+c-'0',c = getchar());
        if(f) x=-x;
    }
    template<typename tp> inline void write(tp x)
    {
        if (x==0) return (void) (putchar('0'));
        if (x<0) putchar('-'),x=-x;
        LL pr[20]; register LL cnt=0;
        for (;x;x/=10) pr[++cnt]=x%10;
        while (cnt) putchar(pr[cnt--]+'0');
    }   
    template<typename tp> inline void writeln(tp x)
    {
        write(x);
        putchar('\n');
    }
}
using namespace FastIO;

main()
{
    printf("Halle World!\n");
    return 0;
}
