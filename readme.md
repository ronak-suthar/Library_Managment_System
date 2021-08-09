# Library Managment Software

- Language & Tool : ![C Labguage](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)![VS Code](https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white)

- Prequiste installations required to run the program are Git,GCC Complier

- Clone the Project :

```bash
    git clone git@github.com:ronak-suthar/Library_Managment_System.git
```
- Once into the Directory then compile and create executable using
```bash
    gcc src/main.c implementation/*.c -o lms
```
- Once Successfully Compiled then you can run the exectable using
```bash
    ./lms
```


### Flow of Program 

-  First Thing that is displayed to user is the Main Menu Were they have to choose their category
    - ![Menu Image](images/img_01.png)

-  Next to step to choose category and authenticate ourselves 
    - If our record exists already then we login
    - Else we create our record and then move ahead
    image
    - Lets Create Record as a Library staff Category.
    ![Login Screen](images/img_02.png)
    ![Create Record of User](images/img_04.png)
- Once we haved logged in we get options to perform as per our category
    - For example these are operations that a Library staff can perform
    ![Library Staff](images/img_05.png)
- Let move to other part were a librarian is managing the library
    - Let us Add New Books to Record
    ![Library Staff](images/img_07.png)
    - View All Books In Record
    ![Library Staff](images/img_12.png)
- Let's Login as a Student
    - ![Student Logged In](images/img_13.png)
- We can issue , view issued books and return books as a student ot faculty

# Thank You For Checking This Repo Out !
# Will Add More features later like Fine for returing after due date and others...

