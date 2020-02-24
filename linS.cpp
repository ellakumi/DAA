#include <iostream>
using namespace std;


int linSearch(int arr[],int x, int y)
	{	
		x = x - 1;
		if(x <= 0){
			return -1;
		}
		else if(arr[x] == y){
			return x;
		}
		else{
			linSearch(arr, x, y);
		}
}
	
int main(){
	cout << "Enter size of aray";
	int size;
	cin >> size;
	int array[size];
	int a;
	cout<<" Enter any random numbers\n" ;
	for(a=0;a<size;a++){
		cin >> array[a];
	}
	int y ;
	 cout<<"Enter the number of your search\n "<<endl;
	 cin>> y;
	int output =  linSearch(array,size, y);
	 
	 if(output==-1)
	 	cout <<"Input can not be found";
	 else 
	 	cout<< "The position of search item is " << output;
	return 0;
	
}




