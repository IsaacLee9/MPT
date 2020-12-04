#include <iostream>

using namespace std;
int ans=0;
int x;
void recur(int l[], int c,int total);
int main()
{
    int n;
    int c;
    cin>>n;
    cin>>c;
    int l[c];


    for(int i=0;i<c;i++)
    {
        cin>>l[i];
    }




    recur(l,c,n);
    cout<<ans/c<<endl;


}

void recur(int l[], int c,int total)
{
    for(int i=0;i<c;i++)
    {

        if(total==0)
        {


            ans+=1;
        }else if(total<0)
        {
            x=0;
        }else{
            int yeet=total-l[i];
            recur(l,c,yeet);
        }
    }
}
