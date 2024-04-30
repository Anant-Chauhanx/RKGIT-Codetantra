#include<stdio.h>
int main()
{
	int i,j,n,t,turn[20],burst[20],p[20],wt[20],c[20];
	float await,aturn,twait=0,tturn=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the process no, burst and arrivaltime:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
        scanf("%d",&burst[i]);
        scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{            
	if(p[i]>p[j])
	{                
		t=p[i];
		p[i]=p[j];                
		p[j]=t;                
		t=burst[i];                
		burst[i]=burst[j];                
		burst[j]=t;                
		t=c[i];                
		c[i]=c[j];                
		c[j]=t;            
	}        
}     
for(i=0;i<n;i++)     
{         
	if(i==0){       
		{      
			wt[i]=0;             
			turn[i]=burst[i];         
		}       
	}  
	else         
	{             
		turn [i]=turn[i-1]+burst[i];             
		wt [i]=turn[i]-burst[i];             
		twait=twait+wt[i];             
		tturn=tturn+turn[i]; }  
}await=twait/n;     
aturn=(tturn)/n;     
printf("pno\tbtime\tatime\twtime\tttime");     
for(i=0;i<n;i++) 
{          
	printf ("\n%d\t%d\t%d\t%d\t%d",c[i],burst[i],p[i],wt[i],turn[i]);      
}      
printf ("\nThe average waiting time is:%f",await);      
printf ("\nThe average turn around time is:%f", aturn );
}
