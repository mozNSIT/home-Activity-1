#include <iostream>

using namespace std;

void insertElements(int arr[],int size){
	for (int i = 0; i < size; ++i)
	{
		cout<<"Enter "<<i+1<<"th Element: ";
		cin>>arr[i];
	}

}

void display(int arr[], int size){
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<endl;
	}
}

void insertionSort(int arr[],int size){
	for(int i=1;i<size;i++)
		{
			for(int j=i;j>0;j--)
			{
				if(arr[j-1]>arr[j])
				{
					int temp=arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=temp;
				}
				else
					break;
			}
		}
}



int main(int argc, char const *argv[])
{
	cout<<"Enter size of array: ";
	int size;
	cin>>size;
	int arr[size];
	insertElements(arr,size);
	insertionSort(arr,size);
	cout<<"Sorted Elements: \n";
	display(arr,size);

	return 0;
}