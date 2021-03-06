# Programming-Contest
#### สอนการเขียนโปรแกรมด้วยภาษา C++
##### วันที่ 3 กรกฏาคม 2560
###### Tools
1. [CodeBlock](http://www.codeblocks.org/downloads/26#windows)
1. [C++ gcc Online](http://rextester.com/l/cpp_online_compiler_gcc)
###### Books
1. [Tutorial Point](https://www.tutorialspoint.com/cplusplus/index.htm)
1. [Competitive Programmer Handbook 2017](https://cses.fi/book.pdf)
1. [Art of Programming Contest](https://www.comp.nus.edu.sg/~stevenha/database/Art_of_Programming_Contest_SE_for_uva.pdf)
1. [Competitive Programming](http://www.comp.nus.edu.sg/~stevenha/myteaching/competitive_programming/cp1.pdf)
1. [Programming Challenges](http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf)
1. [Art of Computer Programming Vol.1](http://broiler.astrometry.net/~kilian/The_Art_of_Computer_Programming%20-%20Vol%201.pdf)
1. [Art of Computer Programming Vol.2](http://library.aceondo.net/ebooks/Computer_Science/algorithm-the_art_of_computer_programming-knuth.pdf)
1. [Art of Computer Programming Vol.3](http://www.kcats.org/csci/464/doc/knuth/fascicles/fasc3a.pdf)
1. [Art of Computer Programming Vol.4](https://users.dcc.uchile.cl/~nbaloian/cc3001-02/Libros/Algoritmos%20y%20Estructura%20de%20Datos/The%20Art%20of%20Computer%20Programming%20Vol.4A%20-%20Combinatorial%20Algor.pdf)
##### Courses
###### ครั้งที่ 1 วันที่ 9 กรกฏาคม 2560
1. [การเขียนโปรแกรมแบบ OOP (Object Oriented Programming](https://github.com/java2017/Programming-Contest/blob/master/codes/Sample1.cpp)
    ในการเขียนคลาสในภาษา C++ ต้องมีองค์ประกอบดังนี้        
    * Constructor คือ ฟังก์ชันที่ชื่อเดียวกันกับคลาส มีหน้าที่กำหนดค่าเริ่มต้นให้กับ Attributes
    * Members (Attributes, Methods) คือสมาชิกในคลาส โดยมีสองแบบ คือ แอดทริบิวส์ หรือตัวแปรในคลาส กับ เมดธอท คือฟังก์ชันที่ใช้ทำงานในคลาส
    * Destructor คือต้วล้างหน่วยความจำของคลาส โดยมี ~ นำหน้าคลาส สัญลักษณ์ ~ ได้มาจากการกด Shift + ตัวเปลี่ยนภาษา ค้างไว้
    * [รายละเอียดเกี่ยวกับคลาส](https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm)
    * [Class access modifiers](https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm)
    * [Inheritance](https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm)
    * [Overloading](https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm)
    * [Polymorphism](https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm)
    * [Interfaces](https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm)
1. [Pointer ในภาษา C++](https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm) คือตัวชี้ตำแหน่งหน่วยความจำ สามารถชี้ไปได้ทุกที่ แต่จำเป็นต้องมีที่จัดเก็บข้อมูลในหน่วยความจำก่อนจะชี้ไปได้ ไม่เช่นนั้นจะได้ข้อมูลขยะที่ใช้การไม่ได้ หากชี้ไปมั่ว ๆ
1. [Pointers in details](https://www.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html#zz-2)
    * [Pointer Usage](https://www.codeproject.com/Articles/11560/Pointers-Usage-in-C-Beginners-to-Advanced) / [Source Codes](https://github.com/java2017/Programming-Contest/tree/master/codes/pointer)
    * [จงทำ Quiz เรื่อง Pointer](http://digital.cs.usu.edu/~bugs/quizzes/pointers.html)
    * การเขียน * หน้าตัวแปร จะทำให้ตัวแปรนั้นเพียงตัวเดียวเป็น Pointer เช่น int* i,j;      i เป็น pointer แบบ int แต่ j เป็น int
1. [Pointer and Array](https://www.programiz.com/cpp-programming/pointers-arrays)
1. [จัดเก็บข้อมูลใน Array 10 ตัว โดยใช้ Pointer](https://github.com/java2017/Programming-Contest/blob/master/codes/Pointer1.cpp)

    * จากโปรแกรมตัวอย่าง Array 10 ตัว จะเรียงจาก 1-10 ให้ลองใช้ Pointer ชี้ไปที่ ตัวที่ 10 แล้ววิ่งย้อนกลับเพื่อแสดงเลข 10 - 1 แทน
    * จงพิมพ์เฉพาะเลขคู่ โดยใช้ Pointer อ้างอิงตำแหน่ง
    * จงพิมพ์เฉพาะเลขคี่ โดยใช้ Pointer อ้างอิงตำแหน่ง
    * จงพิมพ์จำนวนเฉพาะ โดยใช้ Pointer อ้างอิงตำแหน่ง [ตัวอย่างการตรวจสอบ Prime number](https://www.programiz.com/cpp-programming/examples/prime-function)
    * จงจัดเก็บชื่อของเราเองใน Array char ขนาด 40 ตัว แล้วเปลื่ยนเป็นชื่อเพื่อนโดยใช้ Pointer ในการเปลี่ยน
1. [Pointer to Pointer](https://www.codeproject.com/Articles/4894/Pointer-to-Pointer-and-Reference-to-Pointer)

###### ครั้งที่ 2 วันที่ 30 กรกฏาคม 2560
1. [การจัดเก็บข้อความในรูปแบบ Char[] / String](https://github.com/java2017/Programming-Contest/blob/master/codes/CharString.cpp)
1. [การจัดเก็บข้อความใน Array](https://github.com/java2017/Programming-Contest/blob/master/codes/ArrayString.cpp) and [Data1](https://github.com/java2017/Programming-Contest/blob/master/codes/data1.txt)
1. [การจัดเก็บข้อความใน Vector](https://github.com/java2017/Programming-Contest/blob/master/codes/VectorString.cpp)
1. [การหาความยาว String](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
1. [String Examples](http://anaturb.net/C/string_exapm.htm)
1. [Converting Strings to Numbers](http://www.geeksforgeeks.org/converting-strings-numbers-cc/)
1. [String to number](http://www.cplusplus.com/reference/string/stoi/)
1. [Upper Case & Lower Case](https://math-linux.com/c/faq-c/faq-c-stl/article/how-to-convert-string-to-lower-case-or-upper-case-in-c)
1. [Matrix manipulation](https://www.cs.upc.edu/~jordicf/Teaching/programming/pdf4/IP10_Matrices-4slides.pdf) and [backup link](https://github.com/java2017/Programminghttps://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-1/)-Contest/b(https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-2/)lob/master/codes/IP10_Matrices-4slides.pdf)
1. [Binary String](http://avidinsight.uk/2015/02/convert-a-number-to-a-binary-string-and-back-in-cpp/)
1. [Using bitset](http://www.cplusplus.com/forum/general/182327/)
1. [Hex String](http://timmurphy.org/2013/02/10/converting-a-hex-string-to-an-integer-in-c/)
1. [Fundamental Types](http://en.cppreference.com/w/cpp/language/types)
1. [การอ่านไฟล์ Data1.txt](https://github.com/java2017/Programming-Contest/blob/master/codes/ReadFile.cpp)
1. [Parsing Your Input and Formatting Your Output in C++](https://community.topcoder.com/tc?module=Static&d1=features&d2=112106)
1. [Big Int problems](https://www.quora.com/What-tricks-have-you-made-to-deal-large-numbers-like-10-100-in-competitive-programming)
###### แบบฝึกหัดครั้งที่ 2
1. จงจัดเก็บรายชื่อเพื่อนนักเรียนทั้งหมด
1. จงจัดเก็บข้อมูลเมทริกซ์ในอะเรย์ ขนาด 3 x 3
1. จงเพิ่ม / ลด ขนาดของเวกเตอร์
1. จงใช้เวกเตอร์เพื่อจัดเก็บเมทริกซ์

###### ครั้งที่ 3 วันที่ 13 สิงหาคม 2560 (เรียนทั้งวัน)
1. [STL Fundamental](https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm)
1. [Container in STL](http://www.cplusplus.com/reference/set)
1. Power up C++ with the Standard Template Library [Part 1](https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-1/) [ Part 2](https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-2/)
1. [C++ STL](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp9_STL.html)
1. [Data Structure#1](http://cplusplus.happycodings.com/data-structures/)
1. [Data Structure#2](http://www.sourcetricks.com/p/data-structures-using-c.html#.WWCXtYjyhPa)
1. [Complete List for Competitive Programming](http://codeforces.com/blog/entry/23054)
1. [เฉลย ICPC Pre-Contest 2017](https://www.youtube.com/playlist?list=PLn7VRmQTLR8csZ35nABZt7rtphQYIBj9e)
1. [ตัวอย่างข้อสอบ สอวน.](http://www.posn.or.th/index.php?option=com_content&task=view&id=374&Itemid=51)
 
###### ครั้งที่ 4 วันที่ 27 สิงหาคม 2560 (เรียนทั้งวัน)
1. [Test Case Generator](http://spojtoolkit.com/TestCaseGenerator/)
1. [How to prepare for competitive programming ?](https://medium.com/@andreimargeloiu/how-to-prepare-for-competitive-programming-396d557e0c12)
1. [TDM-GCC 32, 64 bits for Windows](http://tdm-gcc.tdragon.net/download)
1. [Help for codeblocks](http://wiki.codeblocks.org/index.php/Help_plugin) ** เปิดด้วย double click ที่ file เอา check box ด้านล่างออกก่อน**
1. [Data Science tutorials from TopCoder](https://www.topcoder.com/community/data-science/data-science-tutorials/)
1. [Top Coder Arena](https://arena.topcoder.com) 
1. [Code Chef](https://www.codechef.com/problems/school/)
1. [The 10 most popular coding challenge websites for 2017](https://medium.freecodecamp.org/the-10-most-popular-coding-challenge-websites-of-2016-fb8a5672d22f)
1. [C/C++ tricks for Programming Contest](https://www.quora.com/What-are-some-cool-C++-tricks-to-use-in-a-programming-contest)
1. [C++ tricks](http://orcunyilmaz.com/coding-c/eight-cool-c-tricks-use-programming-contest.html), [C++ Tricks from Codeforces](http://codeforces.com/blog/entry/15643)
###### sort(a, a+n); จัดเรียง a จากน้อยไปหามาก sort(a, a+n, greater\<int>()); จัดเรียง a จากมากไปหาน้อย 
1. [Sort Array](https://github.com/java2017/Programming-Contest/blob/master/codes/sortArray1.cpp)

###### ครั้งที่ 5 วันที่ 10 กันยายน 2560 (เรียนครึ่งวันปกติ)
###### ศึกษา Algorithm ที่สำคัญ ได้แก่
1. [Greedy Algorithm](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/)
1. [Tutorial for Dynamic Programming](https://www.codechef.com/wiki/tutorial-dynamic-programming)

###### ครั้งที่ 6 วันที่ 17 กันยายน 2560 (เรียนครึ่งวันปกติ)
1. [Sort](https://github.com/java2017/Programming-Contest/blob/master/codes/sort1.cpp)
1. [Priority Queue](https://www.hackerrank.com/topics/priority-queue)
1. [Priority Queue-Heap](http://www.eecs.wsu.edu/~ananth/CptS223/Lectures/heaps.pdf)

###### ครั้งที่ 7 วันที่ 1 ตุลาคม 2560 (เรียนครึ่งวันปกติ)
Number Theory
1. [Power Mod Checking](https://www.mtholyoke.edu/courses/quenell/s2003/ma139/js/powermod.html)
1. [Prime number - Sieve of Eratosthenes](http://www.geeksforgeeks.org/sieve-of-eratosthenes/)
1. [Math - Long Digit](https://github.com/BedirT/Algorithms_and_DS/tree/master/Algorithms/Math)
1. [Coloring A Tree](https://www.codechef.com/SNCKEL16/problems/COLTREE)
1. [Smallest K digit number divisible by X](http://www.geeksforgeeks.org/smallest-k-digit-number-divisible-x/)
1. [Largest K digit number divisible by X](http://www.geeksforgeeks.org/largest-k-digit-number-divisible-x/)
1. [Write an Efficient Method to Check if a Number is Multiple of 3](http://www.geeksforgeeks.org/write-an-efficient-method-to-check-if-a-number-is-multiple-of-3/)
1. [Extra Long Factorials](https://www.hackerrank.com/challenges/extra-long-factorials/editorial)
1. [Factorial of a large number](http://www.geeksforgeeks.org/factorial-large-number/)
1. [Count trailing zeroes in factorial of a number](http://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/)
1. [Goldbach’s Conjecture](http://www.geeksforgeeks.org/program-for-goldbachs-conjecture-two-primes-with-given-sum/)

###### ครั้งที่ 8 วันที่ 7 ตุลาคม 2560 (เรียนครึ่งวันปกติ)
1. [Depth First Search Traversal](http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/)
1. [Breath First Search Traversal](http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/)
1. [C code exercises](https://helloacm.com/tag/c-coding-exercise/)
1. [ACM-ICPC World Finals in Phuket, Thailand ](http://icpcnews.tumblr.com/post/144749892264/video-solutions-and-judge-explanations-for-2016)
1. [ICPCNews youtube channel](https://www.youtube.com/user/ICPCNews)


###### ครั้งที่ 9 วันที่ 14 ตุลาคม 2560 (เรียนครึ่งวันปกติ)
1. [String manipulation](http://www.cplusplus.com/reference/string/string/)
1. [Quick Sort in array-STL](http://www.cplusplus.com/reference/cstdlib/qsort/)
1. [Quick Sort in vector-STL](http://www.cplusplus.com/forum/general/170827/)
1. [Binary Search-STL](http://www.cplusplus.com/reference/algorithm/binary_search/)
1. [Binary Search-STL indexing](http://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/)
1. [Data Structures](http://www.geeksforgeeks.org/data-structures/)
1. [Problems & Solution](https://www.hackerrank.com/domains/algorithms/dynamic-programming)
1. [Dynamic Programming and etc.](http://www.techiedelight.com/Category/dynamic-programming/)
1. [Backtracking Algorithms](http://www.geeksforgeeks.org/backtracking-algorithms/)
