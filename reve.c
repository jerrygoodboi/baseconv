int rev(int n){
	int rev,in=0;
	while(1){
		rev=(n%10);
	in*=10;
	in+=rev;
	if(n/10==0){
			break;
		}
	n/=10;
	}

	return in;
}
