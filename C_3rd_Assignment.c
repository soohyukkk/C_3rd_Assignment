#include <stdio.h>
int main()
{
	float length=1.0,result=0.0,sum=0.0;
	for(;;){
		result=length*length;
		sum+=result;
		printf("x가 %f 일때 넓이의 차이는 %f - %f = %f \n",
			length,sum,sum-result,result);
		length/=2;
		if(result<=0.000001)
			break;
	}
	printf("계산한 넒이의 합은 %f입니다.\n",sum-result);
}