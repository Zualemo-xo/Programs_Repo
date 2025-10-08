public class six {
     public static void main(String[] args) {
        int n=4;
        int[][] arr=new int[n][n];
        int val=1, top=0, left=0, bottom=n-1, right=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++) arr[top][i]=val++;
            top++;
            for(int i=top;i<=bottom;i++) arr[i][right]=val++;
            right--;
            for(int i=right;i>=left;i--) arr[bottom][i]=val++;
            bottom--;
            for(int i=bottom;i>=top;i--) arr[i][left]=val++;
            left++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) System.out.print(arr[i][j]+"\t");
            System.out.println();
        }
    }
}
