
#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int arr[],int n,int k)
{
  unordered_map<int,int> m;
  int pre=0;
  int len=0;
  for(int i=0;i<N;i++){          
    pre+=a[i];
            
    if(pre==k)
    len=max(len,i+1);
            
    if(m.find(pre-k)!=m.end())
      len=max(len,i-m[pre-k]);
            
    if(m.find(pre)==m.end())
      m[pre]=i;
            
  }
    return len;
}

int main()
{
	int arr[] = {10, 5, 2, 7, 1, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 15;
	cout << "Length = "
		<< lenOfLongSubarr(arr, n, k);
	return 0;
}
