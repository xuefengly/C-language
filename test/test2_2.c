#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a%10){
					case 1:
						switch(a/10){
							case 1:
								printf("Faint signals, barely perceptible, unreadable.");
								break;
							case 2:
								printf("Faint signals, barely perceptible, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Faint signals, barely perceptible, readable with considerable difficulty.");
								break;
							case 4:
								printf("Faint signals, barely perceptible, readable with practically no difficulty.");
								break;
							case 5:
								printf("Faint signals, barely perceptible, perfectly readable.");
								break;
						}
						break;
					case 2:
						switch(a/10){
							case 1:
								printf("Very weak signals, unreadable.");
								break;
							case 2:
								printf("Very weak signals,  occasional words distinguishable.");
								break;
							case 3:
								printf("Very weak signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Very weak signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Very weak signals, perfectly readable.");
								break;
						}
						break;
					case 3:
						switch(a/10){
							case 1:
								printf("Weak signals, unreadable.");
								break;
							case 2:
								printf("Weak signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Weak signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Weak signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Weak signals, perfectly readable.");
								break;
						}
						break;
					case 4:
						switch(a/10){
							case 1:
								printf("Fair signals, unreadable.");
								break;
							case 2:
								printf("Fair signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Fair signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Fair signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Fair signals, perfectly readable.");
								break;
						}
						break;
					case 5:
						switch(a/10){
							case 1:
								printf("Fairly good signals, unreadable.");
								break;
							case 2:
								printf("Fairly good signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Fairly good signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Fairly good signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Fairly good signals, perfectly readable.");
								break;
						}
						break;
					case 6:
						switch(a/10){
							case 1:
								printf("Good signals, unreadable.");
								break;
							case 2:
								printf("Good signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Good signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Good signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Good signals, perfectly readable.");
								break;
						}
						break;
					case 7:
						switch(a/10){
							case 1:
								printf("Moderately strong signals, unreadable.");
								break;
							case 2:
								printf("Moderately strong signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Moderately strong signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Moderately strong signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Moderately strong signals, perfectly readable.");
								break;
						}
						break;
					case 8:
						switch(a/10){
							case 1:
								printf("Strong signals, unreadable.");
								break;
							case 2:
								printf("Strong signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Strong signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Strong signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Strong signals, perfectly readable.");
								break;
						}
						break;
					case 9:
						switch(a/10){
							case 1:
								printf("Extremely strong signals, unreadable.");
								break;
							case 2:
								printf("Extremely strong signals, barely readable, occasional words distinguishable.");
								break;
							case 3:
								printf("Extremely strong signals, readable with considerable difficulty.");
								break;
							case 4:
								printf("Extremely strong signals, readable with practically no difficulty.");
								break;
							case 5:
								printf("Extremely strong signals, perfectly readable.");
								break;
						}
						break;
	}
	return 0;
}

