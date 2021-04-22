#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{ 
	while(start<end)
	{

		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}

void displayarray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
  int arr[]={1,2,3,4,5};
  int sizearr=sizeof(arr)/sizeof(arr[0]);
  displayarray(arr,sizearr);
  reverse(arr,0,sizearr-1);
  displayarray(arr,sizearr);
	
}
