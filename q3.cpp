#include<iostream>
#include<string>
using namespace std;
  int main()

  {
   string c;
   int d=0,a;
       cout<<"enter your word: ";
       cin>>c;
        
        int left=0;
        int right= c.length()-1;
    while(left<right)
    {   
        if (c[left]==c[right])
        {
            left++;
            right--;
            d++;
        }
        
    }
    if( d % 2 !=0)
    {
        d=d+0.5;
    }
        a = c.length()/2;
        if (d==a)
        {
         cout<<"this is a palidrome";    
        }
        else
        {
            cout<<"this is not a palidrome";
        }

        int freq[26] = {0};
        
        for (int i = 0; i < c.length(); i++) {
            char ch = c[i];
            if (ch >= 'A' && ch <= 'Z') 
            {
                ch = ch + ('a' - 'A'); 
            }
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++; 
            }
        }
        cout << "Character Frequency Count:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

        
        for(int i=0;i<c.length();i++)
        {
        if(c[i]== 'a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {
            cout<<"*";
        }
        
    }


       return 0; 
}