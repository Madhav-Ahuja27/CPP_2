#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a = 0;
	int b = 1;
	cout<<a<<endl<<b<<endl;
	for(int i=1;i<=n;i++){
		cout<<a+b<<endl;
		int c = a + b;
		a=b;
		b=c;
	}
}
