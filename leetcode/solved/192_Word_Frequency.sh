# Read from the file words.txt and output the word frequency list to stdout.
cat words.txt | tr ' ' '\n' | grep -v "^$" | sort | uniq -c | sort -nr | awk ' { t = $1; $1 = $2; $2 = t; print; } '
