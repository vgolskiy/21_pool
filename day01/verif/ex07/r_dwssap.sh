#!/bin/bash
cat /etc/passwd | grep -v -e '#' | sed 'n;d' |  cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed '$!s/$/, /g' | awk '$1=$1' RS= OFS=' ' | sed 's/$/\./g'
