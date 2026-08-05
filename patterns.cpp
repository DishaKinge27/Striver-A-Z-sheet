#include <iostream>
using namespace std;
void p1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void p4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void p5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void p7(int n){
     for(int i=1;i<=n;i++){
         //spaces
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p8(int n){
      for(int i=1;i<=n;i++){
         //spaces
         for(int j=1;j<i;j++){
             cout<<" ";
         }
         //stars
         for(int j=2*n;j>2*i-1;j--){
             cout<<"*";
         }
         cout<<endl;
     }
}
void p9(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p10(int n){
    int stars=1;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        if(i<n){
            stars++;
        }
        else{
            stars--;
        }
        cout<<endl;
    }
}
void p11(int n){
    int start;
       for(int i=1;i<=n;i++){
           if(i%2==0){
               start=0;
           }
           else{
               start=1;
           }
           for(int j=1;j<=i;j++){
               cout<<start<<" ";
               start=1-start;
           }
           cout<<endl;
       }
}
void p12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void p13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void p14(int n){
    for(int i=1;i<=n;i++){
        char c='A';
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}
void p15(int n){
    for(int i=1;i<=n;i++){
        char c='A';
        for(int j=n-i+1;j>=1;j--){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}
void p16(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }
}
void p17(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        char c='A';
        for(int j=1;j<=2*i-1;j++){
            cout<<c;
            if (j<i){
            c++;
            }
        else{
            c--;
        }
        }
        cout<<endl;
    }
}
void p18(int n){
    for(int i=1;i<=n;i++){
        char c='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}
void p19(int n){
    for(int i=1;i<=2*n;i++){
        int stars=n-i+1;
        int spaces=2*i-2;
        if (i>n){
            stars = i-n;
            spaces= 2*(2*n - i);
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p20(int n){
    int stars=1;
    for(int i=1;i<2*n;i++){
        int space=2*(n-i);
        if (i>n){
            space=2*(i-n);
            
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
         if(i<n){
            stars++;
        }
        else{
            stars--;
        }
    }
}
void p21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void p22(int n){
    for(int i = 0; i < 2*n - 1; i++){
        for(int j = 0; j < 2*n - 1; j++){
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - j;
            int right = (2 * n - 2) - i;
            int minDist = min(min(top,left), min(bottom, right));
            cout << n - minDist << " ";
        }
        cout << endl;
    }
}
int main(){
    p1(5);
    p2(5);
    p3(5);
    p4(5);
    p5(5);
    p6(5);
    p7(5);
    p8(5);
    p9(5);
    p10(5);
    p11(5);
    p12(4);
    p13(5);
    p14(5);
    p15(5);
    p16(5);
    p17(4);
    p18(5);
    p19(5);
    p20(5);
    p21(5);
    p22(5);
    return 0;
}
