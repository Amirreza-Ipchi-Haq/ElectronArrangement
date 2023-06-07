#include<cstdio>
#include<deque>
int main(){
	size_t atomicNumber;//Initialize the atomic number
	while(1){
		printf("Please enter the atomic number: "),scanf("%zu",&atomicNumber);//Prompt for the atomic number innput
		std::deque<unsigned long long>electron;//Initialize electrons
		for(unsigned long long i=0;atomicNumber;i++){//Place the electrons until none is left
			electron.push_back(0);//Push an empty layer to the rest of the electron's layers
			for(unsigned long long j=i/2+i%2,k=(unsigned long long)(i/2)*4+2;j<=i&&atomicNumber;j++,k-=4)//Place the electrons
				if(atomicNumber>k)
					electron[j]+=k,atomicNumber-=k;
				else
					electron[j]+=atomicNumber,atomicNumber=0;
		}
		for(size_t i=0;i<electron.size()&&electron[i];i++){//Output the layers
			printf("%zu: %u",i+1,electron[i]);//Output the current layer
			if(electron[i]==(i+1)*(i+1)*2)//Show if the current layer is full
				printf(" FULL");
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
