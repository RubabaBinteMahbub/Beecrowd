#include<iostream>
using namespace std;
#define ll long long
int main(){
ll num,year=0,month=0,day;
cin>>num;
while(num>0){
if(num>=365){
num-=365;
year++;
}
else if(num<365 && num>=30){
num-=30;
month++;
}
else{
day=num;
num=0;//এটা না দিলে infinite loop হয়ে যাবে। কারণ num কখনো 0 হবেনা। এটা হলে input নেয়, কিন্তু কোনো output দেখায় না।
}
}
cout<<"Years = "<<year<<endl;
cout<<"Months = "<<month<<endl;
cout<<"Days = "<<day<<endl;
return 0;
}
