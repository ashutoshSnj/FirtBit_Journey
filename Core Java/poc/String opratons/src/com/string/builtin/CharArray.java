package com.string.builtin;


public class CharArray {
    public static void main(String[] args) {
        String str = "Ashutosh Shelke";
        char[] charArray = str.toCharArray(); // Convert String to char array

        // Example: Changing all characters to uppercase
        for (int i = 0; i < charArray.length; i++) {
            System.out.println(charArray[i]); // Print each character

            // Let's modify: Convert lowercase letters to uppercase
            if (charArray[i] >= 'a' && charArray[i] <= 'z') {
                charArray[i] = (char) (charArray[i] - 32); // Convert to uppercase
            }
        }

        // Convert char array back to String
        String modifiedStr = new String(charArray);
        System.out.println("Modified String: " + modifiedStr);
    }
}
