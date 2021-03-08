#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	string arr[n];
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		arr[i]=s;
	}

	map<string,int> m1;

	for(int i=0;i<n;i++)
	{
		if(m1.find(arr[i])==m1.end())
		{
			cout<<"OK"<<endl;
			m1[arr[i]]++;
		}
		else
		{
			cout<<arr[i]<<m1[arr[i]]<<endl;
			m1[arr[i]]++;
		}
	}

}