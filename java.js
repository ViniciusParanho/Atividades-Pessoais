import java.util.Scanner;

public class ReverterFrase {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite uma frase:");
        String frase = scanner.nextLine();

        String[] palavras = frase.split(" ");
        
        for (int i = palavras.length - 1; i >= 0; i--) {
            System.out.print(palavras[i] + " ");
        }

        scanner.close();
    }
}