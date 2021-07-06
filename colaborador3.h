void potencia(float (*m1)[5], int p, float (*r)[5])
{

cout<<"Calcular la potencia p de una ";
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
r[i][j]=0;
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
for(int k=0;k<5;k++)

r[i][j]+= m1[i][k]*m1[k][j];



}
