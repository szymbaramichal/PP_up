#include <stdio.h>
#include <stdlib.h>

// To jest mega g�upie zadanie
// generalnie Zdobi zdefiniowa� sobie strukture w kt�rej jest int i wska�nik do tego samego typu struktury
// potem zacz�� rysowa� na tablicy te struktury i je wype�nia� cyferkami i wska�nikami do kolejnych struktur
// i tak narysowa� z 5 i nas pyta� jak si� odwo�a� do kt�rej,
// jak zmieni� inta, jak zmieni� wska�nik itd
// potem chcia� �eby napisa� program kt�ry wy�wietla inta ze struktury i wszystkich innych kt�re s� pod ni�
// w sensie tych na kt�re wskazuje wska�nik w �rodku



struct wezel{			// tu definiujesz strukture
	int x;				// ma x typu int
	struct wezel *p;	// i p typu wka�nik do struktury
};
void print_wezel (struct wezel *q);
int main(void)
{
	struct wezel *q;								//wszystkie s� dynamicznie alokowane
	q=malloc(sizeof(struct wezel));					//czyli �e mallociem
	q->x=1;											//odwo�ywanie sie do element�w struktury sie robi strza�kami
	q->p=malloc(sizeof(struct wezel));				//st�d milion strza�ek bo jest w sumie 5 tych zagnie�d�e�
	q->p->x=2;										//zaczynasz od wska�nika do struktury
	q->p->p=malloc(sizeof(struct wezel));			//mallocujesz mu obaszat pami�ci wielko�ci tej struktury
	q->p->p->x=3;									//wsadzasz do niej inta, czyli srza�ka do x
	q->p->p->p=malloc(sizeof(struct wezel));		//wsadzasz do niej wska�nik do kolejej struktury
	q->p->p->p->x=4;								//te� dynamicznie alokowanej, czyli strza�ka do p=malloc(...)
	q->p->p->p->p=malloc(sizeof(struct wezel));		// i tak robisz kilka tych struktur jedna w drugiej w trzeciej itd
	q->p->p->p->p->x=5;
	q->p->p->p->p->p=malloc(sizeof(struct wezel));
	q->p->p->p->p->p->x=6;
	q->p->p->p->p->p->p=NULL;						// w ostatniej wska�nik ustawiasz na NULL
	
	print_wezel(q);									// wy�wietlasz funkcj� poni�ej
	
}
void print_wezel (struct wezel *q)	// void, bo nic nie zwraca, tylko printuje
{									// pobiera wska�nik do struktury

	while (q)						//wykonuje sie dop�ki jest wska�nik 	(NULL jest jako 0 logiczne)
									//wi�c while(NULL) si� nie wykona
	{
		printf("%d\n",q->x);		//wy�wietla int ze struktury
		q=q->p;						//ustala wska�nik na kolejn� strukture, t� kt�r� ma w �roku
	}
}
