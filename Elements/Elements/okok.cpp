#include<bits/stdc++.h>
#include<windows.h>
#include "Function.cpp"
using namespace std;
const string version = "1.0.72";
int main(){
    createNewFill();
    int modeNum,putr=1;
    string a;
    system("chcp 65001");
    system("cls");
    cout<<"化学式计算器v"<<version<<endl;
    while(cout<<"请选择模式(1-2):\n"){
        cin>>modeNum;
        if(modeNum<1 or modeNum>2)
            putr=0;
        if(modeNum==1){
            cout<<"请输入一个化学式:\n";
            cin>>a;
            if(a=="end" or a=="0")
                putr=0;
            else a[0]>='2'&&a[0]<='9'?mySelf(a[0]-'0',a,1,0.0):mySelf(1,a,1,0.0);
            cout<<endl;
        }
        else if(modeNum==2){
            cout<<"请输入累加化学式:\n";
            cin>>a;
            if(a=="end" or a=="0")
                putr=0;
            else{
                string s1=get_left(a),s2=get_right(a);
                s1[0]>='2'&&s1[0]<='9'?mySelf(s1[0]-'0',s1,1,0.0):mySelf(1,s1,1,0.0);
                s2[0]>='2'&&s2[0]<='9'?mySelf(s2[0]-'0',s2,1,0.0):mySelf(1,s2,1,0.0);
                allinall();
            }
            cout<<endl;
        }
        if(putr==0){
            cout<<"感谢您的使用!"<<endl;
            Sleep(2000);
            return 0;
        }
	}
    return 0;
}