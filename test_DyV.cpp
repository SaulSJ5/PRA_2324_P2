#include <iostream>
#include <vector>
#include "DyV.h" 
using namespace std;

int main(){

	std::vector<int> a{1, 2, 3, 4, 5};
	std::vector<int> b{2,5,8,7};

	int r,i;
	
	r = binaria(a,1,0,5);
	
	cout<<r<<endl;

	QuickSort(b,0,3);

	for(i=0;i<4;i++){
	  cout<<b[i]<<" ";
	}
	
	



return 0;
}
