#include <stdio.h> 

int main()
{
	int TY, TM, TD, BY, BM, BD, A1, A2;
	
	printf("당신의 생일을 8자리로 입력해 주세요. (EX. 20050101) : ");
	scanf("%04d%02d%02d", &BY, &BM, &BD);
	
	
	printf("\n오늘(계산할 기준일)을 8자리로 입력해 주세요. (EX. 20220101) : ");
	scanf("%04d%02d%02d", &TY, &TM, &TD);
	
	//세는 나이 
	A2 = TY - BY + 1;
	
	
	//만 나이 
	
	if (BM < TM) { //오늘의 월이 생일의 월보다 지났을 경우(생일 월이 지난 경우)	 
		A1 = TY - BY;
	}
	else if (BM > TM) { //오늘의 월이 생일의 월을 지나지 않았을 경우(생일 월이 지나지 않은 경우) 
		A1 = TY - BY - 1;
	}
	else {
		if (BD < TD) { //월이 같을때, 일이 지났을 경우 
			A1 = TY - BY;
		}
		else { //월이 같을때, 일이 지나지 않은 경우  
			A1 = TY - BY - 1;
		}
	}
	
	printf("\n당신의 만 나이는 %d 살 입니다. \n", A1);
	printf("당신의 세는 나이는 %d 살 입니다. \n", A2);
	
	return 0; 
}
 
