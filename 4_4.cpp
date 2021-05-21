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
    std::cout << "13. The sequence again: ";//13
    replace_if(v3.begin(), v3.end(), [](int a){return (a < 0);}, 0);
    print(v3);

    std::cout << "14. The sequence without 0: ";//14 
    v3.erase(remove(v3.begin(), v3.end(), 0), v3.end());
    print(v3);

    std::cout << "15. Reversed sequence 3: ";//15
    reverse(v3.begin(), v3.end());
    print(v3);

    std::cout << "16. Top-3 max elements: ";//16 v3 
    std::sort(v3.begin(), v3.end());
    std::cout << *(v3.end() - 1) << " " << *(v3.end() - 2) << 
        " " << *(v3.end() - 3) << std::endl;
  
  
    return 0;
}
