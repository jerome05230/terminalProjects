for nomFichier in *.cpp

do 
	echo $nomFichier | awk '{split($0,a,"."); print  a[1]".h"}';
done;
