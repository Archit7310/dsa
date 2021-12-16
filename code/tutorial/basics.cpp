#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>

// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

// #define endl "\n"

// using namespace std;

// bool isprime(int n)
// {
//     if (n < 2)
//     {
//         return false;
//     }
//     bool check = true;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             check = false;
//         }
//     }
//     return check;
// }

// int main()
// {
//     fastio;
//     int n;
//     cin >> n;
//     bool check = false;
//     for (int i = 2; i < n; i++)
//     {
//         if (isprime(i))
//         {
//             if (n - i < 2)
//             {
//                 continue;
//             }
//             if (isprime(n - i))
//             {
//                 check = true;
//                 break;
//             }
//         }
//     }
//     cout << (check ? "sum of prime" : "not sum of prime");

//     return 0;
// }

// string s = "    hello  hj     ";
//     s = regex_replace(s, regex("^ +"), "");

// void removespaces(string &s)
// {
//     string temp = "";
//     string::iterator it;
//     string::reverse_iterator itr;
//     for (it = s.begin(); it != s.end(); it++)
//     {
//         if (*it != ' ')
//         {
//             break;
//         }
//     }
//     for (itr = s.rbegin(); itr != s.rend(); itr++)
//     {
//         if (*itr != ' ')
//         {
//             break;
//         }
//     }
//     s = temp;
// }

// replace(s.begin(), s.end(), ' ', 'a');
// i=10    10<10
// 012......9

// ifstream fin;
//     ofstream fout;
//     string line;
//     fin.open("student.txt");
//     fout.open("Data.txt");
//     // Execute a loop until EOF (End of File)
//     while (fin) {
//         // Read a Line from File
//         getline(fin, line);
//         // Print line in Console
//         cout << line << endl;
//         // save in the file
//         fout << line << endl;
//     }
//     fin.close();
//     fout.close();

// int a,b;
//     for (a = 0; a < 4; a++)
//     {
//         b=inc(a);
//     }
//     cout<<b;

//     char arr[9]="COMPUTER";
//     int a,b;
//     for(a=0,b=5;a<b;arr[a++]=arr[b--]);
//     cout<<arr;

//            * * * *     4
//            *     *
//            *     *
//            * * * *

//            * @ @ @ *   5     * @ @ *  4
//            @ * @ * @  `      @ * * @
//            @ @ * @ @         @ * * @
//            @ * @ * @         * @ @ *
//            * @ @ @ *

//                     *
//                   * *
//                 * * *
//               * * * *

// string s = "aman";
// int arr[]={1,2,3,4};
// for ( int c:arr ){
//     cout<<c<<endl;
// }

//     int n;
//     cin>>n;
//     for (int i = 1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             if(j>n-i){
//                 cout<<"* ";
//             }else{
//                 cout<<"$ ";
//             }
//         }
//         cout<<endl;
//     }

// if(n==10){
//     cout<<"if";
// }else if (n==13){
//     cout<<"else if";
// }else if (n==14){
//     cout<<"else if 1";
// }else if (n==16){
//     cout<<"else if 3";
// }else{
//     cout<<"else";
// }

// 4

//       *         * * * *
//     * *         *     *
//   * * *         *     *
// * * * *         * * * *

// 4

// *
// * *
// * * *
// * * * *

// 4

//       *
//     * *
//   * * *
// * * * *

// 5

// *
// * *
// * * *
// * *
// *

// 1
// 22
// 333
// 4444
// 55555

// * * * *
// *     *
// *     *
// * * * *
