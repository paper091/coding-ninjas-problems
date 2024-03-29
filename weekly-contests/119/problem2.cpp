int numberOfElement(int n, vector<int> &v) {
    // Write your code here.
    int counter = 0;
    for(int i = 0; i < n; i++){

      int prev;  
      if (i-1 < 0){ prev = 0; }
      else{ prev = v[i-1]; }

      int next;
      if(i+1 > (n-1)){ next = 0; }
      else{ next = v[i+1]; }
      
      int sum = prev+v[i]+next;
      if( ((sum/2)==v[i]) || (((sum+1)/2)==v[i]) ){
          counter++;
      }
    }

    return counter;
}