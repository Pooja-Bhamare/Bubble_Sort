/*Bubble Sort in C programming language*/

int main()
{
    int arr[100],n,i,j,swap,x,y;
    printf("Enter number of elements to insert : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

void low(){
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    printf("Start from lowest :\n\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}

void high(){
    for(x=0;x<n-1;x++)
    {
        for (y=0;y<n-x-1;y++)
        {
            if(arr[y]<arr[y+1])
            {
                swap=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=swap;
            }
        }
    }
    printf("\nStart from highest :\n\n");
    for(x=0;x<n;x++)
    printf("%d\n",arr[x]);
}

low();
high();

    return 0;
}
