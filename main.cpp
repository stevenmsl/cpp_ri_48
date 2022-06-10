#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol54;

/*
Given input matrix =
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
*/

tuple<vector<vector<int>>, vector<vector<int>>>
testFixture1()
{
  auto input = vector<vector<int>>{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  auto output = vector<vector<int>>{
      {7, 4, 1},
      {8, 5, 2},
      {9, 6, 3}};
  return make_tuple(input, output);
}

/*
Given input matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
],

rotate the input matrix in-place such that it becomes:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]
 */

tuple<vector<vector<int>>, vector<vector<int>>>
testFixture2()
{
  auto input = vector<vector<int>>{
      {5, 1, 9, 11},
      {2, 4, 8, 10},
      {13, 3, 6, 7},
      {15, 14, 12, 16}};
  auto output = vector<vector<int>>{
      {15, 13, 2, 5},
      {14, 3, 4, 1},
      {12, 6, 8, 9},
      {16, 7, 10, 11}};
  return make_tuple(input, output);
}

void test1()
{
  auto f = testFixture1();
  auto matrix = get<0>(f);
  cout << "Expect to see: " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  sol.rotate(matrix);
  cout << Util::toString(matrix) << endl;
}

void test2()
{
  auto f = testFixture2();
  auto matrix = get<0>(f);
  cout << "Expect to see: " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  sol.rotate(matrix);
  cout << Util::toString(matrix) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}