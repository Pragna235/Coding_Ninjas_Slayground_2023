bool checkArmstrong(int n){
	//Write your code here
	int nod = log10(n)+1;
	int n2=n,rem,sum=0;
	while(n2!=0){
		rem=n2%10;
		sum+=pow(rem,nod);
		n2=n2/10;
	}
	if(sum==n)
	return true;
	return false;
}
