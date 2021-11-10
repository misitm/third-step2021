#include <stdio.h>
#include <math.h>
#define n 20
int score_sci[n]={65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70};
int score_eng[n]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
int comp(const int *l, const int *r){
	return *r-*l;
}
int main(){
	int sum_sci=0, sum_eng=0;
	for(int i=0;i<n;i++){
		sum_sci+=score_sci[i];
		sum_eng+=score_eng[i];
	}
	float avg_sci=(float)sum_sci/n;
	float avg_eng=(float)sum_eng/n;
	float sd_sci=0, sd_eng=0;
	for(int i=0;i<n;i++){
		sd_sci+=pow((float)score_sci[i]-avg_sci,2);
		sd_eng+=pow((float)score_eng[i]-avg_eng,2);
	}
	sd_sci=sqrt(sd_sci/n);
	sd_eng=sqrt(sd_eng/n);
	printf("理科 平均点:%f, 標準偏差:%f, 合計点:%d\n",avg_sci,sd_sci,sum_sci);
	printf("英語 平均点:%f, 標準偏差:%f, 合計点:%d\n",avg_eng,sd_eng,sum_eng);
	printf("理科 偏差値\n");
	for(int i=0;i<n;i++){
		printf("%f ",((float)score_sci[i]-avg_sci)*10/sd_sci+50);
	}
	printf("\n");
	printf("英語 偏差値\n");
	for(int i=0;i<n;i++){
		printf("%f ",((float)score_eng[i]-avg_eng)*10/sd_eng+50);
	}
	printf("\n");
	qsort(score_sci,n,sizeof(int),comp);
	qsort(score_eng,n,sizeof(int),comp);
	printf("ソート結果\n");
	printf("理科\n");
	for(int i=0;i<n;i++){
		printf("%d ",score_sci[i]);
	}
	printf("\n");
	printf("英語\n");
	for(int i=0;i<n;i++){
		printf("%d ",score_eng[i]);
	}
	printf("\n");
	return 0;
}
