#include <stdio.h>
#include <math.h>

int main()
{
	float tem, senTem, windms, windkmh;
	
	printf("기온을 입력해 주세요. (섭씨) : ");
	scanf("%f", &tem);
	printf("풍속을 입력해 주세요. (m/s) : ");
	scanf("%f", &windms);
	
	windkmh = windms*3.6;
	
	senTem = 13.12+0.6215*tem-11.37*pow(windkmh, 0.16)+0.3965*pow(windkmh, 0.16)*tem;
	
 
	if (senTem > tem && senTem - tem >= 3) {
		printf("\n체감온도는 %f 도 입니다.", senTem);
		printf("\n체감온도가 높습니다. 생각보다 더울 수 있으니 참고하세요.");
	} 
	else if (senTem < tem && tem - senTem >= 3) {
		printf("\n체감온도는 %f 도 입니다.", senTem);
		printf("\n체감온도가 낮습니다. 생각보다 추울 수 있으니 가벼운 겉옷 챙기세요.");
	} 
	else {
		printf("\n체감온도는 %f 도 입니다.", senTem);
	} 
	 
	return 0;
 } 
