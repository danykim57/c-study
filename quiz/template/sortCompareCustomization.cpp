#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Boxer{
    int idx;                        
    int weight;                     
    double winRate;                                  
    double bigWin;      
};

bool CompareBoxer(const Boxer a, const Boxer b){
    if (a.winRate == b.winRate){
        if (a.bigWin == b.bigWin){
            if (a.weight == b.weight) 
                return a.idx < b.idx;
            return a.weight > b.weight;
        }
        return a.bigWin > b.bigWin; 
    }
    return a.winRate > b.winRate;
}

vector<int> solution(vector<int> weights, vector<string> head2head) {
    vector<int> answer;

    int size = weights.size();
    vector<Boxer> boxers;

    
    for (int i = 0; i < size; ++i){
        Boxer boxer;            
        boxer.weight = weights[i];
        boxer.idx = i + 1;

        double win = 0;           
        double bigWin= 0;
		double match = 0;   

        for (int j = 0; j < size; ++j){
            if (i == j)  continue;

            if (head2head[i][j] == 'W'){
                if (boxer.weight < weights[j]) bigWin++;
                win++;
            }
            
            if (head2head[i][j] != 'N') match++;
        }
        boxer.bigWin = bigWin;
        if(match != 0) boxer.winRate = (win / match) * 1000000;
        else boxer.winRate = 0;
        boxers.push_back(boxer);
    }

    sort(boxers.begin(), boxers.end(), CompareBoxer);

    for (int i = 0; i < boxers.size(); ++i)
        answer.push_back(boxers[i].idx);

    return answer;
}
