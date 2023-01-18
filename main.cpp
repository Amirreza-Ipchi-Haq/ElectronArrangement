#include<vector>
#include<iostream>
unsigned long long n;
void a(){
	std::cout<<"Please enter the Atomic Number: ",std::cin>>n;
	if(n==1){
		std::cout<<"1: 1\n\n";
		return;
	}
	std::vector<unsigned long long>e;
	for(unsigned long long i=0;n;i++){
		e.push_back(0);
		for(unsigned long long j=i/2+i%2,k=(unsigned long long)(i/2)*4+2;j<=i&&n;j++,k-=4)
			if(n>k)
				e[j]+=k,n-=k;
			else
				e[j]+=n,n=0;
	}
	for(unsigned long long i=0;i<e.size()&&e[i];i++){
		std::cout<<i+1<<": "<<e[i];
		if(e[i]==(i+1)*(i+1)*2)
			std::cout<<" FULL";
		std::cout<<'\n';
	}
	std::cout<<'\n';
	return;
}
int main(){
	while(1)
		a();
	return 0;
}
