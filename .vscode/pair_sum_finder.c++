#include <iostream>
using namespace std;
int main()
{
    int num[100],lenght;
    cout<<"enter length of string ";
    cin>>lenght;
    cout<<"enter number on upto the length of the string:";
    cout<<"enter the numbers:";
    for(int i=0;i<lenght;i++)
    {
        cin>>num[i];
    }
    int target,sum;
    cout<<"enter the target";
    cin>>target;
    int found=false;
    for(int i=0;i<lenght;i++)
    {
        for(int j=0;j<lenght;j++)
        {
            if(num[i]+num[j]==target)
            {
                sum=num[i]+num[j];
                cout<<endl;
                cout<<num[i]<<" "<<num[j]<<endl;
                cout<<sum;
                found=true;
                break;
                if(found==true)break;
            }
        
        }
    }
    if(found==false)cout<<"no value found";
    return 0;

}