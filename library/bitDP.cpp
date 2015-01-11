int n, m, a, b;
int t[MAX_N];
int d[MAX_N][MAX_N];
// dp[S][v] := �c���Ԍ�S�A���݈ʒuv�Ƃ�����ԂɎ���ŏ��R�X�g
double dp[1 << MAX_N][MAX_M];
void solve(){
	for(int i = 0; i < 1 << n; i++){
		fill(dp[i], dp[i] + m, INF);
	}
	dp[(1 << n) ? 1][a - 1] = 0;
	double res = INF;
}

for(int S = (1 << n) ? 1; S >= 0; S--){ // ��Ԍ����Ȃ��Ȃ�܂�
	res = min(res, dp[S][b ? 1]);
	for(int v = 0; v < m; v++){ // �ʒuv
		for(int i = 0; i < n; i++)
			 if(S >> i & 1){ // i�Ԗڂ̏�Ԍ�������
				for(int u = 0; u < m; u++){
					if(d[v][u] >= 0){ // v����u�֍s����!
						dp[S & ~(1 << i)][u] = min(dp[S & ~(1 << i)][u], dp[S][v] + (double)d[u][v]/t[i]);
					}
				}
			}
		}
	}
}

