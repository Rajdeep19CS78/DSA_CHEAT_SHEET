vector<int> Solution::repeatedNumber(const vector<int> &A) {
  // Approach 1 using Hash array
     /*vector<int>v(A.size()+1,0);

    for(int i=0;i<A.size();i++){

        v[A[i]] += 1;

    }

    int a,b;

    for(int i=1;i<=A.size();i++){

        if(v[i]==0)b=i;

        else if(v[i]==2)a=i;

    }

    return{a,b};*/
  //Approach 2 using mathematical equation of sums and squares.
    long long int len = A.size();
    long long int Sum_N = (len * (len+1) ) /2, Sum_NSq = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       Sum_N -= (long long int)A[i];
       Sum_NSq -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (Sum_N + Sum_NSq/Sum_N)/2;
    repeating= missingNumber - Sum_N;
    vector <int> ans;
    ans.push_back(repeating);
    ans.push_back(missingNumber);
    return ans;
}
