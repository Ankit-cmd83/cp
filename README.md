# cp
This repo I am creating to store some block of code which can be beneficial for contests
/*.............................. // author ankit //.................................. */

#pragma once
#include <bits/stdc++.h>
using namespace std;
#define deb(x...) cerr << "[" << #x << "] = "; _print(x); cerr << endl;

void _print(int x)         { cerr << x; }
void _print(long x)        { cerr << x; }
void _print(long long x)   { cerr << x; }
void _print(unsigned x)    { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x)       { cerr << x; }
void _print(double x)      { cerr << x; }
void _print(long double x) { cerr << x; }
void _print(char x)        { cerr << '\'' << x << '\''; }
void _print(const char* x) { cerr << '\"' << x << '\"'; }
void _print(const string& x) { cerr << '\"' << x << '\"'; }
void _print(bool x)        { cerr << (x ? "true" : "false"); }

template<typename T, typename V> void _print(const pair<T, V>& x);
template<typename T> void _print(const T& x);

template<typename T, typename V>
void _print(const pair<T, V>& x) {
    cerr << "("; _print(x.first); cerr << ", "; _print(x.second); cerr << ")";
}
template<typename T>
void _print(const T& x) {
    int f = 0;
    cerr << "{";
    for (auto& i : x) cerr << (f++ ? ", " : ""), _print(i);
    cerr << "}";
}

