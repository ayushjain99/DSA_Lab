#include <iostream>
using namespace std;

const int MAX = 10;

class array
{
	private:
		int arr[MAX];
		int count;
	
	public:
		array();
		void add(int item);
		void binsearch(int num);
};
//Initializes data members
array :: array()
{
	count = 0;
	for(int i=0 ; i<MAX ; i++)
		arr[i] = 0;
}

//adds a new element to the array
void array :: add(int item)
{
	if(count < MAX){
		arr[count] = item;
		count++;
	}else{
		cout<<"\nArray is FULL"<<endl;
	}
}

//Iterative Binary Search
void array :: binsearch(int num)
{
	int mid,lower=0,upper=count-1,flag=1;
	
	while(lower<=upper){
		mid = (lower + upper)/2;
		if(arr[mid] == num){
			cout<<"\nThe element "<<num<<" is present at index "<<mid<<endl<<endl;
			flag = 0;
			break;
			
		}else if(arr[mid]>num)
			upper = mid-1;
		else
			lower = mid+1;
	}
	
	if(flag)
		cout<<"\nElement "<<num<<" is NOT present in the list\n"<<endl;
}


int main(void)
{
	array a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(9);
	a.add(11);
	a.add(13);
	a.add(17);
	a.add(25);
	a.add(57);
	a.add(90);
	
	int num;
	cout<<"\nEnter number to search in list : ";
	cin>>num;
	a.binsearch(num);

	return 0;
}

