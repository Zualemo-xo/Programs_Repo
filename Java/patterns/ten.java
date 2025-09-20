public class ten {
    public static void main(String[] args) {
        int n = 4;
        int size = 2*n-1;
        int[][] arr = new int[size][size];
        
        for(int layer=0; layer<n; layer++){
            int val = n - layer;
            for(int i=layer; i<size-layer; i++){
                arr[layer][i] = val;
                arr[size-layer-1][i] = val;
                arr[i][layer] = val;
                arr[i][size-layer-1] = val;
            }
        }
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
