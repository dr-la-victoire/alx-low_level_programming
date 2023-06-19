This project is to help us understand dynamic libraries in C. We will study what they are, how to create them, and compare them with static libraries, which was a previous prpoject in Sprint 1.
In this project, we created a dynamic library out of the files used in some of the projects in Sprint 1.
WHAT IS A DYNAMIC LIBRARY?
A dynamic library, also known as a shared library, is a compiled binary file containing reusable code that is loaded and linked with a program at runtime. Instead of including the library code directly in the executable, the program references the shared library, and the operating system dynamically loads it when needed. Multiple programs can share the same instance of a dynamic library.
Dynamic libraries have different file extensions depending on the platform, such as ".so" (shared object) on Unix-like systems (e.g., libexample.so) and ".dll" (dynamic-link library) on Windows systems. To use a dynamic library, you need to include its header files during compilation and link against the library at both compile-time and runtime.

Advantages of dynamic libraries:

Reduced executable size: Dynamic linking allows multiple programs to share the same instance of a library, reducing the overall size of the executable files.
Runtime flexibility: If a dynamic library is updated or patched, all programs using that library can benefit from the changes without recompilation or redistribution.
Efficient memory usage: Since dynamic libraries are loaded into memory only when needed, they can save memory resources if multiple programs are using the same library.
Disadvantages of dynamic libraries:

Dependency management: You need to ensure that the required dynamic libraries are present on the target system to run your program.
Runtime overhead: Loading and linking dynamic libraries at runtime incur some performance overhead compared to static libraries, although modern systems typically handle this efficiently.

WHAT IS THE ENVIRONMENT VARIABLE $LD_LIBRARY_PATH AND HOW DO I USE IT?
The $LD_LIBRARY_PATH environment variable is used by the system's dynamic linker/loader to specify additional directories to search for shared libraries (dynamic libraries) at runtime. When a program that depends on dynamic libraries is executed, the dynamic linker uses the paths specified in $LD_LIBRARY_PATH to locate and load the required libraries.

Here's how you can use $LD_LIBRARY_PATH:

Setting $LD_LIBRARY_PATH:

On Unix-like systems (Linux, macOS, etc.), you can set the environment variable using the following command:

bash
Copy code
export LD_LIBRARY_PATH=/path/to/library/directory
Replace /path/to/library/directory with the actual directory path where your additional shared libraries are located. You can set multiple directories by separating them with colons (":").

On Windows systems, the equivalent environment variable is %PATH%. You can set it using the set command in Command Prompt or the System Properties dialog.

Using $LD_LIBRARY_PATH:
Once you've set the $LD_LIBRARY_PATH variable, the dynamic linker will search the specified directories in the order they are listed when loading shared libraries. If the required library is found in one of these directories, it will be loaded successfully.

It's important to note that $LD_LIBRARY_PATH is typically used for development and testing purposes or when you want to override the default library search paths temporarily. For production systems, it's generally recommended to rely on standard library search paths and appropriate installation procedures.

Resetting $LD_LIBRARY_PATH:
If you want to unset or reset the value of $LD_LIBRARY_PATH and revert to the default library search behavior, you can use the following command on Unix-like systems:

bash
Copy code
unset LD_LIBRARY_PATH
On Windows, you can remove the variable or set it to an empty value using the appropriate commands.

It's worth mentioning that the specific methods for setting environment variables may vary depending on the operating system and shell you are using. The examples provided above are based on common Unix-like systems.


