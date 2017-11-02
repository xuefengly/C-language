#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	
	if(a>=800){//判断小时是否大于8 
		if(a%100<60){// 判断分是否小于60 
			b=a-800;
		}
	}else{
		if(a>=100){//判断小时是否大于1 
			if(a%100<60){// 判断分是否小于60 
				b=(a/100-8+24)*100+a%100;
			}
		}else{
			b=16*100+a;
		}
	}
	printf("%d",b);
	return 0;
} 
