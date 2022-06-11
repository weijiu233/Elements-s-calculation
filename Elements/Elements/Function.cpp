#include<bits/stdc++.h>
#include"pTOE.cpp"
using namespace std;
double summ[1000];
double get_atomic(string s){
    for(int i=1;i<=115;i++)
        if(s==elements[i].symbol)
            return elements[i].atomic;
    return -1;
}
string get_character(string s){
	for(int i=1;i<=115;i++)
		if(s==elements[i].symbol)
			return elements[i].character;
	return "无";
}
int get_number(string s){
    for(int i=1;i<=115;i++)
        if(s==elements[i].symbol)
            return elements[i].number;
    return -1;
}
string get_left(string s){
    for(int i=0;i<s.length();i++)
        if(s[i]=='+')
            return s.substr(0,i);
    return "None";
}
string get_right(string s){
    for(int i=0;i<s.length();i++)
        if(s[i]=='+')
            return s.substr(i+1,s.length()-i-1);
    return "None";
}
void getM(int qest,string a,int base,double fz){
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
			}
            else if(a[i+1]>='0'&&a[i+1]<='9'){
                b=a.substr(i,1);
                num=qest*base*(a[i+1]-'0');
                i++;
            }
            else {
                b=a.substr(i,1);num=qest;
            }
			cout<<b<<"%:"<<num*get_atomic(b)/fz*100.0<<"%"<<endl;
        }
        else if(a[i]=='('){
            int j=i+1;
            while(a[j]!=')') 
                j++;
            string c=a.substr(i,j-i);
            getM(a[j+1]-'0',c,qest,fz);
            i=j+1;
            return;
        }
    }
}
int pos=1;
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
    summ[pos]=fz;
    pos++;
}
void allinall(){
    double sum=0.0;
    for(int i=1;i<pos;i++){
        sum+=summ[i];
    }
    cout<<sum<<endl;
}
void createNewFill(){
    Fill();
    return ;
}