#include <stdio.h>
int main()
{
	float length=1.0,result=0.0,sum=0.0;
	for(;;){
		result=length*length;
		sum+=result;
		printf("x�� %f �϶� ������ ���̴� %f - %f = %f \n",
			length,sum,sum-result,result);
		length/=2;
		if(result<=0.000001)
			break;
	}
	printf("����� ������ ���� %f�Դϴ�.\n",sum-result);
}