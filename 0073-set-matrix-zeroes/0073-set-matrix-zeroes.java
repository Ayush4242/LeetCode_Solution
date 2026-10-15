class Solution {
    public void setZeroes(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        ArrayList<Integer>row=new ArrayList<>(Collections.nCopies(n,-1));
        ArrayList<Integer>column=new ArrayList<>(Collections.nCopies(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.set(i,0);
                    column.set(j,0);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row.get(i)==0 || column.get(j)==0){
                    matrix[i][j]=0;
                }
            }
        }

    }
}