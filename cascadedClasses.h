#include <bits/stdc++.h>

class perInst {
    public:
    std::vector<int> dataVec;
    perInst(){ dataVec= std::vector<int> (4,0);}
    ~perInst() { delete &dataVec;}
};

class perPC {
    public:
    std::map<int, perInst> firstMap;
    perPC(){};
    perPC(int i) {firstMap.insert(std::make_pair(i, perInst())); }
    ~perPC() {}; 
};

class perType {
    public:
    std::map<int,perPC> secondMap;
    perType() {};
    ~perType(){};
};