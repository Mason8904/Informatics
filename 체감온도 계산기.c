#include <stdio.h>
#include <math.h>

int main()
{
	float tem, senTem, windms, windkmh;
	
	printf("����� �Է��� �ּ���. (����) : ");
	scanf("%f", &tem);
	printf("ǳ���� �Է��� �ּ���. (m/s) : ");
	scanf("%f", &windms);
	
	windkmh = windms*3.6;
	
	senTem = 13.12+0.6215*tem-11.37*pow(windkmh, 0.16)+0.3965*pow(windkmh, 0.16)*tem;
	
 
	if (senTem > tem && senTem - tem >= 3) {
		printf("\nü���µ��� %f �� �Դϴ�.", senTem);
		printf("\nü���µ��� �����ϴ�. �������� ���� �� ������ �����ϼ���.");
	} 
	else if (senTem < tem && tem - senTem >= 3) {
		printf("\nü���µ��� %f �� �Դϴ�.", senTem);
		printf("\nü���µ��� �����ϴ�. �������� �߿� �� ������ ������ �ѿ� ì�⼼��.");
	} 
	else {
		printf("\nü���µ��� %f �� �Դϴ�.", senTem);
	} 
	 
	return 0;
 } 
