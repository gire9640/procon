//x[j-l]: x���W
//y[j-l]: y���W
//�_j�Ɠ_k��ʂ钼��: ax+by+c=0

a = y[k] - y[j];
b = x[j] - x[k];
c = x[k] * y[j] - x[j] * y[k];
s = abs(a * x[l] + b * y[l] + c) / 2.0; //�ʐς�XXXX.0��XXXX.5