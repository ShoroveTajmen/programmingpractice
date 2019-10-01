#include<iostream>
#define MAX_SIZE 100
using namespace std;

void maxMin(int *numbers,int size,int *max,int *min);

int main()
{
    int arr[MAX_SIZE],size,max,min,i;

    cout<< "Enter size of the array : ";
    cin>> size;

    cout<<"Enter the %d elements in array",size;
    for(i=0; i<size; i++)
    {
        cin>>(arr + i);
    }

    maxMin(arr,size,&max,&min);

    cout<<"maximum element in array",max;
    cout<<"minimum element in array",min;

    return 0;

}
void maxMin(int *numbers,int size,int *max,int *min)
{
    int i;
    *max = *(numbers + 0);
    *min = *(numbers + 0);

    for(i=0; i<size; i++)
    {
        if(*(numbers+i)>*max)
        *max = *(numbers+i);

        if(*(numbers + i)<*min)
            *min = *(numbers+i);
    }
}








