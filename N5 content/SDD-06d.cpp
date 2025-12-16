#include <iostream>

/*
"Ten green bottles" is a traditional song in the United Kingdom.  

“10 green bottles hanging on the wall, 
10 green bottles hanging on the wall, 
And if one green bottle should accidentally fall, 
There'll be 9 green bottles hanging on the wall.”  

The same verse is repeated; each time with one fewer bottle. 
The song is completed when the singers reach zero. 
Your task here is write a program capable of generating all the verses of the song. 
*/

int main() {
    int iterations = 10;

    for (int i=iterations; i>0; i--) {
        std::cout << i << " green bottles hanging on the wall," << std::endl
                  << i << " green bottles hanging on the wall," << std::endl
                  << "And if one green bottle should accidentally fall, " << std::endl
                  << "There'll be " << i-1 << " green bottles hanging on the wall." << std::endl;
    }
}