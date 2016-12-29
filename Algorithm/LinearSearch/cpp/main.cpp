#include <iostream>
#include <vector>

int linear_search(std::vector<int> data, int target)
{
    for(size_t i = 0; i < data.size(); i++) {
        if(data[i] == target) {
            return (int)i;
        }
    }

    return -1; //Not found.
}

int main(void)
{
    std::vector<int> data{4, 2, 3, 5, 1};
    int result = linear_search(data, 5);

    if(result == -1) {
        std::cout << "Not found." << std::endl;
    }

    std::cout << "Found key: " << result << std::endl;

    return 0;
}
