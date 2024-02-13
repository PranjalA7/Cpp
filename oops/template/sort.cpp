#include<iostream>
template<class T>
void sort(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                std::swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    char arr[5]={'c','d','b','a','e'};
    sort(arr, 5);
    for (int k = 0; k < 5; k++)
    {
        std::cout<<arr[k]<<" ";
    }
    return 0;
}