#include<bits/stdc++.h>
using namespace std;
char str[1000];
int isInt(){
    for(int i=0;i<strlen(str);i++){
        if(!isalpha(str[i])&&!isdigit(str[i]))
            return 0;
    }
    return 1;

}
int isFloat(){
    int d=0;
    for(int i=0;i<strlen(str);i++){
        if(!isdigit(str[i])&&str[i]!='.')
            return 0;
        if(str[i]=='.')
            d=1;
    }
    return d;

}
int isBinary(){
    for(int i=0;i<strlen(str);i++){
        if(str[i]!='0'&&str[i]!='1')
            return 0;
    }
    return 1;

}
int isChar(){
    int d=0;
    for(int i=0;i<strlen(str);i++){
        if(!isalpha(str[i])&&!isdigit(str[i])&&str[i]!='_')
            return 0;
    }
    if(str[0]=='c'&&str[1]=='h'&&str[2]=='_')
        d=1;
    return d;

}
int main(){
    gets(str);
    //puts(str);
    //cout<<isInt();
    if(isInt()&&((str[0]>='a'&&str[0]<='o')||(str[0]>='A'&&str[0]<='O')))
        printf("Integer variable\n");
    else if(isFloat()&&(str[0]>='0'&&str[0]<='9'))
        printf("Float Number\n");
    else if(isBinary())
        printf("Binary Number\n");
    else if(isChar())
        printf("Character variable\n");
    else
        printf("Invalid input or Undefined");

    return 0;
}
