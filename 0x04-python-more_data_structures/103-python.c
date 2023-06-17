#include <stdio.h>

/**
 * Prints the contents of a Python list.
 */
void print_python_list(PyObject *p) {
    Py_ssize_t size = PyList_Size(p);
    Py_ssize_t allocated = ((PyListObject *)p)->allocated;
    Py_ssize_t i;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", allocated);

    for (i = 0; i < size; i++) {
        PyObject *item = PyList_GET_ITEM(p, i);
        const char *typeName = Py_TYPE(item)->tp_name;
        printf("Element %ld: %s\n", i, typeName);
    }
}

/**
 * Prints the contents of a Python bytes object.
 */
void print_python_bytes(PyObject *p) {
    Py_ssize_t size;
    Py_ssize_t i;
    unsigned char *data;

    printf("[.] bytes object info\n");
    
    if (!PyBytes_Check(p)) {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    data = (unsigned char *)PyBytes_AsString(p);

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", PyUnicode_AsUTF8(PyObject_Str(p)));

    printf("  first %ld bytes: ", size > 10 ? 10 : size);
    for (i = 0; i < size && i < 10; i++) {
        printf("%02x", data[i]);
        if (i + 1 < size && i + 1 < 10) {
            printf(" ");
        }
    }
    printf("\n");
}
