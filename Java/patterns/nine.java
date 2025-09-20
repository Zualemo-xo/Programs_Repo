public class nine {
     public static void main(String[] args) {
        int n = 5;
        // upper half
        for(int i=1;i<=n;i++){
            for(int j=i;j<n;j++) System.out.print(" ");
            for(int j=1;j<=2*i-1;j++){
                if(j==1 || j==2*i-1) System.out.print(i);
                else System.out.print(" ");
            }
            System.out.println();
        }
        // lower half
        for(int i=n-1;i>=1;i--){
            for(int j=n;j>i;j--) System.out.print(" ");
            for(int j=1;j<=2*i-1;j++){
                if(j==1 || j==2*i-1) System.out.print(i);
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
}
