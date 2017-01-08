#define MAX_BYTES 256

char *convertDecToHex(int dec) {
	char *array = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int result;
	int r;
	
	if(!array) {
		return NULL;
	}
	
	result = dec;

	for(int i = 0; i<sizeof(array); i++) {
		if(result > 0) {
			r = result % 16;
			result = result / 16;
			if(r > 9) {
				switch(r) {
					case 10:
					array[i] = 'A';
					break;
					
					case 11:
					array[i] = 'B';
					break;
					
					case 12:
					array[i] = 'C';
					break;
					
					case 13:
					array[i] = 'D';
					break;
					
					case 14:
					array[i] = 'E';
					break;
					
					case 15:
					array[i] = 'F';
					break;
					
					default: break;
				}
			} else {
				array[i] = r + '0';
			}
		} else {
			break;
		}
	}
	int len = strlen(array);
	for(int i=0; i<len; i++) {
		final[(len-i)-1] = array[i];
	}
	final[strlen(final)] = '\0';
	return final;
}