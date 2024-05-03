#include<iostream>
using namespace std;

int main() {
int n,i;
cin>>n;
int res=0,arr[n];
for( i=0;i<n;i++)
{cin>>arr[i];
res=res^arr[i];}
i=0;
n=res;
while(n)
{
if(n & 1)
break;
n=n>>1;
i++;
}
int mask=1<<i,num1=0;
for(i=0;i<n;i++)
if(arr[i] & mask)
num1=num1 ^ arr[i];
res=res ^ num1;
cout<<res<<" "<<num1;

return 0;
}