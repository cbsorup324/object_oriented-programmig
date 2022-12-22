// #include<iostream>
// using namespace std;

// int main(){
//     int items[4]={10,8,12,15};
//     int cost[4]={75,100,60,99};
//     cout.width(5);
//     cout<<"ITEMS";
//     cout.width(8);
//     cout<<"COST";
//     cout.width(15);
//     cout<<"TOTAL VALUE"<<"\n";
//     int sum=0;
//     for(int i=0;i<4;i++){
//         cout.width(5);
//         cout<<items[i];
//         cout.width(8);
//         cout<<cost[i];
//         int value = items[i]*cost[i];
//         cout.width(15);
//         cout<<value<<"\n";
//         sum=sum+value;

//     }
//     cout<<"\n Grand Total=";
//     cout.width(2);
//     cout<<sum<<"\n"; 
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout.fill('<');
//     cout.precision(3);
//     for(int n=1; n<=6;n++){
//         cout.width(5);
//         cout<<n;
//         cout.width(10);
//         cout<<1.0/float(n)<< "\n";
//         if(n==3)
//         cout.fill('>');
//     }
//     cout<<"\n padding change \n\n";
//     cout.fill('#');
//     cout.width(5);
//     cout<<12.346494 <<"\n";
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;
ostream &currency(ostream & output)
{
    output<<" RS ";
    return output;
}

ostream &form(ostream & output)
{
    output.setf(ios :: showpos);
    output.setf(ios :: showpoint);
    output.fill('*');
    output.precision(2);
    output<<setiosflags(ios::fixed);  //if not use output 
    output<<setw(10);
    return output;
}


int main()
{
    cout<<currency<<form<<7864.5;
    return 0;
}