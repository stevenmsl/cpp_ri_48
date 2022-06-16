#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol54;
using namespace std;

/*takeaways
  - reflect along the diagonal axis
  - reflect along the y axis that cut
    the matrix into two halves vertically
  - this is an observation; yet
    to find the proof
  - time complexity: O(n^2)
    space complexity: O(1)
*/

void Solution::rotate(vector<vector<int>> &matrix)
{
  int n = matrix.size();

  /* reflect along the diagonal axis */
  for (auto i = 0; i < n; i++)
    for (auto j = i + 1; j < n; j++)
      swap(matrix[i][j], matrix[j][i]);

  /* reflect along the y axis */

  for (auto i = 0; i < n; i++)
    /* reflecting is the same as performing reversing */
    reverse(begin(matrix[i]), end(matrix[i]));
}
