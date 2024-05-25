#include <iostream>
#include <math.h>
#include <vector>
#include <list>
using namespace std;
#define ll long long
// when a function calls itself until a specific condition is met
// if no condition then stack overflow as function call is waiting
// we need some base condition to stop it or the segmentation fault
// stack space is where unexecuted functions go. Recursion tree
// declaring variable outside main is global and take input inside main.
// sc = stack space waiting in recursions
// Backtracking in recursion - print statement after function call
int cnt = 0;
int n;
void name(int x, string y)
{
    if(cnt == n)
    {
        return;
    }
    cout << y << endl;
    cnt++ ;
    name(cnt, y);
}
void name1(int i, int n, string y)
{
    if(i > n)
    {
        return;
    }
    cout << y << endl;
    name1(i+1,n, y);
}
void number(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout << i << endl;
    i++ ;
    number(i,n);
}
void numberr(int i, int n)
{
   if(i == 0)
    {
        return;
    }
    cout << i << endl;
    i-- ;
    numberr(i,n);
}

int main()
{
   string nam;
   cin >> n;
   cin >> nam;
   // name(n, nam);
   // name1(1, n, nam);
   // number(1, n);
   // numberr(n, n); 
} 
