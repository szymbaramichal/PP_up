#include <stdio.h>
#include <stdlib.h>

// To jest mega g³upie zadanie
// generalnie Zdobi zdefiniowa³ sobie strukture w której jest int i wskaŸnik do tego samego typu struktury
// potem zacz¹³ rysowaæ na tablicy te struktury i je wype³niaæ cyferkami i wskaŸnikami do kolejnych struktur
// i tak narysowa³ z 5 i nas pyta³ jak siê odwo³aæ do której,
// jak zmieniæ inta, jak zmieniæ wskaŸnik itd
// potem chcia³ ¿eby napisaæ program który wyœwietla inta ze struktury i wszystkich innych które s¹ pod ni¹
// w sensie tych na które wskazuje wskaŸnik w œrodku



struct wezel{			// tu definiujesz strukture
	int x;				// ma x typu int
	struct wezel *p;	// i p typu wkaŸnik do struktury
};
void print_wezel (struct wezel *q);
int main(void)
{
	struct wezel *q;								//wszystkie s¹ dynamicznie alokowane
	q=malloc(sizeof(struct wezel));					//czyli ¿e mallociem
	q->x=1;											//odwo³ywanie sie do elementów struktury sie robi strza³kami
	q->p=malloc(sizeof(struct wezel));				//st¹d milion strza³ek bo jest w sumie 5 tych zagnie¿d¿eñ
	q->p->x=2;										//zaczynasz od wskaŸnika do struktury
	q->p->p=malloc(sizeof(struct wezel));			//mallocujesz mu obaszat pamiêci wielkoœci tej struktury
	q->p->p->x=3;									//wsadzasz do niej inta, czyli srza³ka do x
	q->p->p->p=malloc(sizeof(struct wezel));		//wsadzasz do niej wskaŸnik do kolejej struktury
	q->p->p->p->x=4;								//te¿ dynamicznie alokowanej, czyli strza³ka do p=malloc(...)
	q->p->p->p->p=malloc(sizeof(struct wezel));		// i tak robisz kilka tych struktur jedna w drugiej w trzeciej itd
	q->p->p->p->p->x=5;
	q->p->p->p->p->p=malloc(sizeof(struct wezel));
	q->p->p->p->p->p->x=6;
	q->p->p->p->p->p->p=NULL;						// w ostatniej wskaŸnik ustawiasz na NULL
	
	print_wezel(q);									// wyœwietlasz funkcj¹ poni¿ej
	
}
void print_wezel (struct wezel *q)	// void, bo nic nie zwraca, tylko printuje
{									// pobiera wskaŸnik do struktury

	while (q)						//wykonuje sie dopóki jest wskaŸnik 	(NULL jest jako 0 logiczne)
									//wiêc while(NULL) siê nie wykona
	{
		printf("%d\n",q->x);		//wyœwietla int ze struktury
		q=q->p;						//ustala wskaŸnik na kolejn¹ strukture, t¹ któr¹ ma w œroku
	}
}
