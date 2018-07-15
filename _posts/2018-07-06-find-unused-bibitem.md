---
title: "Find unused \\bibitem in LaTeX documents"
excerpt: "Python re module to analyze tex and aux files"
sitemap: true
usemath: false  
---

In case of `\bibitem` style bibligraphies in `LaTeX`, here's a small script to find currently not used references (e.g. not commented out). It compares the `.aux` file and the `.tex` file):  

```python 
import sys
import re

# .tex and .aux files 
tex = sys.argv[1] + ".tex"
aux = sys.argv[1] + ".aux"

# search for lines with "\citation" in aux  
# split and flatten needed for cases of multiple citations, e.g. \cite{A,B,C}  
laux = [re.search('citation{(.*)}', line).group(1).split(',') for line in open(aux) if "\\citation{" in line]

# flatten list  
laux = [x for sl in laux for x in sl]

# search for lines with "\bibitem" but not "%\bibitem" in tex
ltex = [re.search(']{(.*)}', line).group(1) for line in open(tex) if "\\bibitem" in line and not line[0] == "%"]

# result: 
print("This bibitems are not used: {}".format(sorted(set(ltex) - set(laux))))
```
Howto run: 
```bash 
python script.py yourfilename 
```

