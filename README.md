# Get_Next_Line

<img src="https://i.ytimg.com/vi/-Mt2FdJjVno/maxresdefault.jpg" align="right"
     alt="libft" width="200" height="200">

The **get_next_line** project is an essential step in the **42** curriculum, requiring students to reimplement the getline function from the **C** standard library. This function reads a line of text from a file character by character, **handling end-of-file (EOF) and newline (\n) characters**.

### **Key Features**
**get_next_line** offers the following functionalities:

**Read a line of text from an open file**: *The function reads a file line by line, storing each line in a character string*.<br>
**Handle end-of-file (EOF) and newline (NL) characters**: *The function detects the end of the file and stops accordingly. It also identifies newline characters and includes them in the read line*.<br>
**Dynamically allocate memory to store the read line**: *The function uses malloc to allocate the necessary memory for the character string that will hold the read line*.<br>
**Return the read line or a value indicating an error**: *If the reading is successful, the function returns the read line and updates the file pointer to point to the next line. If an error occurs, the function returns a negative value or NULL*.<br>

### **Skills Acquired**
By completing the get_next_line project, students develop the following skills:

**File and pointer manipulation**: *They learn to open, read, and close files, as well as manipulate file pointers and character pointers.*<br>
**Dynamic memory management (malloc, free)**: *They practice dynamic memory allocation and deallocation to store the read lines.*<br>
**Reading and processing individual characters**: *They learn to read and process individual characters from a file, considering special characters like NL and EOF.*<br>
**Error handling and edge cases**: *They develop techniques for handling read errors, edge cases, and error conditions.*<br>


## How To Use

### **Compilation**

```bash
# Clone this repository
$ git clone https://github.com/HaruSnak/libft.git

# Go into the repository
$ cd libft

# To compile the program
$ make

# To compile the bonus if there is one
$ make bonus

# Allows you to do a complete cleaning of your construction environment
$ make fclean
```

## Notes

<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710270009-125.png"
         alt="Sponsored by Evil Martians" width="216" height="164">
</p>



## Credits

Below you will find the links used for this project:

- [Norm 42](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- [Nikito's explanation in video](https://www.youtube.com/watch?v=-Mt2FdJjVno)
- [Ji Woo Lee | GNL](https://velog.io/@ljiwoo59/getnextline)

