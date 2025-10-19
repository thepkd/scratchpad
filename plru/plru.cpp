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

    printState();
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

void PLRU::printState(){
    int endl = 0;
    std::cout << "PLRU State: " << std::endl;
    for(int i=0; i< m_size -1; i++){
        std::cout << ((state & (1U << i)) >> i);
        if( i == endl){
            std::cout << std::endl;
            endl = 2 * (endl +1);
        }
    }
    std::cout << std::endl;
}

std::vector<int> PLRU::GetPathVector(int way) {
    int nextPos = 0;
    std::vector<int> path;
    for(int pathIndex=0; pathIndex < path_bits; pathIndex++) {
        path.push_back(nextPos);
        nextPos = nextPos * 2 + 1 + ((way & (1U << ( path_bits - pathIndex - 1))) >> (path_bits - pathIndex - 1));
    }
    return path;
}

int main() {
    PLRU obj(4);

    //Miss 0 and Miss 1
    auto victim0= obj.PLRUVictim();
    obj.markMRU( victim0.pos_path);
    auto victim1 = obj.PLRUVictim();
    obj.markMRU( victim1.pos_path);

    // Hit 0 and Hit 1
    auto cacheHit1 = obj.GetPathVector(0);
    obj.markMRU( cacheHit1);

    //auto cacheHit2 = obj.GetPathVector(10);
    //obj.markMRU( cacheHit2);

    // More Misses
    auto victim2 = obj.PLRUVictim();
    obj.markMRU( victim2.pos_path);
    auto victim3 = obj.PLRUVictim();
    obj.markMRU( victim3.pos_path);
    auto victim4 = obj.PLRUVictim();
    obj.markMRU( victim4.pos_path);



    //std::cout << "---- Testing GetPathVector ----" << std::endl;
    //for(int way =0; way <32; way++) {
    //    std::cout << "Way: " << way << " Path: ";
    //    auto path = obj.GetPathVector(way);
    //    for(auto p : path) {
    //        std::cout << p << " ";
    //    }
    //    std::cout << std::endl;
    //}


    return 0;
}


