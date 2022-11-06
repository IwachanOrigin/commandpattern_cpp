# commandpattern cpp demo code

## Overview

    Command Patternの使い方

## 使いどころ

    コマンド自体をクラスとして定義し、そのクラスを使用する別のクラス(実行クラス)を使用するところがミソです。  
    この仕組みならば、実際にコマンドクラスを利用したいクラス(main)は実行クラスを経由しなくてはなりません。  
    つまり、コマンドクラスの実装とコマンドクラスを利用したいクラスの実装が疎結合になってくれるわけです。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/commandpattern_cpp/blob/master/LICENSE)

