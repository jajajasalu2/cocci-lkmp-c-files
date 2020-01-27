cocci_test_suite() {
	struct focaltech_hw_state {
		struct focaltech_finger_state fingers[FOC_MAX_FINGERS];
		unsigned int width;
		bool pressed;
	} cocci_id/* drivers/input/mouse/focaltech.c 88 */;
	struct focaltech_finger_state {
		bool active;
		bool valid;
		unsigned int x;
		unsigned int y;
	} cocci_id/* drivers/input/mouse/focaltech.c 63 */;
	struct focaltech_data cocci_id/* drivers/input/mouse/focaltech.c 411 */;
	struct focaltech_data *cocci_id/* drivers/input/mouse/focaltech.c 408 */;
	enum psmouse_scale cocci_id/* drivers/input/mouse/focaltech.c 401 */;
	char cocci_id/* drivers/input/mouse/focaltech.c 377 */[3];
	bool cocci_id/* drivers/input/mouse/focaltech.c 35 */;
	struct psmouse *cocci_id/* drivers/input/mouse/focaltech.c 35 */;
	int cocci_id/* drivers/input/mouse/focaltech.c 35 */;
	struct ps2dev *cocci_id/* drivers/input/mouse/focaltech.c 347 */;
	void cocci_id/* drivers/input/mouse/focaltech.c 299 */;
	unsigned char cocci_id/* drivers/input/mouse/focaltech.c 268 */[3];
	psmouse_ret_t cocci_id/* drivers/input/mouse/focaltech.c 251 */;
	const char *constcocci_id/* drivers/input/mouse/focaltech.c 22 */[];
	char cocci_id/* drivers/input/mouse/focaltech.c 205 */;
	unsigned int cocci_id/* drivers/input/mouse/focaltech.c 178 */;
	struct focaltech_hw_state *cocci_id/* drivers/input/mouse/focaltech.c 177 */;
	unsigned char *cocci_id/* drivers/input/mouse/focaltech.c 174 */;
	unsigned char cocci_id/* drivers/input/mouse/focaltech.c 154 */;
	struct focaltech_finger_state *cocci_id/* drivers/input/mouse/focaltech.c 123 */;
	struct input_dev *cocci_id/* drivers/input/mouse/focaltech.c 119 */;
	struct focaltech_data {
		unsigned int x_max,y_max;
		struct focaltech_hw_state state;
	} cocci_id/* drivers/input/mouse/focaltech.c 110 */;
}
