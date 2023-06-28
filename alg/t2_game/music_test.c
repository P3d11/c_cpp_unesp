#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void rand_sleep(int min, int max) {
    int aux = (rand()%(max-min))+min;
    Sleep(aux);
}

void printf_text(char text[4444], int end) { 
    int aux = strlen(text) - 1;
	float time = 25;
	int len_word = 0;
	int c_at = 0;

	for(int j = 0; j < aux; j++){
		len_word++;
		if(text[j] == ' ') {
			break;
		}
	}
    
	for(int i = 0; i < aux; i++){	
        printf("%c", text[i]);
		c_at++;
		
		if(text[i] == ' ') {
			len_word = 0;
			c_at = 0;
			for(int j = i+1; j < aux; j++){
				len_word++;
				if(text[j] == ' ') {
					break;
				}
			}
			time = 25;
		}
		
		if(text[i] == ' '){
			PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
        	rand_sleep(250, 500);
		} else if (text[i] == '\n'){
			PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
			rand_sleep(500, 1000);
		} else {
			if(c_at <= len_word/2){
				time *= (6./len_word + 1);
			} else {
				time /= (6./len_word + 1);
			}
			char name_sound[104] = "sound/ktX.wav";
        	name_sound[8] = rand()%7 + '0';

			PlaySound(name_sound, NULL, SND_FILENAME | SND_ASYNC);
			rand_sleep((int) (time*0.75), (int) (time*0.75*1.25));
		}
    }

    printf("\n");
}

int main() {
	srand(time(NULL));

	printf_text("Lorem ipsum dolor sit amet.\nAut consequatur iste aut necessitatibus cupiditate est vero itaque ut sunt adipisci et adipisci veritatis et quibusdam incidunt. Sed iste atque sed perspiciatis voluptatem et sint autem quo molestias assumenda? Ab dolores animi est natus officiis cum quia aliquam aut expedita omnis est repellat magni cum fugiat explicabo. Aut molestias illum et provident omnis sed similique nemo aut facilis voluptatibus vel adipisci dolor hic nostrum labore et eligendi ipsum? Qui nihil mollitia est beatae totam sit aliquam provident.\nUt fugit porro nam rerum dolor qui reprehenderit ratione sit quod quos. Et omnis dolores et voluptas maiores non porro officia rem omnis voluptatibus qui ratione dolores qui nihil optio ex ipsa laborum. Sed autem reiciendis et iusto numquam et rerum ipsa ut perferendis doloremque id velit voluptas eum omnis eligendi. Eos quos omnis ea atque minus 33 dolores autem ea alias velit non cumque iusto id neque dolores. Aut corporis voluptates aut voluptatem iure et natus deleniti qui molestias earum est mollitia blanditiis ab asperiores Quis aut obcaecati inventore. Qui molestiae similique quo beatae ducimus ut laborum inventore est voluptatibus tenetur et voluptate commodi et autem eius et amet illum. Id internos accusamus sit consequuntur quis non optio sint aut nobis omnis aut sapiente internos id sint laborum?\nSit necessitatibus dolorem At enim quibusdam vel optio dolore aut delectus aperiam et esse adipisci. Vel harum debitis in quaerat illo nam facere facilis aut deleniti consequuntur. Est nobis quod non necessitatibus libero ex eligendi eveniet vel molestiae sint. Vel assumenda quisquam eos inventore voluptatem non velit nihil? Ab voluptates sapiente et beatae impedit sed asperiores quia sit ullam quia sed ratione eaque non similique sint qui officia distinctio. A commodi rerum non facere similique aut temporibus quod quo architecto velit 33 dolorum animi et impedit molestiae. Est itaque eveniet aut dolor harum et ullam optio est praesentium ducimus qui quasi ullam. Cum voluptatem sequi ea obcaecati sapiente est minus quae et ducimus autem? Est dicta laborum ab dolores dolor ea blanditiis ipsum et quasi voluptas.", 0);

	return 0;
}