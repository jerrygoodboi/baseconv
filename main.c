int main(int argc,char **argv){
	int num,bin=0,BASE;
	switch(*argv[1]){
		case 'b': 
			BASE=2;
			break;
		case 'o':
			BASE=8;
			break;
		default:
			printf("That's why u r a failure\n");
	
	}
num=atoi(argv[2]);
printf("%d\n",num);
int i=0;
while(1){
bin=bin*10+(num%BASE);
num/=BASE;
i++;
if(num/BASE==0){
	bin=bin*10+(num);
	break;
}
}
bin=rev(bin);
printf("%d\n",bin);
}
