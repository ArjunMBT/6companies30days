//Find max 10 numbers in a list having 10M entries.
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
     if (largest != i) {
        swap(arr[i], arr[largest]);
       heapify(arr, n, largest);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
    int count=0;
	for(int i=n-1;i!=0;i--)
{
    if(count==10)
    break;
    cout<<arr[i]<<" ";
    count++;
}
cout<<endl;
	
	return 0;
}
