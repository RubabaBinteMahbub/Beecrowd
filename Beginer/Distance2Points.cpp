##include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define ll long long
#define dl double
//typedef ব্যবহার করা ভালো।
#define endl '\n'
dl sq(dl x){
return x*x;
}
void solve(dl a,dl b,dl c,dl d){
   dl distance=sqrt(sq(c-a)+sq(d-b));
   cout<<fixed<<setprecision(4)<<distance<<endl;
}
int main(){
dl a,b,c,d;
cin>>a>>b>>c>>d;
solve(a,b,c,d);
return 0;
}
