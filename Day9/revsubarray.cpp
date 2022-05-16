bool rev(vector<int> &a, int n){
    int seq ,cnt = 0;
    int i =1;
    if(a[i]>a[i-1])seq = 0;
    else seq = 1;
    while(i<n){
        if(seq){
            if(a[i] > a[i-1]){
                cnt++;
                seq = 1-seq;
            }
        }
        else{
            if(a[i]<a[i-1]){
                cnt++;
                seq = 1-seq;
            }
        }
        if(cnt==2){
            return false;
        }
        i++;
    }

    return true;
}
