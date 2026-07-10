#include <iostream>
#include <stack>

void listStack(std::stack<std::string>& st) {
  while (!st.empty()) {
    std::cout << st.top() << std::endl;
    st.pop();
  }
}

int main(int argc, char** argv) {
  std::stack<std::string> games;
  for (int i = 1; i < argc; i++) {
    games.push(argv[i]);
  }

  listStack(games);
  return 0;
}
