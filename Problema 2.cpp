#include <bits/stdc++.h>
using namespace std;
int main(){
    double x, y, z;
    cin>>x>>y>>z;
    double num = pow(2*y+z, 2.8) - z;
    double dem = x+y-(x/z);
    double resul = num/dem;
    cout<<resul<<endl;
return 0;
}
