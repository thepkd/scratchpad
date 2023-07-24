#include "plru.h"

PLRU::PLRU(int size) :
    m_size(size)
{
        assert(size<=32);
        state_mask = 1U << (size - 1) - 1U; 
        path_bits = log2(size);
        path_mask = 1U << path_bits - 1U;
}


val_pos PLRU::PLRUVictim(){
    std::vector<int> val_path;
    std::vector<int> pos_path;
    int next_pos = 0;
    for(int i=0; i<path_bits; i++){
        pos_path.push_back(next_pos);
        val_path.push_back((state & (1U << next_pos )) >> next_pos);
        next_pos = next_pos*2 + 1 + ((state & (1U << next_pos)) >> next_pos);
    }

    for ( auto val : val_path){
        std::cout << val;
    }
    std::cout << std::endl;

    for ( auto val : pos_path){
        std::cout << val;
    }
    std::cout << std::endl;

    return {val_path, pos_path};
}


void PLRU::markMRU( std::vector<int> pos_path){
    
    for(int i= 0; i<pos_path.size(); i++){
        if(state & (1 << pos_path[i])){
            state = state & ~(1 << pos_path[i]);
        } else {
            state = state | (1 << pos_path[i]);
        }
    }
}


int main() {
    PLRU obj(32);

    auto victim = obj.PLRUVictim();
    obj.markMRU( victim.pos_path);
    auto victim1 = obj.PLRUVictim();
    return 0;
}


