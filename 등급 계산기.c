#include <stdio.h>
#include <stdlib.h>

int CalGrade(float per[], int j);

int main()
{
	int i, j;
	int alltime = 0, allmix = 0;
	float average;

	printf("총 과목 개수를 입력해 주세요. : ");
	scanf("%d", &i);

	int *rank = (int*)malloc(sizeof(int) * i);
	int *samerank = (int*)malloc(sizeof(int) * i);
	int *people = (int*)malloc(sizeof(int) * i);
	int *time = (int*)malloc(sizeof(int) * i);
	int *subgrade = (int*)malloc(sizeof(int) * i);
	int *mix = (int*)malloc(sizeof(int) * i);
	float *per = (float*)malloc(sizeof(float) * i);
	float *midrank = (float*)malloc(sizeof(float) * i);
	char **sub = (char*)malloc(sizeof(char) * i);
	
	
	
	for (j = 0;j < i;j++)
	{
		printf("과목명, 단위수, 석차, 동석차수, 이수자수 순으로 입력해주세요. (국어 4 10 1 180) : ");
		scanf("%s %d %d %d %d", &sub[j][100], &time[j], &rank[j], &samerank[j], &people[j]);


		if (samerank[j]==0)
		{
			per[j]=rank[j]/people[j]*100;

			printf("\n%s %d %d %d %d", sub[j][100], time[j], rank[j], samerank[j], people[j]);

		}
		else
		{
			midrank[j]=rank[j]+(samerank[j]-1)/ 2;
			per[j] = midrank[j] / people[j] * 100;

			printf("\n%s %d %d %d %d", sub[j][100], time[j], midrank[j], samerank[j], people[j]);
		}
		subgrade[j] = CalGrade(per, j);

		mix[j] = subgrade[j] * time[j];

		printf("\n%s 과목의 등급은 %d등급 입니다. \n", sub[j][100], subgrade[j]);

		alltime += time[j];
		allmix += mix[j];
	}

	average = allmix / alltime;

	printf("평균 등급은 %.2f등급 입니다.", average);
	
		
	
	
	free(rank);
	free(samerank);
	free(people);
	free(time);
	free(subgrade);
	free(mix);
	free(per);
	free(midrank);
	free(sub);

	return 0;

}



int CalGrade(float per[], int i)
{

	int subgrade, j;

	for(j=0;j<i;j++)
	{
		if (per[j] <= 4)
		{
			subgrade = 1;
			return subgrade;
		}
		else if (per[j]  > 4 && per[j]  <= 11)
		{
			subgrade = 2;
			return subgrade;
		}
		else if (per[j]  > 11 && per[j]  <= 23)
		{
			subgrade = 3;
			return subgrade;
		}
		else if (per[j]  > 23 && per[j]  <= 40)
		{
			subgrade = 4;
			return subgrade;
		}
		else if (per[j]  > 40 && per[j]  <= 60)
		{
			subgrade = 5;
			return subgrade;
		}
		else if (per[j]  > 60 && per[j]  <= 77)
		{
			subgrade = 6;
			return subgrade;
		}
		else if (per[j]  > 77 && per[j]  <= 89)
		{
			subgrade = 7;
			return subgrade;
		}
		else if (per[j]  > 89 && per[j]  <= 96)
		{
			subgrade = 8;
			return subgrade;
		}
		else
		{
			subgrade = 9;
			return subgrade;
		}
	}
}
	
