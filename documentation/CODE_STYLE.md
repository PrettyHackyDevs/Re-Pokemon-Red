# Code style guidelines

This project follows `Google C++ Style Guide` for consistency's sake: https://google.github.io/styleguide/cppguide.html

The following are the guidelines in the style guide you will use the most. In case of doubt refer to the previous link.
### Variable naming:
```cpp
std::string table_name;  // OK - snake_case.
std::string tableName;   // Bad - cammelCase
```

### Class and struct naming:
```cpp
class TableInfo { // OK - PascalCase
  ...
 private:
  std::string table_name_;  // OK - snake_case underscore at end.
  static Pool<TableInfo>* pool_;  // OK.
};

struct UrlTableProperties { // OK - PascalCase
  std::string name;
  int num_entries;
  static Pool<UrlTableProperties>* pool;
};
```

### Function naming
```cpp
AddTableEntry() // OK - PascalCase
DeleteUrl()     // OK - PascalCase
OpenFileOrDie() // OK - PascalCase
```
