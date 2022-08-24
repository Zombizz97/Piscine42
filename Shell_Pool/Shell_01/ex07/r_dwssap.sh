cat /etc/passwd | sed '/^#/d' | sed -n "n;p" | cut -d ":" -f1  | rev | sort -r | awk 'NR>='$FT_LINE1' && NR <= '$FT_LINE2 | tr -s '\n' ',' | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
