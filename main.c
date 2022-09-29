#include <stdio.h>
int main(){
	int n = 0, N;
	scanf("%d", &N);
	n = N;
	int num = 0, num3 = 0;
	while(n >= 0){
		n -= 5;
		num++;
	}
	n += 5;
	num--;
	while(1){
		if(n > N){
			printf("-1\n");
			break;
		}
		if(n % 3 == 0){
			num3 = n / 3;
			printf("%d\n", num3 + num);
			break;
		}
		else{
			n += 5;
			num--;
			continue;
		}
		
	}
	return 0;
}
