#include <iostream>
#include <string>

using namespace std;

int solution(string S)
{
    int n = S.size();
    int insert_count = 0;
  
    if (S[0] == 'b') {
      insert_count = 1;
    }
    else if(S[0] == 'c') {
      insert_count = 2; 
    }

    for (int i = n - 1; i > 0; i--) {
        int diff = S[i] - S[i - 1];
        
        if (diff == 0) {
            insert_count += 2;
        }
        else if (diff == -2 || diff == 1) {
            insert_count += 1;
        }
    }
    
    return insert_count;
}

int main()
{
    cout << solution("aabcc") << endl;

    return 0;
}
