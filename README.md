```
# C_learning

## 环境说明
- 编译器：GCC / Clang
- C标准：C11
- 编译运行命令：
```bash
gcc 文件名.c -o program
./program
```

## 📁 代码目录（按课程章节分类）

### 第 3 章 C 语言快速入门

> 
> 数据类型、变量常量、运算符、分支、循环综合演示

- [main.c](main.c) 综合演示：整型 /char/ 浮点、变量、常量、运算符、if-else、switch、for/while 循环、猜数字小游戏
- [variable.c](variable.c) 变量基础
- [char.c](char.c) 字符与字符数组
- [printf.c](printf.c) printf 格式化输出练习

### 第 4 章 函数与程序结构

- [function.c](function.c) 函数基础、函数原型
- [recursion.c](recursion.c) 递归算法案例

### 第 5 章 预处理和宏

- [macro.c](macro.c) 宏定义基础
- [conditional_macro.c](conditional_macro.c) 条件编译

### 第 6 章 玩转数组

- [array1.c](array1.c) 一维数组基础
- [array_limits.c](array_limits.c) 数组边界
- [array_parameter.c](array_parameter.c) 数组作为函数参数
- [2d_array.c](2d_array.c) 二维数组
- [shuffle_array.c](shuffle_array.c) Fisher-Yates 数组随机洗牌

### 第 7 章 吃透指针

- [quicksort.c](quicksort.c) Hoare 分割法 指针版快速排序
- [`pointer_value.c`](pointer_value.c) 指针与内存值
- [`lvalue_rvalue.c`](lvalue_rvalue.c) 左值右值讲解
- [`dynamic_memory.c`](dynamic_memory.c) malloc/free动态内存分配

# 第8章 结构体与共用体
- [`struct.c`](struct.c) 结构体基础
- [`memory.c`](memory.c) 结构体内存对齐、内存布局
- [`union.c`](union.c) 共用体(联合体)使用演示
