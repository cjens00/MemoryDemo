#include <iostream>
#include <memory>
#include <format>

int main()
{
    int bytesToAllocate = 0, bytesAllocated = 0;
    std::cout << "How many bytes would you like to allocate?" << std::endl << ">>";
    std::cin >> bytesToAllocate;

    char *heapAllocatedBytes = new char[bytesToAllocate];
    bytesAllocated = bytesToAllocate;
    memset(heapAllocatedBytes, 0, bytesAllocated);
    auto currentByte = heapAllocatedBytes;
    auto bytesEnd = heapAllocatedBytes + bytesAllocated;
    for (; currentByte != bytesEnd; currentByte++)
    {
        std::cout << std::format("Address {:#x}: \"{:#x}\"\r\n", (int) currentByte, (int) *currentByte);
    }
    delete[] heapAllocatedBytes;
    return 0;
}
