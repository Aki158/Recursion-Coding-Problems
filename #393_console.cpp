// C++ の標準入出力ライブラリは iostream ライブラリです
// iostream ライブラリを使用すると、入出力ストリームを使用することができます

#include <iostream>
#include <string>
   
using namespace std;

void entry(){
    // #include で読み込んだライブラリによって、C++ では　std::cout << を使ってデータをコンソールに出力することができます
    // using namespace std を記述することによって、std:: は省略できるようになります。詳しくは関数の節の名前空間で学習します。
    // endl によって出力されるデータを改行することができます
    // ステートメント（文）の区切りとして、; を使います
    cout << 5 << endl;
    cout << 100 << endl;
}
