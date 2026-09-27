#include<iostream>
#include<string>
using namespace std;
/*
void removeChar(string ans, string original){
    if(original.length() == 0){
        cout << ans;
        return;
    }
    char ch = original[0];
    if(ch == 'g') 
        removeChar(ans, original.substr(1));
    else 
        removeChar(ans + ch, original.substr(1));
}

int main(){
    string str = "physics wallah";
    removeChar("", str);
}
*/
void removeChar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='p') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}

int main(){
    string str = "physics wallah";
    removeChar("",str,0);
}
/*Dry Run (string = "physics wallah")
Initial call: removeChar("", "physics wallah", 0)

idx=0, ch='p'

Condition true → skip 'p'

Next call: removeChar("", "physics wallah", 1)

idx=1, ch='h'

Not 'p' → ans = "" + "h" = "h"

Next call: removeChar("h", "physics wallah", 2)

idx=2, ch='y'

ans = "h" + "y" = "hy"

Next call: removeChar("hy", "physics wallah", 3)

idx=3, ch='s'

ans = "hy" + "s" = "hys"

Next call: removeChar("hys", "physics wallah", 4)

इसी तरह recursion चलता रहेगा…

idx=4 → 'i' → "hysi"

idx=5 → 'c' → "hysic"

idx=6 → 's' → "hysics"

idx=7 → ' ' → "hysics "

idx=8 → 'w' → "hysics w"

idx=9 → 'a' → "hysics wa"

idx=10 → 'l' → "hysics wal"

idx=11 → 'l' → "hysics wall"

idx=12 → 'a' → "hysics walla"

idx=13 → 'h' → "hysics wallah"

Base case: idx == original.length() → print "hysics wallah"
*/