#include <stdio.h>
#include <time.h>

int main ()
{
	int utc1,utc2;
	
	struct tm*t; //���� �ð� �ҷ�����  
	time_t timer;
	
	timer = time(NULL);
	t = localtime(&timer);
	
	printf("���ϴ� ������ UTC�� �Է��� �ּ���. (ex. 9.0 or -5.5) : ");
	scanf("%d.%d", &utc1, &utc2); 
	
	if(utc2==0)
	{
		if(t->tm_hour-9+utc1>=24) //24�ð� �Ѵ´ٸ�  
		{
			printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1-24, t->tm_min); 
		} 
		else
		{
			printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1, t->tm_min); 
		}
	}
	else if (utc2=5) //UTC�� .5�� ������ 30���� ���ؾ� �Ҷ�  
	{
		if(t->tm_hour+utc1>=24)
		{
			if(t->tm_min<30) //���� 30�к��� �۴ٸ�  
			{
				printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1-24, t->tm_min+30); 
			}
			else
			{
				printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1+1-24, t->tm_min); 
			}
		}
		else 
		{
			if(t->tm_min<30)
			{
				printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1, t->tm_min); 
			}
			else
			{
				printf("\n���� �ѱ� �ð�(UTC+9)�� %d�� %d�� �Դϴ�. UTC%d.%d�� �ð��� %d�� %d�� �Դϴ�. ", t->tm_hour, t->tm_min, utc1, utc2, t->tm_hour-9+utc1+1, t->tm_min+30); 
			}
		}
		
	}
	else 
	{
		printf("�߸��� UTC �Դϴ�.");
	}
	
	return 0; 
}
