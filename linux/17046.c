cocci_test_suite() {
	struct tmdc_port {
		struct input_dev *dev;
		char name[64];
		char phys[32];
		int mode;
		const signed char *abs;
		const short *btn;
		unsigned char absc;
		unsigned char btnc[4];
		unsigned char btno[4];
	} cocci_id/* drivers/input/joystick/tmdc.c 95 */;
	const struct tmdc_model {
		unsigned char id;
		const char *name;
		char abs;
		char hats;
		char btnc[4];
		char btno[4];
		const signed char *axes;
		const short *buttons;
	} cocci_id/* drivers/input/joystick/tmdc.c 76 */[];
	const struct {
		int x;
		int y;
	} cocci_id/* drivers/input/joystick/tmdc.c 71 */[];
	const short cocci_id/* drivers/input/joystick/tmdc.c 67 */[TMDC_BTN];
	const signed char cocci_id/* drivers/input/joystick/tmdc.c 53 */[TMDC_ABS_HAT];
	const signed char cocci_id/* drivers/input/joystick/tmdc.c 51 */[TMDC_ABS];
	const unsigned char cocci_id/* drivers/input/joystick/tmdc.c 48 */[16];
	struct gameport_driver cocci_id/* drivers/input/joystick/tmdc.c 412 */;
	struct tmdc cocci_id/* drivers/input/joystick/tmdc.c 354 */;
	unsigned char cocci_id/* drivers/input/joystick/tmdc.c 349 */[2][TMDC_MAX_LENGTH];
	struct gameport_driver *cocci_id/* drivers/input/joystick/tmdc.c 347 */;
	struct gameport *cocci_id/* drivers/input/joystick/tmdc.c 347 */;
	int cocci_id/* drivers/input/joystick/tmdc.c 347 */;
	struct tmdc_port cocci_id/* drivers/input/joystick/tmdc.c 270 */;
	const struct tmdc_model *cocci_id/* drivers/input/joystick/tmdc.c 264 */;
	struct tmdc *cocci_id/* drivers/input/joystick/tmdc.c 257 */;
	struct input_dev *cocci_id/* drivers/input/joystick/tmdc.c 255 */;
	void cocci_id/* drivers/input/joystick/tmdc.c 255 */;
	unsigned char cocci_id/* drivers/input/joystick/tmdc.c 227 */;
	struct tmdc_port *cocci_id/* drivers/input/joystick/tmdc.c 175 */;
	unsigned char *cocci_id/* drivers/input/joystick/tmdc.c 175 */;
	int cocci_id/* drivers/input/joystick/tmdc.c 134 */[2];
	unsigned long cocci_id/* drivers/input/joystick/tmdc.c 133 */;
	struct tmdc {
		struct gameport *gameport;
		struct tmdc_port *port[2];

#if 0

	
struct

input_dev

*

dev

[

2

]

;

	
char

name

[

2

]

[

64

]

;

	
char

phys

[

2

]

[

32

]

;

	
int

mode

[

2

]

;

	
signed

char

*

abs

[

2

]

;

	
short

*

btn

[

2

]

;

	
unsigned

char

absc

[

2

]

;

	
unsigned

char

btnc

[

2

]

[

4

]

;

	
unsigned

char

btno

[

2

]

[

4

]

;


#endif

		int reads;
		int bads;
		unsigned char exists;
	} cocci_id/* drivers/input/joystick/tmdc.c 107 */;
}
