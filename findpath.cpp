#include<iostream>
using namespace std;
int count=0;
void findpath(int posx,int posy,int size,int arr[10][10])
{
	if(posx==(size-1)&&posy==(size-1))
	{
		count++;
		for(int i=0;i<size;++i)
		{
			for(int j=0;j<size;++j)
			{	cout<<arr[i][j];
			}
			cout<<endl;
		}
	
		return;
	}	
	if(arr[posx][posy]==-1)
	{
		return;
	}
	arr[posx][posy]=-1;
	for(int i=0;i<size;++i)
		{
			for(int j=0;j<size;++j)
			{	cout<<arr[i][j];
			}
			cout<<endl;
		}
	cout<<"This is fuck"<<endl;
	if((posx+1)<size&&arr[posx+1][posy]!=1)
		findpath(posx+1,posy,size,arr);
	if((posx-1)>=0&&arr[posx-1][posy]!=1)
		findpath(posx-1,posy,size,arr);
	if((posy+1)<size&&arr[posx][posy+1]!=1)
		findpath(posx,posy+1,size,arr);
	if((posy-1)>=0&&arr[posx][posy-1]!=1)
		findpath(posx,posy-1,size,arr);


}

int main(){
	int arr[10][10];
	int n;
	cout<<"Enter the number of rows and  column:";
	cin>>n;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>arr[i][j];
	findpath(0,0,n,arr);
	cout<<count;
}