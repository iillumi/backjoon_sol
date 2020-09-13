#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int cal[41]={0,1,1,0};
	
	for (int i=3; i<41;i++){
		cal[i]=cal[i-1]+cal[i-2];
	}
	
	scanf("%d",&a);
	
	for (int i=0;i<a;i++){
		scanf("%d",&b);
		if (b==0) cout<<"1 0\n";
		else if (b==1) cout << "0 1\n";
		else cout << cal[b-1]<<" "<<cal[b]<<"\n";
	}
	
	return 0;
}
