#include <iostream>

using namespace std;

int main() {
    int opt;
    cin>>opt;
    int a = 0; 
    int b = 0 ;
    while (opt!=6) {
        switch (opt) {
        case 1:
        cin>>a>>b;
        cout<<a+b<<endl;
        break;
        case 2:
        cin>>a>>b;
          cout<<a-b<<endl;
          break;
        case 3:
         //cin>>a>>b;
          cout<<a*b<<endl;
          break;
        case 4:
         //cin>>a>>b;
          cout<<a/b<<endl;
          break;
        case 5:
         //cin>>a>>b;
          cout<<a % b<<endl;
          break;
        default:
          cout << "Invalid Operation"<<endl;
        
        }
        cin>>opt;
    }



    return 0;
}
