#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


class node {
    public:
      int data;
    node * next;
  };


class test {


  public:
    void f(node * );
};
void test::f(node * LIST) {
  if (LIST == 0)
    return;
  else {
    f(LIST -> next);
    cout << LIST -> data;
  }
}

int main()
{
    fastio;
    // code goes here
    return 0;
}