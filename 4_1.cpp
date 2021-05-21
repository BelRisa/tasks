#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include <ctime>


void print(const std::vector<int>& v0){
    for(auto i : v0)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v1 (10, 0);//1
    iota(v1.begin(), v1.end(), 1);
    std::cout << "1. Look at this sequence: ";
    print(v1);

    std::cout << "2. Let's add 3 elements! Please, enter 3 values: ";//2
    int cur = 0;
    for(int i = 1; i < 4; ++i)
    {
        std::cin >> cur;
        v1.push_back(cur);
    }
    std::cout << "Look at this sequence now: ";
    print(v1);

    std::cout << "3. Wow! It is mixed: ";//3  
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(v1), std::end(v1), rng);
    print(v1);

    std::cout << "4. And the next one (without repetitions): \n";//4  
    sort(v1.begin(),v1.end());
    v1.erase(unique(v1.begin(),v1.end()), v1.end());
    print(v1);
  
    return 0;
}
