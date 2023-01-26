#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"

int main(){
	// std::cout << Factorial (5) <<std::endl;
	// std::vector<int> v{1,2,3};
	// std::vector<int> res = AddN(v, 5);
	// for(long long unsigned int i=0;i<res.size();i++){
	// 	std::cout<<res[i]<<" ";
	// }
	std::vector<int> v1{1,2,3,2,5,5};
	std::vector<int> v2{1,2,3,2,5,5,4};

    std::cout << "Remove Two:" <<std::endl;
    std::cout << RemoveTwos(4) <<std::endl;
    
    std::cout << "Multiples Filter:" <<std::endl;
	std::vector<int> res1 = MultiplesFilter(v1, 2);
	for(long long unsigned int i=0;i<res1.size();i++){
		std::cout<<res1[i]<<" ";
	}
    std::cout << std::endl;
    std::cout << "Even Mask:" <<std::endl;
	std::vector<bool> res2 = EvenMask(v2);
	for(long long unsigned int i=0;i<res2.size();i++){
		std::cout<<res2[i]<<" ";
	}
}