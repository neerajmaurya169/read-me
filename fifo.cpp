#include<stdio.h>

int main()
{
int at[20],wt[20],et[20],i;



printf("\nEnter Process Arrival Time\n");
for(i=0;i<3;i++)
{
printf("P[%d]:",i+1);
scanf("%d",&at[i]);
}
printf("\nEnter Process Execution Time\n");
for(i=0;i<3;i++)
{
printf("P[%d]:",i+1);
scanf("%d",&et[i]);
} 
wt[0]=0; //waiting time for first process is 0

//calculating waiting time


printf("\nProcess\t\tArrival Time\tWaiting Time\t Execution time");

//calculating turnaround time
if(at[0]<at[1] && at[0]<at[2])
{	wt[0]=0;
printf("\nP[%d]\t\t%d\t\t%d\t%d",1,at[0],wt[0],et[0]);
if(at[1]<at[2])
{
wt[1]=at[0];
wt[2]=wt[1]+at[1];

printf("\nP[%d]\t\t%d\t\t%d\t\t%d",2,at[1],wt[1],et[1]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",3,at[2],wt[2],et[2]);	
printf("Total Execution time :-%d",et[2]-at[0]);
}
else
{
wt[2]=at[0];
wt[1]=wt[2]+at[2];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",3,at[2],wt[2],et[2]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",2,at[1],wt[1],et[1]);
printf("Total Execution time :-%d",et[1]-at[0]);
}
}
if(at[1]<at[0]&& at[1]<at[2])
{	
wt[1]=0;
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",2,at[1],wt[1],et[1]);

if(at[0]<at[2])
{
wt[0]=at[1];
wt[2]=wt[0]+at[0];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",1,at[0],wt[0],et[0]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",3,at[2],wt[2],et[2]);
printf("Total Execution time :-%d",et[2]-at[1]);	
}
else
{
wt[2]=at[1];
wt[0]=wt[2]+at[2];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",3,at[2],wt[2],et[2]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",1,at[0],wt[0],et[0]);
printf("Total Execution time :-%d",et[0]-at[1]);
}
}
if(at[2]<at[1] && at[2]<at[0])
{
wt[2]=0;
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",3,at[2],wt[2],et[2]);	
if(at[0]<at[1])
{
wt[0]=at[2];
wt[1]=wt[0]+at[0];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",1,at[0],wt[0],et[0]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",2,at[1],wt[1],et[1]);
printf("Total Execution time :-%d",et[1]-at[2]);

}
else
{
wt[1]=at[2];
wt[0]=wt[1]+at[1];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",2,at[1],wt[1],et[1]);
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",1,at[0],wt[0],et[0]);
printf("\n\nTotal Execution time :-%d",et[0]-at[2]);
}

}
return 0;
}
