#include<bits/stdc++.h>
using namespace std;

string keywords[32]={"auto","double","int","struct","break","else","long",
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"};


bool iskeyword(string st){
    for(int i = 0;i<32; i++){
        if(keywords[i]==st) return 1;
    }
    return 0;
}
bool op(string st){
    if(st=="+"||st=="-"||st=="*"||st=="/"||st=="||"||st=="&&"||st=="!")
        return 1;
    return 0;

}
/* + - */
int main(){
    string str;
    ifstream inFile;
    inFile.open("input.txt");
    while (inFile >> str) {
       if(iskeyword(str))
            printf("Keyword\n");
       if(op(str))
            printf("Operator\n");
    }

    return 0;
}
