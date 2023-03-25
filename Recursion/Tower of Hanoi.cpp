// You are given three rods (numbered 1 to 3), and ‘N’ disks initially placed on the first rod, one on top of each other in increasing order of size ( the largest disk is at the bottom). You are supposed to move the ‘N’ disks to another rod(either rod 2 or rod 3) using the following rules and in less than 2 ^ (N) moves.
// 1. You can only move one disk in one move. 
// 2. You can not place a larger disk on top of a smaller disk.
// 3. You can only move the disk at the top of any rod. 




vector<vector<int>> towerOfHanoi(int n,int source,int destination,int aux){
    vector<vector<int>> res;

    if(n==1){
        vector<int> temp;
        temp.push_back(source);
        temp.push_back(destination);
        res.push_back(temp);
        return res;
    }
    vector<vector<int>> res1=towerOfHanoi(n-1,source,aux,destination);
    vector<vector<int>> res2=towerOfHanoi(1,source,destination,aux);
    vector<vector<int>> res3=towerOfHanoi(n-1,aux,destination,source);
    res.insert(res.end(),res1.begin(),res1.end());
    res.insert(res.end(),res2.begin(),res2.end());
    res.insert(res.end(),res3.begin(),res3.end());
    return res;
   

}

vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    return towerOfHanoi(n, 1, 3, 2);

}