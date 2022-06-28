#include <iostream>
using namespace std;

int main(){
	int a[4] = {0,10,20,30};
	
	cout<<a[3]<<endl;
	cout<<*(a + 3)<<endl;
	cout<<*(3+a)<<endl;
	cout<<3[a]<<endl;
	
	return 0;
}
