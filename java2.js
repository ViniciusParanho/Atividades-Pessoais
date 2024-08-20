import java.util.Scanner;

public class ReverterFrase {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite uma frase:");
        String frase = scanner.nextLine();

        String[] palavras = frase.split(" ");
        StringBuilder fraseReversa = new StringBuilder();

        for (int i = palavras.length - 1; i >= 0; i--) {
            fraseReversa.append(palavras[i]);
            if (i != 0) {
                fraseReversa.append(" ");
            }
        }

        System.out.println("Frase invertida:");
        System.out.println(fraseReversa.toString());

        scanner.close();
    }
}