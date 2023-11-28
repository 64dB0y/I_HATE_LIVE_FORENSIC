# **I_HATE_LIVE_FORENSIC**

This Repository is for Live Forenisc Script

## **1. Common Concept**

This repository is dedicated to developing automated tools for live digital forensics, applicable across both Linux and Windows platforms. Live forensics refers to the process of collecting and analyzing digital evidence from a computer system without shutting it down, which is crucial in cases where stopping the system could lead to the loss of valuable volatile data.

Assuming our scripts are stored on a USB drive, this drive is then attached to the system under investigation, be it compromised or under analysis. Our scripts are designed to run directly from the USB, facilitating a streamlined process in live forensic scenarios.

+---------------------+---------------------+<br/>
|                     |                     |<br/>
|    Script Storage   |   Data Storage      |<br/>
|      Partition      |     Partition       |<br/>
|                     |                     |<br/>
+---------------------+---------------------+<br/>
|                                           |<br/>
|                USB Drive                  |<br/>
|                                           |<br/>
+-------------------------------------------+<br/>

For optimal functionality, the USB drive should be prepared with two distinct partitions. The first partition contains all our scripts along with the necessary programs required for their execution. The second partition is reserved for storing the data gathered by these scripts during the forensic process. This dual-partition setup ensures a clear separation between tools and collected data, enhancing both organization and efficiency in the live forensic investigation.

In addition to the fundamental concept of live forensics, our scripts are meticulously designed to collect both active and inactive data from the target system. The specific types of data gathered by our scripts are as follows:

Active Data Collection
For active data, our scripts are capable of:

Creating Memory and Virtual Memory dumps.
Collecting network configuration and connection status.
Gathering information about running processes and their resource usage.
Retrieving details about the currently logged-in user.
Compiling system event logs and registry information.
Listing programs configured to start automatically during boot.
Collecting information about scheduled tasks and clipboard history.
Inactive Data Collection

For inactive data, our scripts focus on:

Collecting file system metadata including MFT, Boot, Amcache.
Retrieving registry files like SAM, SYSTEM, SOFTWARE, SECURITY.
Gathering Prefetch and Superfetch data.
Compiling Event Log files for the target host.
Collecting Recycle Bin information.
Retrieving browser artifacts including cache, cookies, history, and download history.
Collecting System Restore Points (or System Volume Information).
Gathering Portable Device Information.
Retrieving Link File and JumpLists data.

[*] It's important to note that the data available for collection can vary between different operating systems, hence some differences in the information gathered from Linux and Windows systems.

Furthermore, our script suite is divided into three main components. The main script allows users to choose whether to collect only active data, only inactive data, or both. This flexibility ensures that investigators can tailor the data collection process to the specific requirements of each forensic examination.

## **2-1 How To Use Linux Version**
## **2-2 How To Use Linux Version**

1. Go to root directory
'cd /' or 'cd ..' twice

2. Make directory mnt1 & mnt2
These directories are for mounting each partition of Forensic USB
'mkdir mnt1', 'mkdir mnt2'

3. Mount the USB
Check which directory your USB has been connected
If the directory is /dev/sdb1 and /dev/sdb2, mount each of it to mnt1 and mnt2
ex)
sudo mount /dev/sdb1 /mnt1
sudo mount /dev/sdb2 /mnt2

4. Give permission to Forensic.bash script
All the other script's permission wil be given by Forensic.bash
sudo chmod +x ./Forensic.bash

5. Run the script!
sudo ./Forensic.bash
