#include <iostream>
#define ll long long
using namespace std;

struct pos
{
    ll x;
    ll y;
};

void r1(struct pos &p, ll n)
{
    ll a;
    a = n - p.x;
    p.x += a;
    p.y += a;
}

void u1(struct pos &p, ll n)
{
    r1(p, n);
    ll a;
    a = n - p.y;
    p.x -= a;
    p.y += a;
}

void l1(struct pos &p, ll n)
{
    u1(p, n);
    ll a;
    a = p.x - 0;
    p.x -= a;
    p.y -= a;
}

void d1(struct pos &p, ll n)
{
    l1(p, n);
    ll a;
    a = p.y - 0;
    p.x += a;
    p.y -= a;
}

void u2(struct pos &p, ll n)
{
    ll a;
    a = n - p.y;
    p.x += a;
    p.y += a;
}

void r2(struct pos &p, ll n)
{
    u2(p, n);
    ll a;
    a = n - p.x;
    p.x += a;
    p.y -= a;
}

void d2(struct pos &p, ll n)
{
    r2(p, n);
    ll a;
    a = p.y - 0;
    p.x -= a;
    p.y -= a;
}

void l2(struct pos &p, ll n)
{
    d2(p, n);
    ll a;
    a = p.x - 0;
    p.x -= a;
    p.y += a;
}

struct pos solve(ll n, ll k, struct pos p)
{
    if (p.x > p.y)
    {
        k = k % 4;
        switch (k)
        {
        case 1:
            r1(p, n);
            break;
        case 2:
            u1(p, n);
            break;
        case 3:
            l1(p, n);
            break;
        case 0:
            d1(p, n);
            break;
        }
        return p;
    }
    if (p.x < p.y)
    {
        k = k % 4;
        switch (k)
        {
        case 1:
            u2(p, n);
            break;
        case 2:
            r2(p, n);
            break;
        case 3:
            d2(p, n);
            break;
        case 0:
            l2(p, n);
            break;
        }
        return p;
    }
    p.x = n;
    p.y = n;
    return p;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        struct pos p;
        cin >> n >> k >> p.x >> p.y;
        p = solve(n, k, p);
        cout << p.x << " " << p.y << "\n";
    }
    return 0;
}