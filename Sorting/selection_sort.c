#include<stdio.h>

//declaration of display function
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}


void selection_sort(int array[], int size)
{
    int least, i, j, temp, m,l;
    
    for ( i = 0; i < size; i++)         
    {
        //least = array[i];   
        int m=i;
        for ( j = i + 1; j < size; j++)         
        {
            if (array[m]> array[j])           
            {
               // least = array[j];        
                m=j;         
            }   
        }
        //swap lopgic in least and ith element
        if(i!=m)
        {
        temp = array[m];
        array[m] = array[i];
        array[i] = temp;
        }
    }
}

int main()
{
    int array[20] ;
    int size ;

    printf("Enter the size of array :\n");
    scanf("%d",&size);
    
    printf("Enter the data that we have to sort :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);   
    }

    //calling the selection_sort funtion
    selection_sort(array, size);
     
    //calling the display function
    display(array, size);

    return 0;
}
