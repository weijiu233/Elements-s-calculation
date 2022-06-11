#include<bits/stdc++.h>
#include<windows.h>
#include "Function.cpp"
using namespace std;
void mySelf(int qest,string a,int base,double fz){
    int len=a.length(),num,k=0;
    string b;
    qest==1?k=0:k=1;
    for(int i=k;i<len;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            if(a[i+1]>='a'&&a[i+1]<='z'){
                b=a.substr(i,2);
                if(a[i+2]>='0'&&a[i+2]<='9'){
                    num=qest*base*(a[i+2]-'0');
                    i++;
                }
                else num=qest*base;
				i++;
                fz+=num*get_atomic(b);
            }
            else if(a[i+1]>='0'&&a[i+1]<='9'){
                b=a.substr(i,1);
                num=qest*base*(a[i+1]-'0');i++;
                fz+=num*get_atomic(b);
            }
            else{
                b=a.substr(i,1);
                num=qest;
                fz+=get_atomic(b)*qest*base;
            }
			cout<<b<<": 含有"<<num<<"个"<<get_character(b)<<"元素 第"<<get_number(b)<<"位"<<endl;
        }
        else if(a[i]=='('){
            int j=i+1;
            while(a[j]!=')') 
                j++;
            string c=a.substr(i,j-i);
            mySelf(a[j+1]-'0',c,qest,fz);
            i=j+1;
            return;
        }
        else cout<<a[i]<<"\nWrong\n";
    }
    getM(qest,a,base,fz);
	cout<<fz<<endl;
}
int main(){
    createNewFill();
    int modeNum;
    string a;
    system("chcp 65001");
    while(cout<<"请选择模式(1-2):\n"){
        cin>>modeNum;
        if(modeNum<1 or modeNum>3)
            return 0;
        if(modeNum==1){
            cout<<"请输入一个化学式:\n";
            cin>>a;
            if(a=="end" or a=="0")
                return 0;
            a[0]>='2'&&a[0]<='9'?mySelf(a[0]-'0',a,1,0.0):mySelf(1,a,1,0.0);
            cout<<endl;
        }
        else if(modeNum==2){
            cout<<"请输入累加化学式:\n";
            cin>>a;
            if(a=="end" or a=="0")
                return 0;
            string s1=get_left(a),s2=get_right(a);
            s1[0]>='2'&&s1[0]<='9'?mySelf(s1[0]-'0',s1,1,0.0):mySelf(1,s1,1,0.0);
            s2[0]>='2'&&s2[0]<='9'?mySelf(s2[0]-'0',s2,1,0.0):mySelf(1,s2,1,0.0);
            cout<<endl;
        }
	}
    return 0;
}