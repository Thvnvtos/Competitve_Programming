#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 5;

char c;
int a[MAXN][MAXN];

void fil(int siz, int x,int y)
{
    for(int r=x;r<x+siz;++r) for(int c = y;c<y+siz;++c) a[r][c] = 1;
}

void solve(int siz, int x,int y)
{
    cin >> c;
    if(c=='p')
    {
        solve(siz/2,x,y+siz/2);
        solve(siz/2,x,y);
        solve(siz/2,x+siz/2,y);
        solve(siz/2,x+siz/2,y+siz/2);
    }
    else if(c=='f') fil(siz,x,y);
}

int main()
{
    int n; scanf("%d",&n);
    while(n--)
    {
        memset(a,0,sizeof(a));
        solve(32,0,0);
        solve(32,0,0);
        int cnt(0);
        for(int i=0;i<32;++i) for(int j=0;j<32;++j) cnt += a[i][j];
        printf("There are %d black pixels.\n",cnt);
    }
}

