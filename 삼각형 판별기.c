#include <stdio.h>


int main() {
	float A, B, C, max, min, mid;
	
	for ( ; ; ) { // ���ѹݺ�  
		printf("�ﰢ�� �� A�� ���̸� �Ǽ��� �Է��� �ּ���. (���α׷��� �����ҷ��� 0�� ���� �ּ���.) : ");
		scanf("%f", &A);
		
		printf("�ﰢ�� �� B�� ���̸� �Ǽ��� �Է��� �ּ���. (���α׷��� �����ҷ��� 0�� ���� �ּ���.) : ");
		scanf("%f", &B);
		
		printf("�ﰢ�� �� C�� ���̸� �Ǽ��� �Է��� �ּ���. (���α׷��� �����ҷ��� 0�� ���� �ּ���.) : ");
		scanf("%f", &C);
		
		if (A == 0 || B == 0 || C == 0) { //���ѹݺ� Ż��  
			printf("\n���α׷��� �����մϴ�.");
			break;
		}
		else if (A >= B && A >= C) { //max�� ���ϱ�  
			max = A; 
		}
		else if (B >= A && B >= C) {   
			max = B; 
		}
		else {
			max = C;
		}
		
		
		
		if (A <= B && A <= C) { //min�� ���ϱ�  
			min = A;
		}
		else if (B <= A && B <= C) { 
			min = B;
		}
		else { 
			min = C;
		}
		
		
		if (A >= B && A <= C) { //mid�� ���ϱ�
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
		 
		
		
		if (min + mid <= max) { //�ﰢ�� �������� �ʴ� ����  
			printf("\n�ﰢ���� �������� �ʽ��ϴ�. \n\n");
		}
		
		else if (max*max == mid*mid + min*min) { //�����ﰢ�� �������� (pow�Լ��� �����Լ�) 
			if (A == B) {
				printf("\nA = B �̰�, C�� ������ �����̵�ﰢ�� �Դϴ�. \n\n");
			} 
			else if (B == C) {
				printf("\nB = C �̰�, A�� ������ �����̵�ﰢ�� �Դϴ�. \n\n");
			} 
			else if (C == A) {
				printf("\nC = A �̰�, B�� ������ �����̵�ﰢ�� �Դϴ�. \n\n");
			} 
			else if (max == A) {
				printf("\nA�� ������ �����ﰢ�� �Դϴ�. \n\n");
			} 
			else if (max == B) {
				printf("\nB�� ������ �����ﰢ�� �Դϴ�. \n\n");
			} 
			else {
				printf("\nC�� ������ �����ﰢ�� �Դϴ�. \n\n");
			} 
		}
		
		else if (max*max == mid*mid + min*min) { //�����ﰢ�� ��������  
			if (mid == min && min == max && mid == max) {
				printf("\n���ﰢ�� �Դϴ�. \n\n");
			}
			else if (A == B) {
				printf("\nA = B �� �����̵�ﰢ�� �Դϴ�. \n\n");
			}
			else if (B == C) {
				printf("\nB = C �� �����̵�ﰢ�� �Դϴ�. \n\n");
			}
			else if (C == A) {
				printf("\nC = A �� �����̵�ﰢ�� �Դϴ�. \n\n");
			}
			else {
				printf("\n�����ﰢ�� �Դϴ�. \n\n");
			}
		} 
		
		else { //�а��ﰢ�� ���� ����  
			if (A == B) {
				printf("\nA = B �� �а��̵�ﰢ�� �Դϴ�. \n\n");
			}
			else if (B == C) {
				printf("\nB = C �� �а��̵�ﰢ�� �Դϴ�. \n\n");
			}
			else if (C == A) {
				printf("\nC = A �� �а��̵�ﰢ�� �Դϴ�. \n\n");
			}
			else {
				printf("\n�а��ﰢ�� �Դϴ�. \n\n");
			}
		}
		
	}
	return 0;

}
