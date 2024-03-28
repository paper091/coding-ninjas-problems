int coveredCities (int n, vector <int> &a) {
   // Write your code here.
   sort(a.begin(), a.end());
   int sum = 0;

   int path1 = a[0] - a[n-3];
   if(path1 < 0){ path1 = -path1; }

   int path2 = a[2] - a[n-1];
   if(path2 < 0){ path2 = -path2; }

   int path3 = a[1] - a[n-2];
   if(path3 < 0){ path3 = -path3; }

   int min;
   if(path1 < path2){
      if(path1<path3){
         min = path1;
      }
      else{ min = path3; }
   }
   else{
      if(path2<path3){
         min = path2;
      }
      else{ min = path3; }
   }

   return min;
}