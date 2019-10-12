# EECS349Homework2
Alexander Marshall, awm48
EEC349, Computer Security
Homework 2 Submission for Computer Security

Step 1
The c program for the PE-Import.exe can be found in the 'C Code' folder.
The program checks if PE-1.txt exists in the C:\ drive, and if not creates one.
It then checks if the text "I want to learn PE file format!" if it is not in the file.
The exe can be found in the 'FinalExes' folder labeled PE-Import.exe.
I have to run it as admin on my computer to make sure the file is actually created.

Step 2
There are two png screenshots of the import table for the PE-Import.exe in the screenshots folder.
The Screenshots are named PE-ImportTable(1 of 2) and PE-ImportTable(2 of 2) respectively.

Step 3.1 and 3.2
The packed exe is located in the FinalExe folder named PackedPE-Import.exe
The screenshots associated with this step are in the Screenshots folder
They are named PackedPE-ImportTable and PackedPE-ImportError

Step 3.3
The unpacked exe is located in the FinalExe folder named UnpackedPE-Import.exe
The screenshots associated with this step are in the Screenshots folder
They are named UnpackedPE-ImportTable(1 of 2), UnpackedPE-ImportTable(2 of 2), UnpackedPE-ImportDwarfInfo
The contents of the import table for the unpacked is the same as in step 2.

Step 4
The obfuscated exe is located in the 'FinalExes' folder name ObfuscatedPE-Import.exe 
The code for the obfuscated exe is in the 'C Code' folder named ObfuscatedPE-Import.cpp.
The virustotal link for the antimalware scanners is: https://www.virustotal.com/gui/file/f0c1373e26bade7e358bf266aa0d37be95e6132a7e7c2d98bf73b8ef9f61f108/detection
I found that packing the exe gave me the best results for having the malware detect the exe.
On the other hand I used AxCrypt to encrypt the exe and none of the malware was able to detect it.
