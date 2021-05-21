#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include <ctime>



bool is_prime(int & v);

void print(const std::vector<int>& v0){
    for(auto i : v0)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << "5. Number of odd numbers: ";//5
    std::cout << std::count_if(v1.begin(), v1.end(), 
        [](int elem){return (elem % 2);}) << std::endl;

    std::cout << "6. Max element: ";//6
    std::cout << *(std::max_element(v1.begin(), v1.end())) << std::endl; 
    std::cout << "   Min element: ";
    std::cout << *(std::min_element(v1.begin(), v1.end())) << std::endl; 
    
    std::cout << "7. Prime number: ";//7
    std::cout << *(std::find_if(v1.begin(), v1.end(), is_prime)) << std::endl;
    
    std::cout << "8. Squares of numbers: ";//8
    std::for_each(v1.begin(), v1.end(), [](int & elem){ elem *= elem;});
    print(v1);
  
    return 0;
}

bool is_prime(int & i)
{   
    if(i == 1)
    {
        return false;
    }
    if(i == 2)
    {
        return true;
    }
    int count = 0;
    if((i % 2) && (i > 2))
    {
        for(int j = 3; (j*j <= i)&&(count == 0); j+=2)
        { 
            if((i%j) == 0)
            {
                ++count;
            }   
        }
        if(count == 0)
        {
            return true;
        }    
    }
    return false;
}
