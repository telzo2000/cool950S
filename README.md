# cool950S
# ビルドガイド<br>
https://github.com/telzo2000/cool950S/blob/main/buildguide_for_cool950S.md

# What is cool950S?

cool950S is desined by m.ki.
<br>
cool950S is a split keyboard.
<br>
I didn't have a cool 40% keyboard, so I made one.
<br>

# 開発の経緯(Development history)<br>
cool943Sの製作した後，それに合うようなキーキャップを探したが，中々合致するものがなかった。
特にエンターキーは40%キーボードで構成されている1.75Uにしたため，ベースキット以外に，40%キットを追加購入するなど，お金がかかる事となった。
そのため，ベースキットのみで完成するキーボードがいいと思い，cool950Sの特徴の一つとした。
他に，矢印キーをレイヤーキーとの組み合わせでなく，標準で打鍵できる方が良いのかなとも考えた。
右側手前に矢印キーを置くことも特徴の一つとした。
cool943Sのバックスペースキーは2Uであった。
それを1Uサイズにすることで，スタビライザーが一つ減る。
さらにPキーの隣にひとつキーを加えられると考えた。
それらにより，右側1行目は，7つのキーとなり，左側１行目の６つのキーと合致しない。
ファームウェアの見直しが必要となる。
ROWが7になるのであれば，左側にも1つキーを加えられると考えた。
そこで，一番左側に縦方向に4つキーを加えることとした。
アルティザンキーキャップを置くことも、マクロキーを設定することもできると考えた。
バックスペースキーを1Uとすることで，左右どちらにも１行目端部にpro microの設置が可能となった。
これにより，cool943Sよりも余白の少ないデザインとすることができた。
代わりに，cool943Sよりも背の高いキーボードとなる。<br>
cool943Sはpro microを１行目キーの奥側に設置することで，背の低いキーボードに仕上げた。
私の場合は，パームレストなしで使うことができ，良い高さである。
多少の余白も手に当たることがない。
今回は１行目外端部下に設置した。
pro microを含むことで高さの制約を受けている。
トッププレート上面からボトムプレート下面までの厚みは，cool950Sが14.6mmで，cool943Sが11.6mmである。<br>
<br>
令和３年７月１７日にLEDの装着を行う。
操作の仕方がわからないが、点灯した。
配線のミスはないことが確認できた。
あとはオプション部品となるアクリル部品の設計が残っている。<br>
令和3年7月上旬に、試作1号が完成した。
アクリルのトッププレートとボトムプレートでPCBを挟むサンドイッチマウントである。
仮組みの段階で、スタビ用に開けた穴が小さいこと、その近くにあるネジとの距離が近すぎて、ネジやスペーサーに干渉することがわかった。
それにより、アクリル、PCBの両方を修正して、Ver.1.1を発注した。
ただ、スタビが使えないだけの試作1号であるが、それ以外の問題が無いか確認するため、実際に組んで、ファームウェアを入れてみた。
ファームウェアの修正は必要であったが、配線等のミスはなかった。
半田付けのミスがあり、１枚基板を廃棄した。<br>
その後、ビルド環境のラズベリーパイが不調となり、新しく構築することとなった。
新しい環境でcool950SのREMAP対応のファームウェアを作り、7月10日に完成した。
ついでに、他のキーキャップへの換装をし、ツイートした。<br>
https://twitter.com/0002ozlet/status/1413727164780843009
<br>
令和３年７月18日にオプション部品と考えていた、アクリル部品を発注した。<br>
7月24日にアクリル部品は到着して、装着した。
cool950Sはアクリル積層による密閉型ケースとなった。
当初、アクリルサンドイッチ構造と、オプションによるアクリル積層の密閉型の選択できる形を考えていた。<br>
しかし、できあがりを見て、オプションではなく、標準でアクリル積層の密閉型ケースとすることに決めた。<br>
発注した５セット分の余剰として、４セットを頒布する予定である。
スタビライザーが使えないver.1.0も訳あり品として頒布する予定である。<br>
現在、本サイトを含めて、準備をしている。
<br>
令和３年8月11日追記<br>
8月上旬にアクリル積層による密閉型ケースのcool950Sを頒布した。<br>
後日、スタビライザーが使えないver.1.0も頒布する予定。<br>


<br>
# 今後の予定（Future plans）

☑ver1.1が届いたら、一台分組み立て及び撮影<br>
☑ビルドガイドの作成<br>
☑Boothでの残りの頒布。<br>
□オプション部品の販売。<br>
<br><br>
