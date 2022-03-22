#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int m, n;

int searchPath(int arr[255][255], int i, int j, int step) {
  step++;
  if (i + 1, )
  return min(searchPath(arr, i + 1, j, step + 1), searchPath(arr, i, j + 1, step + 1));
}

int main() {
  cin >> m;
  cin >> n;
  int arr[255][255];
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> arr[i][j];
    }
  }

  cout << searchPath(arr, 0, 0, 0);
  return 0;
}
