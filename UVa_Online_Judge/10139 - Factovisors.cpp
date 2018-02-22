#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll,int> > divs;

void fact(ll m)
{
    for(ll i=2;i*i<=m;++i)
    {
        int cnt(0);
        while(m%i==0) ++cnt, m/=i;
        divs.push_back(make_pair(i,cnt));
    }
    if(m>1) divs.push_back(make_pair(m,1));
}

int main()
{
    ll m,n;
    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        divs.clear();
        fact(m);
        bool ok = true;
        for(int i=0;i<divs.size();++i)
        {
            ll r = divs[i].first, p(r), cnt(0);
            while(p<=n) cnt += n/p, p*=r;
            if(cnt < divs[i].second) {ok=false;break;}
        }
        if(ok) printf("%lld divides %lld!\n",m,n);
        else printf("%lld does not divide %lld!\n",m,n);
    }
}

