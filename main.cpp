#include <array>
#include <iostream>
#include <ranges>

template <typename T> class SimpleJointData
{
private:
  std::array<T, 12> data_;

public:
  SimpleJointData() = default;

  auto begin() -> std::ranges::iterator_t<T> { return data_.begin(); }

  auto end() -> std::ranges::iterator_t<T> { return data_.end(); }
};

int main()
{
  int a{0};
  std::cout << "Hello: " << a << '\n';
  return EXIT_SUCCESS;
}