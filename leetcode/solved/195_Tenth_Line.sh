# Read from the file file.txt and output the tenth line to stdout.

lines=$(wc -l file.txt | cut -d' ' -f1)

if [ "$lines" -gt "9" ]; then
    cat file.txt | head -n 10 | tail -n 1
fi
