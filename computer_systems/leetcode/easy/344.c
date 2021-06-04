// 92. Reverse a string with no extra memory


void reverseString(char* s, int sSize)
{

    int left, right;
    char temp;

    
    for(left = 0, right = sSize - 1; left <= right; left++, right--)
    {                    
        temp = s[right];
        s[right] = s[left];
        s[left] = temp;
    }
}

