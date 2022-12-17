#include<stdio.h>
using namespace std;


int digit_sum(int x){
	
	int sum=0,tmp;
	
	while(x>0){
		tmp=x%10;
		sum+=tmp;
		x=x/10;
	}
	
	return sum;
}


int main(){
	// 자릿수의 합 
	int n, num, i, sum, max=-2147000000, res;
	scanf("%d",&n);
	 
	 for(i=0 ; a < n ; i++){
	 	scanf("%d", &num);
	 	sum = digit_sum(num);
	 	
	 	if(sum > max) {
	 		max=sum;
			res=num;
		}
	 	else if(sum==max){
	 		if(num > res) res=num;
		} 
		
		printf("%d\n",res);
	 }
	 
	 
   	return 0;
    
}