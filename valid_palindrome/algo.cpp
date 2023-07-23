bool isPalindrome(string s) {
    if(s.length() <= 1){
        return true;
    }
    int a = 0;
    int en = s.length()-1;
    while(a < en){
        while(a<en && !isalnum(s[a])){
            a++;
        }
        while(a<en && !isalnum(s[en])){
            en--;
        }
        if(a<en && tolower(s[a])!=tolower(s[en])){
            return false;
        }
        a++;
        en--;
    }
    return true;
}
