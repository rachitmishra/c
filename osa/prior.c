#include<stdio.h>


 main()
{
 int n,b[10],w[10],tat[10],sum,i,j,h,t,tt;
 int stime[10],a[10],p[10];
 float avg=0;

 printf("\n\tPRIORITY SCHEDULING ALGORITHM");
 printf("\n\t*****************************************************\n");
 printf("\nEnter how many jobs: ");
 scanf("%d",&n);
 printf("\nEnter burst time & priority for corresponding job....\n");
 for(i=1;i<=n;i++)
 {
  printf("\nProcess %d:",i);
  scanf("%d %d",&b[i],&p[i]); 
	a[i]=i;
 }
	for(i=1;i<=n;i++)
		   for(j=i;j<=n;j++)
		      if(p[i]<p[j])
		      {
		      t=b[i]; tt=a[i];
		      b[i]=b[j]; a[i]=a[j];
		      b[j]=t;     a[j]=tt;
		      }

 w[1]=0;


 printf("\nprocess %d waiting time is 0",a[1]);
 for(i=2;i<=n;i++)
 {
  w[i]=b[i-1]+w[i-1];tat[i]=b[i]+w[i];
  printf("\nProcess %d waiting time: %d",a[i],w[i]);
  avg+=w[i];
  sum+=tat[i];
 }
 printf("\ntotal waiting time:%f",avg);
 printf("\n\nthe average waiting time is:%f\n",avg/n);
  printf("\n\nthe average turnaround time is:%f\n",sum/n);
 }