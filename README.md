# Text-Encryption
Caesar's Cipher

This program encrypts the text in the message file via the Caesar's cipher. 

Precondition: A file "message.txt" which contains text to be encrypted, a valid shift amount (1 - 25) int. 

Some of the details:
  * There is no limit on the size of the file to be encrypted or on the length of each line in the file.
  * Lower-case letters remain lower-case and upper-case letters remain upper-case
  * Characters other than letters should be left unchanged

To run the program complie the encrypt.c file and run it following command:
  
    * ./encrypt message.txt 3
       (where 3 is the shift amount, and encrypt is the name of the executable complied file)
  
Results:
  After running the above command, the encrypted text will be redirected to an output file named "message.txt.enc". 
