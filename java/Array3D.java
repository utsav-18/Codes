public class Array3D {
    public static void main(String[] args) {
        
        int[][][] matrix3D = {
            {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            },
            {
                {10, 11, 12},
                {13, 14, 15},
                {16, 17, 18}
            }
        };

        // Loop through the 3D matrix

        for (int i=0;i<2;i++) { 
            System.out.println("2D Matrix "+(i + 1)+":");
            for (int j=0;j<3;j++) { 
                for (int k=0;k<3;k++) { 
                    System.out.print(matrix3D[i][j][k] + " ");
                }
                System.out.println(); 
            }
            System.out.println(); 
        }
    }
}
