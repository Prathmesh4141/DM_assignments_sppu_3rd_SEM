// name-Prathmesh Dhole
// Roll no-7241

#include<bits/stdc++.h>
using namespace std;

int main() {

  // Input for set A
  int n;
  cout << "Number of elements in set A: ";
  cin >> n;
  int a[n];
    cout << "Enter the elements of set A: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Input for set B
    int m;
   cout << "Number of elements in set B: ";
   cin >> m;
    cout << "Enter the elements of set B: ";
  int b[m];
  for (int j = 0; j < m; j++) {
    cin >> b[j];
  }

  // Union of two sets
  set<int>s;
  for(int i=0;i<n;i++){
        s.insert(a[i]);
  }
  for(int i=0;i<m;i++){
    s.insert(b[i]);
  }
  
  cout<<"The union of two sets is: ";
  for(auto it:s){
    cout<<it<<",";
  }

  // Intersection of two sets
  set<int>s1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        s1.insert(a[i]);
      }
    }
  }
  cout<<endl;
  cout << "The intersection of the two sets is: ";
  for(auto it:s1){
    cout<<it<<",";
  }
  cout << endl;

  // Set difference A - B
  int e[n];
  int p = 0;
  for (int i = 0; i < n; i++) {
    bool find = false;
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        find = true;
        break;
      }
    }
    if (!find) {
      e[p++] = a[i];
    }
  }

  cout << "The set difference A - B is: ";
  for (int i = 0; i < p; i++) {
    cout << e[i];
    if (i < p - 1) cout << ", ";
  }
  cout << endl;

  // Set difference B - A
  int f[m];
  int q = 0;
  for (int j = 0; j < m; j++) {
    bool find = false;
    for (int i = 0; i < n; i++) {
      if (b[j] == a[i]) {
        find = true;
        break;
      }
    }
    if (!find) {
      f[q++] = b[j];
    }
  }

  cout << "The set difference B - A is: ";
  for (int i = 0; i < q; i++) {
    cout << f[i];
    if (i < q - 1) cout << ", ";
  }
  cout << endl;

}