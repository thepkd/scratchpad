#include <iostream>
#include <cassert>
#include <cmath>
#include <vector>
struct val_pos;

class PLRU{
    private:
        const int m_size;
        unsigned int state = 0;
        unsigned int state_mask;
        int path_bits;
        int path_mask;
    public:
        PLRU(int size);
        ~PLRU() = default;
        void markMRU(std::vector<int> pos_path, int way);
        void updatePLRU( std::vector<int> pos_path);
        val_pos PLRUVictim(); 
        void printState();
        std::vector<int> GetPathVector(int way);
};

struct val_pos{
    std::vector<int> val_path;
    std::vector<int> pos_path;
    int way;
};