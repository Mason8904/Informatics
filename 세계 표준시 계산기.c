#include <stdio.h>
#include <time.h>

int main ()
{
	int utc1,utc2;
	
	struct tm*t; //현재 시간 불러오기  
	time_t timer;
	
	timer = time(NULL);
	t = localtime(&timer);
	
	printf("원하는 나라의 UTC를 입력해 주세요. (ex. 9.0 or -5.5) : ");
	scanf("%d.%d", &utc1, &utc2); 
	
	if(utc2==0)
	{
		if(t->tm_hour-9+utc1>=24) //24시가 넘는다면  
		{
			printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1-24, t->tm_min); 
		} 
		else
		{
			printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1, t->tm_min); 
		}
	}
	else if (utc2=5) //UTC가 .5로 끝나서 30분을 더해야 할때  
	{
		if(t->tm_hour+utc1>=24)
		{
			if(t->tm_min<30) //분이 30분보다 작다면  
			{
				printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1-24, t->tm_min+30); 
			}
			else
			{
				printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1+1-24, t->tm_min); 
			}
		}
		else 
		{
			if(t->tm_min<30)
			{
				printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1, t->tm_min); 
			}
			else
			{
				printf("\n현재 한국 시각(UTC+9)은 %d시 %d분 입니다. UTC%d.%d의 시각은 %d시 %d분 입니다. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1+1, t->tm_min+30); 
			}
		}
		
	}
	else 
	{
		printf("잘못된 UTC 입니다.");
	}
	
	return 0; 
}
