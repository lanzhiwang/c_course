/**
- `signed char`
  The 8-bit signed char data type can hold integer values in the range of -128 to 127.
  8 位有符号 char 数据类型可以在范围为 -128 到 127.

- `unsigned char`
   The 8-bit unsigned char data type can hold integer values in the range of 0 to 255.
   8 位无符号 char 数据类型可以保存 范围为 0 到 255.

- `char`
  Depending on your system, the char data type is defined as having the same range as either the signed char or the unsigned char data type (they are three distinct types, however). By convention, you should use the char data type specifically for storing ASCII characters (such as 'm'), including escape sequences (such as '\n').
  根据您的系统, char 数据类型被定义为与 有符号 char 或 无符号 char 具有相同的范围数据类型(但是, 它们是三种不同的类型).  按照惯例,  您应该使用 `char` 数据类型专门用于存储 ASCII 字符(例如 'm'), 包括转义序列(例如 '\n'). 

- `short int`
  The 16-bit short int data type can hold integer values in the range of -32,768 to 32,767. You may also refer to this data type as `short`, `signed short int`, or `signed short`.
  16 位 short int 数据类型可以在范围为 -32,768 到 32,767.  您也可以将此数据类型称为 short、signed short int 或 signed short. 

- `unsigned short int`
  The 16-bit unsigned short int data type can hold integer values in the range of 0 to 65,535. You may also refer to this data type as `unsigned short`.
  16 位 `unsigned short int` 数据类型可以保存整数值 在 0 到 65,535 的范围内. 您也可以参考此数据类型作为 unsigned short 的. 

- `int`
  The 32-bit int data type can hold integer values in the range of -2,147,483,648 to 2,147,483,647. You may also refer to this data type as `signed int` or `signed`.
  32 位 int 数据类型可以保存 从 -2,147,483,648 到 2,147,483,647.  您也可以参考此数据类型 如 signed int 或 signed. 

- `unsigned int`
  The 32-bit unsigned int data type can hold integer values in the range of 0 to 4,294,967,295. You may also refer to this data type simply as `unsigned`.
  32 位 unsigned int 数据类型可以将整数值保存在 范围为 0 到 4,294,967,295.  您也可以参考此数据类型 简单地说是 unsigned. 

- `long int`
  The 32-bit long int data type can hold integer values in the range of at least -2,147,483,648 to 2,147,483,647. (Depending on your system, this data type might be 64-bit, in which case its range is identical to that of the long long int data type.) You may also refer to this data type as `long`, `signed long int`, or `signed long`.
  32 位 long int 数据类型可以保存整数值 范围至少为 -2,147,483,648 到 2,147,483,647.  (取决于 您的系统, 此数据类型可能是 64 位, 在这种情况下, 其范围为 与 long long int 数据类型相同).  您也可以 将此数据类型称为 long、signed long int 或 signed long. 

- `unsigned long int`
  The 32-bit unsigned long int data type can hold integer values in the range of at least 0 to 4,294,967,295. (Depending on your system, this data type might be 64-bit, in which case its range is identical to that of the unsigned long long int data type.) You may also refer to this data type as `unsigned long`.
  32 位 unsigned long int 数据类型可以保存整数值 至少在 0 到 4,294,967,295 的范围内.  (取决于您的 system, 则此数据类型可能是 64 位, 在这种情况下, 其范围为 与 unsigned long long int 数据类型相同).  您可以 也可将此数据类型称为 unsigned long. 

- `long long int`
  The 64-bit long long int data type can hold integer values in the range of -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. You may also refer to this data type as `long long`, `signed long long int` or `signed long long`. **This type is not part of C89, but is both part of C99 and a GNU C extension**.
  64 位 long int 数据类型可以保存 -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807 范围内的整数值. 您也可以将此数据类型称为 long long、 signed long long int 或 signed long long. 此类型为 不是 C89 的一部分, 但它既是 C99 的一部分, 也是 GNU C 扩展的一部分. 

- `unsigned long long int`
  The 64-bit unsigned long long int data type can hold integer values in the range of at least 0 to 18,446,744,073,709,551,615. You may also refer to this data type as `unsigned long long`. **This type is not part of C89, but is both part of C99 and a GNU C extension**.
  64 位 unsigned long long int 数据类型可以保存至少 0 到 18,446,744,073,709,551,615 范围内的整数值.  您可以 也可将此数据类型称为 `unsigned long long`.  此类型为 不是 C89 的一部分, 但它既是 C99 的一部分, 也是 GNU C 扩展的一部分. 

///////////////////////////////////////////////////

- `float`
  The float data type is the smallest of the three floating point types, if they differ in size at all. Its minimum value is stored in the `FLT_MIN`, and should be no greater than `1e-37`. Its maximum value is stored in `FLT_MAX`, and should be no less than `1e37`.
  float 数据类型是三个浮点中最小的一个类型(如果它们的大小完全不同).  它的最小值存储在 `FLT_MIN`, 并且不应大于 `1e-37`.  它的最大值以 `FLT_MAX` 存储, 且应不小于 `1e37`. 

- `double`
  The double data type is at least as large as the `float` type, and it may be larger. Its minimum value is stored in `DBL_MIN`, and its maximum value is stored in `DBL_MAX`.
  double 数据类型至少与 float 一样大 type 中, 并且它可能更大.  它的最小值存储在 `DBL_MIN`, 其最大值存储在 `DBL_MAX` 中. 

- `long double`
  The long double data type is at least as large as the `float` type, and it may be larger. Its minimum value is stored in `LDBL_MIN`, and its maximum value is stored in `LDBL_MAX`.
  long double 数据类型至少与 `float` 类型, 并且它可能更大. 它的最小值存储在 `LDBL_MIN`, 其最大值存储在 `LDBL_MAX` 中. 

 */
