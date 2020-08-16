//Author: Jesus Minjares 
#ifndef MACRO_H
#define MACRO_H
#include <iostream>
using namespace std;
#define debs(x) cout << #x << ": " << x << endl;
#define getmax(a,b) ((a>b) ? (a) : (b) )
#define getmin(a,b) ((a<b) ? (a) : (b) )
#define add(a,b) (a + b)
#define sub(a,b) (a - b)
#define even(n) (((n%2) == 0) ? (true) : (false))
#define odd(n)  (((n%2) == 0) ? (false) : (true))
#define multi(a,b) (a * b)
#define ABS(num) ((num) < 0 ? -(num) : (num))
#define fo(i,n) for(i = 0; i < n; i++)
#endif
