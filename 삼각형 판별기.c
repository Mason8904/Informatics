#include <stdio.h>


int main() {
	float A, B, C, max, min, mid;
	
	for ( ; ; ) { // 무한반복  
		printf("삼각형 변 A의 길이를 실수로 입력해 주세요. (프로그램을 종료할려면 0을 눌러 주세요.) : ");
		scanf("%f", &A);
		
		printf("삼각형 변 B의 길이를 실수로 입력해 주세요. (프로그램을 종료할려면 0을 눌러 주세요.) : ");
		scanf("%f", &B);
		
		printf("삼각형 변 C의 길이를 실수로 입력해 주세요. (프로그램을 종료할려면 0을 눌러 주세요.) : ");
		scanf("%f", &C);
		
		if (A == 0 || B == 0 || C == 0) { //무한반복 탈출  
			printf("\n프로그램을 종료합니다.");
			break;
		}
		else if (A >= B && A >= C) { //max값 구하기  
			max = A; 
		}
		else if (B >= A && B >= C) {   
			max = B; 
		}
		else {
			max = C;
		}
		
		
		
		if (A <= B && A <= C) { //min값 구하기  
			min = A;
		}
		else if (B <= A && B <= C) { 
			min = B;
		}
		else { 
			min = C;
		}
		
		
		if (A >= B && A <= C) { //mid값 구하기
			mid = A; 
		}
		else if (B >= A && B <= C) {
			mid = B; 
		}
		else if (C >= A && C <= B) { 
			mid = C; 
		}
		else if (A >= C && A <= B) { 
			mid = A; 
		}
		else if (B >= C && B <= A) { 
			mid = B; 
		}
		else {
			mid = C; 
		}
		 
		
		
		if (min + mid <= max) { //삼각형 성립하지 않는 조건  
			printf("\n삼각형이 성립하지 않습니다. \n\n");
		}
		
		else if (max*max == mid*mid + min*min) { //직각삼각형 성립조건 (pow함수는 제곱함수) 
			if (A == B) {
				printf("\nA = B 이고, C가 빗변인 직각이등변삼각형 입니다. \n\n");
			} 
			else if (B == C) {
				printf("\nB = C 이고, A가 빗변인 직각이등변삼각형 입니다. \n\n");
			} 
			else if (C == A) {
				printf("\nC = A 이고, B가 빗변인 직각이등변삼각형 입니다. \n\n");
			} 
			else if (max == A) {
				printf("\nA가 빗변인 직각삼각형 입니다. \n\n");
			} 
			else if (max == B) {
				printf("\nB가 빗변인 직각삼각형 입니다. \n\n");
			} 
			else {
				printf("\nC가 빗변인 직각삼각형 입니다. \n\n");
			} 
		}
		
		else if (max*max == mid*mid + min*min) { //예각삼각형 성립조건  
			if (mid == min && min == max && mid == max) {
				printf("\n정삼각형 입니다. \n\n");
			}
			else if (A == B) {
				printf("\nA = B 인 예각이등변삼각형 입니다. \n\n");
			}
			else if (B == C) {
				printf("\nB = C 인 예각이등변삼각형 입니다. \n\n");
			}
			else if (C == A) {
				printf("\nC = A 인 예각이등변삼각형 입니다. \n\n");
			}
			else {
				printf("\n예각삼각형 입니다. \n\n");
			}
		} 
		
		else { //둔각삼각형 성립 조건  
			if (A == B) {
				printf("\nA = B 인 둔각이등변삼각형 입니다. \n\n");
			}
			else if (B == C) {
				printf("\nB = C 인 둔각이등변삼각형 입니다. \n\n");
			}
			else if (C == A) {
				printf("\nC = A 인 둔각이등변삼각형 입니다. \n\n");
			}
			else {
				printf("\n둔각삼각형 입니다. \n\n");
			}
		}
		
	}
	return 0;

}
