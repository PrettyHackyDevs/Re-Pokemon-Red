# Code style guidelines
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