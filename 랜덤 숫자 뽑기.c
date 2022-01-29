#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int min, max;
	
	for ( ; ; ) { //무한반복  
		printf("범위의 최솟값을 입력해 주세요.(그만 둘려면 둘 다 0을 입력하십시오.) : ");
		scanf("%d", &min);
		printf("범위의 최댓값을 입력해 주세요.(그만 둘려면 둘 다 0을 입력하십시오.) : ");
		scanf("%d", &max);
	
	
	srand (time(NULL));
	
		if (min == 0 && max == 0) {
			printf("\n프로그램을 정지합니다. ");
			break; // 탈출  
		} 
		else {
		printf("뽑힌 숫자는 %d 입니다. \n\n", rand() % (max + 1 - min ) + min ); //범위 내의 난수 출력  
		}
	}
	
	
	return 0;
}
