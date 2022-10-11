#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string temp;
        cin >> temp;
        for (int l = 1; l <= n; l++)
        {
            // cout << "hi";
            string s = temp;
            int k = l;
            int i = 0, j = s.length() - 1;
            while (i < j)
            {
                if (n % 2 != 0)
                {
                    if (k <= 0)
                        break;
                    if (s[i] == 'R')
                        i++;
                    else if (s[j] == 'L')
                        j--;
                    else if (s[i] == 'L' && i < ((n + 1) / 2) - 1)
                    {
                        if (i <= (n - j - 1))
                        {
                            s[i] = 'R';
                            i++;
                            k--;
                        }
                        else
                        {
                            if (s[j] == 'R' && j >= (n / 2))
                            {
                                s[j] = 'L';
                                j--;
                                k--;
                            }
                        }
                    }
                    else if (s[j] == 'R' && j >= ((n + 1) / 2))
                    {
                        if (i >= (n - j - 1))
                        {
                            s[j] = 'L';
                            j--;
                            k--;
                        }
                        else
                        {
                            if (s[i] == 'L' && i < (n / 2))
                            {
                                s[i] = 'R';
                                i++;
                                k--;
                            }
                        }
                    }
                    else
                    {
                        s[i] = 'L';
                        s[j] = 'R';
                        i++;
                        j--;
                        k--;
                    }
                }
                // LLRR
                else
                {
                    if (k <= 0)
                        break;
                    if (s[i] == 'R')
                        i++;
                    else if (s[j] == 'L')
                        j--;
                    else if (s[i] == 'L' && i < (n / 2))
                    {
                        if (i <= (n - j - 1))
                        {
                            s[i] = 'R';
                            i++;
                            k--;
                        }
                        else
                        {
                            if (s[j] == 'R' && j >= (n / 2))
                            {
                                s[j] = 'L';
                                j--;
                                k--;
                            }
                            else
                            {
                                j--;
                            }
                        }
                    }
                    else if (s[j] == 'R' && j >= (n / 2))
                    {
                        if (i >= (n - j - 1))
                        {
                            s[j] = 'L';
                            j--;
                            k--;
                        }
                        else
                        {
                            if (s[i] == 'L' && i < (n / 2))
                            {
                                s[i] = 'R';
                                i++;
                                k--;
                            }
                            else
                            {
                                i++;
                            }
                        }
                    }
                    else
                    {
                        s[i] = 'L';
                        s[j] = 'R';
                        i++;
                        j--;
                        k--;
                    }
                }
            }
            if (k != 0)
            {
                if (n % 2 == 0)
                {
                    if (j == n / 2)
                    {
                        if (s[j] == 'R')
                        {
                            s[j] = 'L';
                        }
                    }
                    else if (i == (n / 2) - 1)
                    {
                        if (s[i] == 'L')
                        {
                            s[i] = 'R';
                        }
                    }
                }
            }
            // cout << i << ":" << j << ":" << s;
            int count = 0;
            for (int m = 0; m < n; m++)
            {
                if (s[m] == 'L')
                    count += m;
                else
                {
                    // cout << n - m - 1;
                    count += (n - m - 1);
                }
            }
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}