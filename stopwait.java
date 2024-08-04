import java.util.*;

// Importing Random class to generate random acknowledgements
import java.util.Random;

// Main class to demonstrate Stop-and-Wait protocol
public class stopwait {
    static ArrayList<String> arr = new ArrayList<>(); // ArrayList to store received frames
    static boolean flag;

    // Receiver function to simulate receiving frames and generating acknowledgements
    static void receiver(String s) {
        int a = (int)(Math.random()*2); // Simulating random acknowledgment (0 or 1)
        if (a == 1) {
            arr.add(s); // If acknowledgment is 1, add the frame to the received frames
            flag = true;
        } else {
            flag = false; // If acknowledgment is 0, set the flag to false
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of data to be sent");
        int n = sc.nextInt();
        flag = false;
        int idx = 0;

        while (idx < n) {
            System.out.println("Enter Frame " + (idx + 1));
            String s = sc.next();
            System.out.println("Sending Frame " + (idx + 1));
            receiver(s); // Simulating sending the frame and receiving acknowledgment

            if (flag == true) {
                System.out.println("Received the acknowledgment for Frame " + (idx + 1));
                System.out.println("Frame " + (idx + 1) + " sent successfully");
                System.out.println();
                idx++;
            } else {
                System.out.println("Did not receive the acknowledgment of Frame " + (idx + 1));
                System.out.println();
                System.out.println("Resending the Frame " + (idx + 1));
                System.out.println();
                receiver(s); // Resending the frame and receiving acknowledgment

                while (flag != true) {
                    System.out.println("Did not receive the acknowledgment of Frame " + (idx + 1));
                    System.out.println("Resending the Frame " + (idx + 1));
                    System.out.println();
                    receiver(s); // Resending the frame and receiving acknowledgment
                }

                System.out.println("Received the acknowledgment for Frame " + (idx + 1));
                System.out.println("Frame " + (idx + 1) + " sent successfully");
                idx++;
            }

            flag = false;
            System.out.println();
        }

        System.out.println("Receiver received all the Frames");
        System.out.println("Received Frames are");
        System.out.println(arr);
    }
}