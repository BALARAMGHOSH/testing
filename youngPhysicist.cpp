#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,a=0,b=0,c=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int t1,t2,t3;
        cin >> t1 >> t2 >> t3;
        a=a+t1; b=b+t2; c=c+t3;
    }
    
    if (a==0 && b==0 && c==0)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    


    return 0;
}
