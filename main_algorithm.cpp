#include <iostream>

using namespace std;
int x = 0, y =0 , z = 0;
int x1 , y1 ,z1;
void d(){
        cout<<x<<" "<<y<<" "<<z<<endl;
}

int main(){
    int x = 0, y =0 , z = 0;
    int x1 , y1 ,z1;
    cin>>x1>>y1>>z1;
    cout<<"---------------------------"<<endl;
    while(x!=x1||y!=y1||z!=z1){
        w1:
        if(y<y1){
            y++;
            cout<<x<<" "<<y<<" "<<z<<endl;
            goto w1;
        }
        if(x!=x1||z!=z1){
            if(x<x1){x++;cout<<x<<" "<<y<<" "<<z<<endl;}
            if(x>x1){x--;cout<<x<<" "<<y<<" "<<z<<endl;}
            if(z<z1){z++;cout<<x<<" "<<y<<" "<<z<<endl;}
            if(z>z1){z--;cout<<x<<" "<<y<<" "<<z<<endl;}
            goto w1;
        }
        if(y>y1){y--;cout<<x<<" "<<y<<" "<<z<<endl;}
    }
}