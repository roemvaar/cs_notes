#include <stdio.h>

class Trie {
    
public:
    bool isLeaf;
    Trie* character[128];
    
    // Constructor
    Trie()
    {
        this->isLeaf = false;
        
        for(int i = 0; i < 128; i++) {
            this->character[i] = nullptr;
        }
    }
    
    void insert(string);
    bool deletion(Trie*&, string);
    bool search(string);
    bool haveChildren(Trie const*); 
};
 
