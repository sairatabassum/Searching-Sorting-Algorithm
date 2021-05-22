Number you want to search: x

mid = low + x;

```( low + high ) / 2 = low + x

x = ( low + high ) / 2 - low

x = ( low + high - 2 * low ) / 2

x = ( high - low ) / 2


> mid = low + ( high - low ) / 2   [ The Value of x ] 
```

mid = ( low + high ) / 2
For larger values the sum overflows to a negative number:
```
 cout<< 1170105034   + ( 1170105034  - 1347855270   ) / 2 <<endl;

  cout<<( 1170105034   + 1347855270  ) / 2;
```

