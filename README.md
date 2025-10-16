# 🧠 C言語学習用リポジトリ（GitHub Codespaces対応）

このリポジトリは **C言語をこれから学び始める人向け** の練習環境です。  
GitHub Codespaces を使って、ブラウザ上で手軽に C言語を実行できます。

---

## 🚀 はじめに

### ✅ 必要なもの
- GitHub アカウント
- インターネット接続
- Webブラウザ（Chrome / Edge / Safari など）

### 💡 Codespacesとは？
GitHub Codespaces は、**クラウド上の開発環境**です。  
PCに何もインストールせずに、ブラウザだけで C 言語のプログラムを作成・実行できます。

---

## ⚙️ 環境セットアップ

1. このリポジトリを **自分のアカウントにフォーク** します。  
   - 右上の「Fork」ボタンをクリック。

2. フォークしたリポジトリのトップページで、  
   **「<> Code」→「Codespaces」→「Create codespace on main」** をクリック。

3. 数十秒待つと、ブラウザ上に VS Code のような画面が開きます。  
   → これで開発環境の準備完了です！

---

## 🧩 基本のCプログラム

`main.c` ファイルを開き、次のように書いてみましょう。

```c
#include <stdio.h>

int main(void) {
    printf("Hello, C world!\n");
    return 0;
}
````

---

## ▶️ 実行方法

ターミナルを開き、以下のコマンドを入力します。

```bash
gcc main.c -o main
./main
```

出力結果:

```
Hello, C world!
```


