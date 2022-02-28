#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<pair<ll, ll>> v;
        ll n, m, a;
        bool checkx = false;
        cin >> n;
        m = 4 * n - 1;
        ll x[m], y[m];
        ll c, d;
        a = (m - 1) / 2;
        for (ll i = 0; i < m; i++)
        {
            cin >> x[i] >> y[i];
            v.push_back(make_pair(x[i], y[i]));
        }
        sort(v.begin(), v.end());

        for (ll i = a; i >= 1; --i)
        {
            if (v[2 * i].first != v[2 * i - 1].first)
            {
                c = v[2 * i].first;
                checkx = true;
                if ((2 * i) % 4 == 0 && i >= 2)
                {
                    if (v[2 * i].second == v[2 * i + 1].second)
                    {
                        d = v[2 * i + 2].second;
                    }
                    else
                    {
                        d = v[2 * i + 1].second;
                    }
                }
                else
                {
                    if (v[2 * i].second != v[2 * i - 1].second)
                    {
                        d = v[2 * i - 1].second;
                    }
                    else
                    {
                        d = v[2 * i - 2].second;
                    }
                }
                break;
            }
        }
        if (checkx)
        {
            cout << c << " " << d;
        }
        else
        {
            if (v[0].second == v[1].second)
            {
                d = v[2].second;
            }
            else
            {
                d = v[1].second;
            }
            cout << v[0].first << " " << d;
        }
        cout << endl;
    }
    return 0;
}