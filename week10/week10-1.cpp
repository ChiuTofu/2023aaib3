#include <iostream>
using namespace std;
int main(){
	int a;
	int ans=0;
	while (cin>>a,a!=0){
		if(a<0) continue;
		ans+=a;
	}
	cout << ans;
}
