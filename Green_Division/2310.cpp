#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    float a, b, c, d, e, f, ans1, ans2, ans3;
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, k1 = 0.0, k2 = 0.0, k3 = 0.0;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        cin >> a >> b >> c;
        n1 += a;
        n2 += b;
        n3 += c;
        cin >> d >> e >> f;
        k1 += d;
        k2 += e;
        k3 += f;
    }
    cout << "Pontos de Saque: " << fixed << setprecision(2) << (k1 * 100.00) / n1 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (k2 * 100.00) / n2 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (k3 * 100.00) / n3 << " %." << endl;
    return 0;
}