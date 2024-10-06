///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
/*
element num & key sathe (0 based e) element golo dewa takbe,apnake key er first occurace er index ta print korte hobe.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
 int n,key;
 cin>>n>>key;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
 int l=0,r=n-1,mid,idx=-1;
 while(l<=r)
 {
     mid=(l+r)/2;
     if(key == v[mid])
     {
         idx=mid;
         r=mid-1;///mid er dan pasher golo vad dichi key element takle o,jeno amra first occurance e jete pari.
     }
     else if(key<v[mid])
     {
         r=mid-1;
     }
     else
     {
         l=mid+1;
     }
 }
 if(idx== -1)
 {
     cout<<"Element not found"<<endl;
 }
 else
 {
     cout<<"Element found at index:"<<idx<<endl;
 }
/*Input:
12 11
Array:4 8 11 11 11 11 11 15 20 21 25 26
index:0 1 2  3  4  5  6  7  8  9 10  11
Output: Element found at index:2
*/

return 0;
}

