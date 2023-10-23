#include<bits/stdc++.h>

int getMinCharToAddedToMakeStringPalin(string s)
{
    int n = s.size();

    if(n=1)
    return 0;

    if(n==2)
    {
        if(s[0]==s[1])
        return 0;
        else
        return 1;
    }

    int i =0, j = n-1, count=0;

    while(i!=j)
    {
        if(s[i]==s[j])
        {
            i++, j++;
        }
        else if(s[i]!=s[j])
        j++, count++;
    }
    return count;
}


int main()
{
    string str = "AACECAAAA";
    cout << getMinCharToAddedToMakeStringPalin(str);
    return 0;
}