#define BASE 2
int main(){
	int num,bin=0;
scanf("%d",&num);
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
