package Videos.Recursividad;
public class Recursividad {
    public static void main(String[] args) {
        //llamar metodos
        int[] nums = {12,45,67,89,84,65,21,44,3};
        int busca = 44, n = nums.length;
        int res = binSearch(nums, 0, n-1, busca);
        if (res == -1)
            System.out.println("Not found");
        else
            System.out.println("Found at index" + (res));

    }

    public static void escribeInverIt(String cadena){
        //metodo iterativo
        int size = cadena.length();
        while (size > 0){
            System.out.println(cadena.charAt(size-1));
            size--;
        }
    }

    public static void  escribeInversa (String cadena, int tam){
        // metodo recursivo
        if (tam> 0){
            System.out.println(cadena.charAt(tam-1));
            escribeInversa(cadena, tam-1);
        }
    }

    public static int binSearch(int[] arr, int left, int right, int value){
        //busqueda binaria
        if (right>=left){
            int mid = left + (right - left) / 2;
            if (arr[mid]== value)
                return mid;
            if (arr[mid] > value)
                    return binSearch(arr, left, mid - 1, value);
            return binSearch(arr, mid + 1, right, value);
        }
        return -1;
    }
}
