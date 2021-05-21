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
    std::cout << "9. Look at new sequence: ";//9
    std::vector<int> v2(v1.size(), 0);
    std::mt19937 engine; 
    engine.seed(std::time(nullptr));
    generate(v2.begin(), v2.end(), engine);
    print(v2);

    std::cout << "10. The sum: ";//10
    std::cout << std::accumulate(v2.begin(), v2.end(), 0, 
        [](int a, int b){return a += b;}) << std::endl;
    
    std::cout << "11. The sequence now: ";//11
    fill(v2.begin(), v2.begin()+3, 1);
    print(v2);

    std::cout << "12. The third sequence = seq1 - seq2: \n";//12
    std::vector<int> v3(v1.size(), 0);
    //std::set_difference(std::begin(v1), std::end(v1),
      //  std::begin(v2), std::end(v2), std::begin(v3));
    for(auto i = 0; i < v1.size(); ++i)
    {
        v3[i] = v1[i] - v2[i];
    }
    print(v3);
  
    return 0;
}
