#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i > n - 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

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
