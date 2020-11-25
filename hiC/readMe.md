
## is only available from C++17 onwards
`g++ -std=c++17 any.cpp -o any`

```bash
[root@cpp hiC]# g++ any.cpp -o any
any.cpp: In function 'int main()':
any.cpp:6:5: error: 'any' was not declared in this scope
     any a = 1, b = string("hello");
     ^~~
any.cpp:6:5: note: 'std::any' is only available from C++17 onwards
any.cpp:7:13: error: 'b' was not declared in this scope
     cout << b.type().name() << endl;
             ^
```
> 为了方便可以直接设置 ` alias g++="g++ -std=c++17"`