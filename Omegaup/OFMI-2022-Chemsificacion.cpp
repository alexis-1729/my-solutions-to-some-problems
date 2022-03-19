#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,j; cin>>n;
    string c;
    for(int i=0;i<n;i++)
    {
     cin>>c;
         //cout<<"h_";
         if((int)c.size()<3){

               if((int)c.size()==2){
                 if(c[1]=='a'|| c[1]=='e' || c[1]=='i' || c[1]=='o' ||c[1]=='u')
                {
                if(c[0]!='a'&& c[0]!='e' && c[0]!='i' && c[0]!='o' &&c[0]!='u')
                {
                    cout<<c[0]<<c[1]<<"m";
                }else{
                cout<<c[0]<<c[1];
                }
            }else{
            cout<<c[0]<<c[1];
            }
            }else{
                if(c[0]=='a'|| c[0]=='e' || c[0]=='i' || c[0]=='o' ||c[0]=='u')
                {
                    cout<<c[0]<<"m";
                }else{
                cout<<c[0];
                }

               }

         }else{
        for(j=2;j<(int)c.size();j+=3)
        {
            if(c[j]=='a'|| c[j]=='e' || c[j]=='i' || c[j]=='o' ||c[j]=='u')
            {
                if(c[j-1]!='a'&& c[j-1]!='e' && c[j-1]!='i' && c[j-1]!='o' &&c[j-1]!='u')
                {
                    cout<<c[j-2]<<c[j-1]<<c[j]<<"m";
                }else{
                cout<<c[j-2]<<c[j-1]<<c[j];
                }
            }else{
            cout<<c[j-2]<<c[j-1]<<c[j];
            }
            if(j+3>c.size()-1)break;
        }
        if(j!=(int)c.size()-1)
        {
            if(j==(int)c.size()-2)
            {
                if(c[j+1]=='a' ||c[j+1]=='e' || c[j+1]=='i' || c[j+1]=='o' ||c[j+1]=='u')
                {
                    cout<<c[j+1]<<"m";
                }else{
                cout<<c[j+1];
                }
            }else{
            if(c[j+2]=='a'|| c[j+2]=='e' || c[j+2]=='i' || c[j+2]=='o' ||c[j+2]=='u')
            {
                if(c[j+1]!='a'&& c[j+1]!='e' && c[j+1]!='i' && c[j+1]!='o' &&c[j+1]!='u'){
                cout<<c[j+1]<<c[j+2]<<"m";
                }else{
                cout<<c[j+1]<<c[j+2];
                }
            }else{
            cout<<c[j+1]<<c[j+2];
            }
            }
    }
        }
        cout<<" ";
        }

    return 0;
}
