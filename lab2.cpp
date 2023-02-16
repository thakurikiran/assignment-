#include<stdio.h>
void diff();
void sym();
void uni();
void inter();

int main(){
	int a;
	printf("Enter 1 for union.");
	printf("\nEnter 2 for intersection.");
	printf("\nEnter 3 for difference.");
	printf("\nEnter 4 for Symmetric difference.\n");
	scanf("%d",&a);
	if(a==1){
	
   		uni();
	   }
	else if(a==2){
   	inter();
   }
    else if(a==3){
		diff();
    }
	else if(a==4){
		sym();
	}
	else
		{
			printf("\nEnter your decision");
		}
	return 0;	
}

void diff(){
	int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    printf("Enter size of set A\n");
    scanf("%d",&n1);
    printf("Enter element of set\n");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B\n");
    scanf("%d",&n2);
    printf("Enter element of set\n");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
   


    

    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
         
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
   
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
        
            for(l=0;l<m;l++) 
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
     printf("Difference of A-B is:-\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is:-\n");
     for(i=0;i<m;i++)
     {
         printf("%d ",d[i]);
     }
}
void sym(){
	int a[10],b[10],c[10],d[10],m=0,k=0,n=0,n1,n2,l,i,j,sy[100];
    printf("Enter size of set A\n");
    scanf("%d",&n1);
    printf("Enter element of set\n");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B\n");
    scanf("%d",&n2);
    printf("Enter element of set\n");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
   
    
   
    
    for( i=0;i<n1;i++)
    {
      
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
    
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
    
    
    
    for(i=0;i<k;i++)
    {
        sy[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        sy[n]=d[i];
        n++;
    }
    
    printf("\nsymmetric Difference of sets is:-\n");
    for(i=0;i<n;i++)
     printf("%d ",sy[i]);
}

void uni(){
	int a[10],b[10],i,c[10],d[10],j,k=0,n1,n2,l=0,F[100],G[100];

  

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

 

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);



   
   for(i=0;i<n1;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }

   
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
	
}
void inter(){
	int a[10],b[10],i,c[10],d[10],j,k=0,n1,n2,l=0,F[100],G[100];
	printf("Enter size of set A\n");
    scanf("%d",&n1);
    printf("Enter element of set\n");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B\n");
    scanf("%d",&n2);
    printf("Enter element of set\n");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
   	

    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                l++;
            }
         }
        
    }
    
  
    printf("\nIntersection of set A and set B is:-\n");
    for(i=0;i<l;i++)
      printf("%d ",c[i]); 
}