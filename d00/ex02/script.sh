rm -rf test1.log out1.log
cut -d ' ' -f2 test.log > test1.log
cut -d ' ' -f2 out.log > out1.log
diff out1.log test1.log
