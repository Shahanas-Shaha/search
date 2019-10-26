#include<stdio.h>
main()
{
        int a[100],p=0,s,n,i;
        printf("enter the number of elements :");
        scanf("%d",&n);
        printf("enter the  elements :");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("enter the element to search :");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
                if(a[i]==s)
                {
                        p=1;
                        break;
                }
        }
        if(p==1)
                printf("your search element %d is found\n",s);
        if(p==0)
                printf("your search element %d is not found\n",s);
}
                     
