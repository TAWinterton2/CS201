#!/bin/bash

# #1) Use the command chmod to modify the permissions to files and directries for owner, gorup, and others
# Create a shell script that give the current user full permissoin, and everyone else read and execute permission only. 

chmod 733 myfile.txt

# #2) Create a FAT, NTFS, and EXT3 filesystem. Mount it in three separate subdirectories
# inside /mnt/(myFat, myNTFS, and myEXT3)

dd if=/dev/zero of=fat-image.dd bs=1M count=10

sudo mkdir /mnt/myFat

mount fat-image.dd /mnt/my-fat-fs

umount /mnt/my-fat-fs

dd if=/dev/zero of=ntfs-image.dd bs=1M count=10
mkfs.ntfs ntfs-image.dd --force

sudo mkdir /mnt/myNTFS

mount ntfs-image.dd /mnt/myNTFS

umount /mnt/myNTFS

dd if=/dev/zero of=myEXT3.dd bs=1M count=10

sudo mkdir /mnt/myEXT3

mount myEXT3.dd /mnt/myEXT3

umount /mnt/myEXT3

#3) Check w/ df Comand

df -h 

#4) create 3 different users called 'testuser1', 'testuser2', and 'testuser3'.

adduser testuser
adduser testuser2
adduser testuser3

#5) create a group called 'myfsuser'
groupadd myfsuser




#6) Add all those 3 user to 'myfsuser' group
usermod -a -G myfsuser testuser
usermod -a -G myfsuser testuser2
usermod -a -G myfsuser testuser3

#7)Set the permission of the ‘myFat’ directory so that only the members of
#‘myfsuser’ group can access it.

chown :myfsuser /mnt/myFat
chmod g=rwx /mnt/myFat



#8) Now write a program (shell script) that will check if the current user has write
#permission to myFat, myNTFS and myEXT3. In three separate print statements let the
#user know about it. For example, if the user has write permission to ‘myFat’ print a
#message ‘you have permission to write in myFat. Otherwise, print a
#message ‘you do not have permission to write in myFat. And so on

if [ "$(stat -c "%a" /mnt/myFat)" = "777" ]; 
then
	echo 'you have permmision to write in myFat'
else
	echo 'you do not have permmision to write in myFat'
	
fi

if [ "$(stat -c "%a" /mnt/myEXT3)" = "777"  ]; 
then
	echo 'you have permmision to write in myEXT3'
else
	echo 'you do not have permmision to write in myEXT3'
fi


if [ "$(stat -c "%a" /mnt/myNTFS)" = "777"  ];
then
	echo 'you have permmision to write in myNTFS'
else
	echo 'you do not have permmision to write in myNTFS'
fi

#9)Now modify the ~./bashrc file so that the user will automatically get the
#message right after login.

 


