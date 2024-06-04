# scanf dot
scanf関数が使用されている際、入力に`.`を使用すると、メモリ上の値を書き換えないことができる。    
これはscanfで使用されているフォーマットが`%d`や、`%lf`等数値に関するものである際に使用できる。  
これを利用して、stack canaryの書き換えを避けながらBoFを達成することができる場合がある。  

`exploit.py`はstack canaryの書き換えを`.`によって避けBoFを行うデモである。  
実行すると`sum`関数のリターンアドレスを`main`関数に書き換える。  

サンプルプログラムの作成において、以下のサイトを参考にした  
- [scanf and hateful dot](https://rehex.ninja/posts/scanf-and-hateful-dot/)
