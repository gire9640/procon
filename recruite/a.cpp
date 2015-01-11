#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

#define INF 999999999

int main(){
	
	FILE *input, *output;
	
	if ((input = fopen("input (1).txt", "r")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* (3)�G���[�̏ꍇ�͒ʏ�A�ُ�I������ */
	}
	if ((output = fopen("output.txt", "w")) == NULL) {          // �I�[�v���Ɏ��s�����ꍇ
		printf("cannot open\n");         // �G���[���b�Z�[�W���o����
		exit(EXIT_FAILURE);	// �ُ�I��
 	}
 	

	int T;
	int N;
	
	fscanf(input, "%d\n", &T);
	for(int i= 0;i<T; i++){
		fscanf(input, "%d\n", &N);
		unsigned int sum[9] = {0,0,0,0,0,0,0,0,0};
		unsigned int v[500];
		char str[10];

		for(int j = 0;j<N;j++){
			
			fscanf(input, "%u\n",&v[j]);
			sprintf(str, "%u", v[j]);
			
			sum[str[0] - '1'] += v[j];
		}
		unsigned int ans = 0;
		for(int k = 0; k<9; k++){
			if( sum[k] > ans){
				ans = sum[k];
			}
		}
		
		fprintf(output, "%u\n", ans);
	}
	
	fclose(output);
	fclose(input);
	return 0;
}