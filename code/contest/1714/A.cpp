// #include <bits/stdc++.h>

// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

// #define endl "\n"

// using namespace std;

// int main()
// {
//     fastio;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, h, m;
//         cin >> n >> h >> m;
//         vector<pair<int, int>> alarms;
//         while (n--)
//         {
//             int H, M;
//             cin >> H >> M;
//             alarms.push_back({H, M});
//         }
//         sort(alarms.begin(), alarms.end(), [](const pair<int, int> &a, const pair<int, int> &b)
//              {
//             if (a.first != b.first)
//                 return a.first < b.first;
//             return a.second < b.second; });
//         int H = -1;
//         int M = -1;
//         for (int i = 0; i < alarms.size(); i++)
//         {
//             if (alarms[i].first >= h)
//             {
//                 if (alarms[i].first == h && alarms[i].second < m)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     H = alarms[i].first;
//                     M = alarms[i].second;
//                     break;
//                 }
//             }
//         }
//         if (H == -1)
//         {
//             H = alarms[0].first;
//             M = alarms[0].second;
//         }
//         if (H <= h && M <= m)
//         {
//             h = H + 24 - h;
//             if (m > M)
//             {
//                 h--;
//                 m = 60 - m + M;
//             }
//             else
//             {
//                 m = M - m;
//             }
//         }
//         else
//         {
//             h = H - h;
//             if (m > M)
//             {
//                 h--;
//                 m = 60 - m + M;
//             }
//             else
//             {
//                 m = M - m;
//             }
//         }
//         if (h == 24)
//             h = 0;
//         cout << h << " " << m << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector<pair<int, int>> v;
//         int n, h, m;
//         cin >> n >> h >> m;
//         int flag = 0;
//         while (n--)
//         {
//             int a, b;
//             cin >> a >> b;
//             if (a == h and b == m)
//             {
//                 flag = 1;
//                 cout << "0"
//                      << " "
//                      << "0" << endl;
//             }
//             else
//             {
//                 a = a - 0;
//                 int temp = 60 - m + b;
//                 int hours = 0;
//                 if (temp > 59)
//                 {
//                     hours = temp / 60;
//                     temp = temp - hours * 60;
//                 }
//                 if (h < 12)
//                     v.push_back({abs(a - h - 1 + hours), temp});
//                 else
//                     v.push_back({23 - h + a + hours, temp});
//             }
//         }
//         if (flag == 0)
//         {
//             sort(v.begin(), v.end());
//             cout << v[0].first << " " << v[0].second << endl;
//         }
//     }
// }