#include <thread>
#include <string>
#include <iostream>

class TEST
{
public:
  static void f()
  {
    std::cout << "f" << std::endl;
  }

  void c()
  {
    std::thread t(f);
    t.join();
  }
};

int main()
{
  TEST a;
  a.c();
  return 0;
}
