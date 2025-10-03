cd "/Users/vacheslav/Documents/C++/Om/Om/"
g++ main.cpp -o Om
./Om

if ! command -v g++ &> /dev/null
then
 echo "Помилка: g++ не знайден. Завантажте Xcode Command Line Tools чи Homebrew."
 exit 1
fi


g++ -o Om main.cpp
if [ $? -ne 0 ]; then
 echo "Помилка компіляції ."
 exit 1
fi


./Om

