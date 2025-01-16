Microsoft Windows [Version 10.0.22631.4751]
(c) Microsoft Corporation. All rights reserved.

C:\Users\Nikhil Sukthe>git clone https://github.com/Nikhils-G/NikhilSukthe.git
fatal: destination path 'NikhilSukthe' already exists and is not an empty directory.

C:\Users\Nikhil Sukthe>git clone https://github.com/Nikhils-G/NikhilS.git
Cloning into 'NikhilS'...
remote: Enumerating objects: 371, done.
remote: Counting objects: 100% (182/182), done.
remote: Compressing objects: 100% (133/133), done.
remote: Total 371 (delta 132), reused 49 (delta 49), pack-reused 189 (from 3)
Receiving objects: 100% (371/371), 19.56 MiB | 3.14 MiB/s, done.
Filtering content: 100% (12/12), 440.45 MiB | 2.13 MiB/s, done.
Filtering content:  91% (11/12), 261.21 MiB | 2.05 MiB/s
C:\Users\Nikhil Sukthe>cd NikhilS

C:\Users\Nikhil Sukthe\NikhilS>git lfs track "*.mp4"
"*.mp4" already supported

C:\Users\Nikhil Sukthe\NikhilS>git add .gitattributes

C:\Users\Nikhil Sukthe\NikhilS>git add "C:\Users\Nikhil Sukthe\Downloads\cant.mp4"
fatal: C:\Users\Nikhil Sukthe\Downloads\cant.mp4: 'C:\Users\Nikhil Sukthe\Downloads\cant.mp4' is outside repository at 'C:/Users/Nikhil Sukthe/NikhilS'

C:\Users\Nikhil Sukthe\NikhilS>
                               move "C:\Users\Nikhil Sukthe\Downloads\cant.mp4" "C:\Users\Nikhil Sukthe\NikhilS\cant.mp4"
        1 file(s) moved.

C:\Users\Nikhil Sukthe\NikhilS>git add cant.mp4

C:\Users\Nikhil Sukthe\NikhilS>git commit -m "Add cant.mp4 using Git LFS"
[main 00dedab] Add cant.mp4 using Git LFS
 1 file changed, 3 insertions(+)
 create mode 100644 cant.mp4

C:\Users\Nikhil Sukthe\NikhilS>git push origin main
Uploading LFS objects: 100% (1/1), 5.7 MB | 397 KB/s, done.
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 395 bytes | 197.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Nikhils-G/NikhilS.git
   2d7c8c8..00dedab  main -> main

C:\Users\Nikhil Sukthe\NikhilS>
C:\Users\Nikhil Sukthe\NikhilS>
