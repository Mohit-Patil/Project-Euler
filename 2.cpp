{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil Courier New;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red187\green181\blue41;\red106\green135\blue89;\red204\green120\blue50;\red181\green182\blue227;\red255\green198\blue109;\red169\green183\blue198;\red104\green151\blue187;\red95\green140\blue138;}
{\*\generator Riched20 10.0.17763}\viewkind4\uc1 
\pard\box\brdrdash\brdrw0 \sa200\sl276\slmult1\cf1\f0\fs18\lang9 #include \cf2 <bits/stdc++.h>\line\line\cf3 using namespace \cf4 std\cf3 ;\line int \cf5 main\cf6 ()\line\{\line     \cf3 int \cf6 sum = \cf7 0\cf3 ;\line     int \cf6 p = \cf7 1\cf3 ,\cf6 q = \cf7 2\cf3 ;\line     while\cf6 (q<\cf7 4000000\cf6 )\{\line         \cf3 int \cf6 temp = q\cf3 ;\line         \cf6 q = p + q\cf3 ;\line         \cf6 p = temp\cf3 ;\line         if\cf6 (q % \cf7 2 \cf6 == \cf7 0\cf6 ) sum += q\cf3 ;\line     \cf6\}\line     \cf3 if\cf6 (q % \cf7 2 \cf6 == \cf7 0\cf6 ) sum -= q\cf3 ;\line     \cf6 cout\cf8 <<\cf6 sum + \cf7 2\cf3 ;\line\cf6\}\par

\pard\sa200\sl276\slmult1\cf0\f1\fs22\par
}
 