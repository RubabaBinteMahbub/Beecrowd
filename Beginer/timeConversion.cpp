#include<iostream>
using namespace std;
int main(){
long long x,hr=0,m=0,sec=0;
//garbage দেখালে প্রথমে চেক করবে কাউন্টার 0 দিয়ে initialize করেছো কিনা।
cin>>x;;

while(x>0){
if(x>=3600){
x-=3600;
hr++;
}
else if(x<3600 && x>=60){
x-=60;
m++;
}
else{
sec=x;
x=0;
}
}
cout<<hr<<":"<<m<<":"<<sec<<endl;
return 0;
}
