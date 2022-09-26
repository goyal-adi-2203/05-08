#include<stdio.h>
int main()
{
      int i,j,n,N,box;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            scanf("%d",&N);
            int B[N];
            for(j=0;j<N;j++)
            {
                  scanf("%d",&B[j]);
            }
            for(j=0;j<N;j++)
            {
                  if(B[1]==B[N-1] && N!=2)
                  {box=1;}
                  {if(N==2 && B[0]==B[N-1])
                  {box=1;}
                  else if(N==2 && B[0]!=B[N-1])
                  {box=0;}}
                  if(N==3 && B[0]!=B[N-1])
                  {box=0;}
            }
            if(box==1)
            {printf("YES\n");}
            if(box==0)
            {printf("NO\n");}
      }
      return 0;
}
/*#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&b[j]);
	    }
	    a[0]=1;
	    for(int j=0;j<n-1;j++)
	    {
	        if(b[j]==0)
	        a[j+1]=a[j];
	        else
	        a[j+1]=a[j]+1;
	    }
	    if((a[0]+a[n-1])%2==b[n-1])
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}*/