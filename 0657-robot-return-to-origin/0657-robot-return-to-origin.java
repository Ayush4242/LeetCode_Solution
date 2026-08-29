class Solution {
    public boolean judgeCircle(String moves) {
        int r=0,c=0;
        for(char ch:moves.toCharArray()){
            if(ch=='U'){
                r++;
                c++;
            }
            else if(ch=='D'){
                r--;
                c--;
            }
            else if(ch=='L'){
                c--;

            }
            else{
                c++;
            }
        }
        if(r==0 && c==0){
            return true;
        }

        return false;
    }
}