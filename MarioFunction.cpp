#include <iostream>
using namespace std;
void mario(int h);
int main() {
  int h;
  cout << "請輸入三角形的高:";
  cin >> h;
  while (h > 8 || h < 1) {
    cout << "輸入錯誤\n";
    cout << "請輸入三角形的高:";
    cin >> h;
  }
  mario(h);
}
void mario(int h) {
  for (int i = 0; i < h; i++) {
    // 空白
    for (int k = 0; k < h - (i + 1); k++) {
      cout << " ";
    }

    // 顯示#
    for (int j = 0; j < i + 1; j++) {
      cout << "#";
    }

    cout << " ";

    for (int l = 0; l < i + 1; l++) {
      cout << "#";
    }

    cout << "\n";
  }   
}
