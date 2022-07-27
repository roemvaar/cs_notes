// You should know about tree traversal algorithms: BFS and DFS,
// and know the difference between inorder, postorder, and preorder.

#include <math.h>

// SquareRoot - just setting things up for GTest
// https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
double DepthFirstSearch(const double a) 
{
    double b = sqrt(a);
    if(b != b) {    // nan check
        return -1.0;
    }
    else {
        return sqrt(a);
    }
}
