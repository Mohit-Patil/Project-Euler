{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil Courier New;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red187\green181\blue41;\red106\green135\blue89;\red144\green139\blue37;\red204\green120\blue50;\red181\green182\blue227;\red255\green198\blue109;\red169\green183\blue198;\red104\green151\blue187;\red95\green140\blue138;}
{\*\generator Riched20 10.0.17763}\viewkind4\uc1 
\pard\box\brdrdash\brdrw0 \sa200\sl276\slmult1\cf1\f0\fs18\lang9 #include \cf2 <bits/stdc++.h>\line\cf1 #include \cf2 <numeric>\line\cf1 #define \cf3 lli \cf4 long long int\line using namespace \cf5 std\cf4 ;\line int \cf6 prime\cf7 (\cf4 int \cf7 n)\line\{\line     \cf4 int \cf7 i\cf4 ;\line     for\cf7 (i=\cf8 2\cf4 ;\cf7 i<=n/\cf8 2\cf4 ;\cf7 i++)\line     \{\line         \cf4 if\cf7 (n%i!=\cf8 0\cf7 )\line             \cf4 continue;\line         else\line             return \cf8 0\cf4 ;\line     \cf7\}\line     \cf4 return \cf8 1\cf4 ;\line\cf7\}\line\line\cf4 int \cf6 main\cf7 ()\line\{\line     \cf4 int \cf7 counter = \cf8 2\cf4 ;\line     int \cf7 i = \cf8 3\cf4 ;\line     while\cf7 (counter != \cf8 10001\cf7 )\{\line         i += \cf8 2\cf4 ;\line         if\cf7 (prime(i)) \{\line             counter++\cf4 ;\line         \cf7\}\line     \}\line     cout\cf9 <<\cf7 i\cf4 ;\line\cf7\}\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\par
}
 