#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	
	if(a>=800){//�ж�Сʱ�Ƿ����8 
		if(a%100<60){// �жϷ��Ƿ�С��60 
			b=a-800;
		}
	}else{
		if(a>=100){//�ж�Сʱ�Ƿ����1 
			if(a%100<60){// �жϷ��Ƿ�С��60 
				b=(a/100-8+24)*100+a%100;
			}
		}else{
			b=16*100+a;
		}
	}
	printf("%d",b);
	return 0;
} 
