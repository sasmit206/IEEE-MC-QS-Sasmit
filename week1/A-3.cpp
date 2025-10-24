class Solution {
public:
    int candy(vector<int>& ratings) {
        int lcandy[ratings.size()];
        int rcandy[ratings.size()];
        lcandy[0]=1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){lcandy[i]=lcandy[i-1]+1;}
            else{lcandy[i]=1;}
        }

        rcandy[ratings.size()-1]=1;
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i+1]<ratings[i]){rcandy[i]=rcandy[i+1]+1;}
            else{rcandy[i]=1;}
        }
    vector<int>toffee;
    for(int i=0;i<ratings.size();i++){
        if(lcandy[i]>rcandy[i]){toffee.push_back(lcandy[i]);}
        else{toffee.push_back(rcandy[i]);}
    }
    int sum=0;
    for(auto it:toffee){sum+=it;}
    return sum;
    }
};