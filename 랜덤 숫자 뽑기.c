#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int min, max;
	
	for ( ; ; ) { //���ѹݺ�  
		printf("������ �ּڰ��� �Է��� �ּ���.(�׸� �ѷ��� �� �� 0�� �Է��Ͻʽÿ�.) : ");
		scanf("%d", &min);
		printf("������ �ִ��� �Է��� �ּ���.(�׸� �ѷ��� �� �� 0�� �Է��Ͻʽÿ�.) : ");
		scanf("%d", &max);
	
	
	srand (time(NULL));
	
		if (min == 0 && max == 0) {
			printf("\n���α׷��� �����մϴ�. ");
			break; // Ż��  
		} 
		else {
		printf("���� ���ڴ� %d �Դϴ�. \n\n", rand() % (max + 1 - min ) + min ); //���� ���� ���� ���  
		}
	}
	
	
	return 0;
}
