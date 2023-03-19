#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, larg, i;
    cout<<"Enter the Size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    larg = arr[0];
    for(i=1; i<n; i++)
    {
        if(larg<arr[i])
            larg = arr[i];
    }
    cout<<"Greatest Number = "<<larg;
    cout<<endl;
    return 0;
}