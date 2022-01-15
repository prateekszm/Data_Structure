#include <iostream>
using namespace std;
bool checkSpecial(char c,string spec){
    // cout<<c;
    int falg=0;
    for(int i=0;i<spec.length();i++){  //helloWor12.%zigs@-chigga-.com
        if (c==spec[i])
        {
            falg=1;
            break;     //spec 
        }
    }
    return falg;

}
bool validateLocal(string local,string spec){
    //checking length less than 64
    int len= local.length();
    // cout<<len<<endl;
    if(len>64){
        return 0;
    }

    //checking the local have different than given special character 
    for (int i = 0; i < len; i++)
    {
        if(!(local[i]>=65 and local[i]<=90) and
            !(local[i]>=97 and local[i]<=122) and
            !(local[i]>=48 and local[i]<=57) ){     //!#$%^&*{}|~_=./'
            // cout<<local[i]<<endl;
            bool flag=checkSpecial(local[i],spec);
            // cout<<flag<<endl;
            if (flag==0)
            {
                return 0;
            }
        }
    }

    //checking the dot is in last or first
    if(local[0]=='.'||local[local.length()-1]=='.'){
        return 0;
    }

    return 1;

}

bool validateExt(string extension,string spec){
    if(extension.length()>3){
        return 0;
    }else{
        for(int i=0;i<3;i++){
            for(int j=0;j<spec.length();j++){
                if(extension[i]==spec[i]){
                    break;
                    return 0;
                }
            }
        }
    }

    return 1;
}
bool validateDomain(string domain,string spec){
    int first=0,last=0;
    //checking if it have special char then return 0
    for (int i = 0; i < domain.length(); ++i)
    {
        int flag=checkSpecial(domain[i],spec);
        if (flag==1)
        {
            return 0;
        }

        //checling '-' should be present at last and first will be valid
    }
    if(domain[0]=='-'){
        first=1;
    }
    if (domain[domain.length()-1]=='-')
    {
        last=1;
    }
    if (first==1)
    {
        return 1;
    }else{
        return 0;
    }

    if (last==1) 
    {
        return 1;
    }else{
        return 0;
    }

    return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string str="helloWor12.%zigs@-chigga-.com";
    string spec="!#$%^&*{}|~._=/'";
    // std::cout << str<<" "<<spec << std::endl;
    string local,domain,extension;
    int i=0;
    while(str[i]!='@'){
        local=local+str[i];
        i++;
    }
    // cout<<local<<endl;
    // cout<<i;

    int j=str.length()-1;
    for(j;str[j]!='.';j--){
        extension=extension+str[j];
    }
    // cout<<extension<<endl;
    // cout<<j;

    i=i+1;
    for(i;i<=j-1;i++){
        domain=domain+str[i];
    }
    // cout<<domain;

    cout<<validateLocal(local,spec)<<endl;
    cout<<validateExt(extension,spec)<<endl;
    cout<<validateDomain(domain,spec);

}
