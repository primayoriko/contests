/**
 * Contest : IDEAFUSE 2018 Qualification
 * Team    : Arurange Code Party
 * Author  : Jehian Norman Saviero
 * Problem : F - Thumb Up Thumb Down Cute Cat
 */

#include <bits/stdc++.h>

// MACROS SAMPAH
#define Jehian using
#define Norman namespace
#define Saviero std

Jehian Norman Saviero;

// MACROS TYPE
typedef long l;
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef double ld;
typedef pair<int,int> pi;
typedef pair<l,l> pl;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<l> vl;
typedef vector<ll> vll;

// MACROS FOR ATTRIBUTE
#define fi first
#define se second

// MACROS FOR FUNCTION AND METHOD
#define mp make_pair
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define RESET(x) memset((x), 0, sizeof(x))
#define SET(x,y) for (int _qwe = sizeof(x)/sizeof(x[0]); _qwe; ) x[--_qwe] = (y)
#define ALL(x) (x).begin(), (x).end()
#define ALLSIZE(x,n) (x), (x)+(n)
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))

// MACROS READ INPUT
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%ld", &x)
#define scll(x) scanf("%lld", &x)
#define scul(x) scl(x)
#define scull(x) scll(x)

int main(){
	int A, B;
	sci(A), sci(B);
	int X = (A + B)/2;
	int Y = (A - B)/2;
	puts(X + Y == A && X - Y == B && X >= 0 && Y >= 0 ? "YES" : "NO");
	return 0;
}