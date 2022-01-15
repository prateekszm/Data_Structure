#include <bits/stdc++.h>
using namespace std;
struct act
{
	int s, f;
void get(int i)
{
cout<<"Enter the start_time and finish_time of activity:"<<i+1<<endl;
cout<<"Start_Time:-\n";
cin>>s;
cout<<"Finish_time:-\n";
cin>>f;
}
};
bool actComp(act s1, act s2)
{
	return (s1.f < s2.f);
}
void print(act arr[], int n)
{
	sort(arr, arr+n, actComp);

	cout << "Activities Selected:-";
	int i = 0;
	cout << "(" << arr[i].s << ", " << arr[i].f << "), ";
	for (int j = 1; j < n; j++)
	{
	if (arr[j].s >= arr[i].f)
	{
		cout << "(" << arr[j].s << ", "
			<< arr[j].f << "), ";
		i = j;
	}
	}
}
int main()
{	
	// #ifndef ONLINE_JUDGE
	//     freopen("input.txt","r",stdin);
	//     freopen("output.txt","w",stdout);
	// #endif
	int n;
	cout<<"Enter the number of activities:-\n";
    cin>>n;
    act arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].get(i);
    }
	print(arr, n);
	return 0;
}