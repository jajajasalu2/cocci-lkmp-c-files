cocci_test_suite() {
	struct trackpoint_attr_data {
		size_t field_offset;
		u8 command;
		u8 mask;
		bool inverted;
		u8 power_on_default;
	} cocci_id/* drivers/input/mouse/trackpoint.c 94 */;
	u8 cocci_id/* drivers/input/mouse/trackpoint.c 66 */[3];
	u8 *cocci_id/* drivers/input/mouse/trackpoint.c 50 */;
	u8 cocci_id/* drivers/input/mouse/trackpoint.c 396 */;
	struct ps2dev *cocci_id/* drivers/input/mouse/trackpoint.c 394 */;
	bool cocci_id/* drivers/input/mouse/trackpoint.c 392 */;
	struct psmouse *cocci_id/* drivers/input/mouse/trackpoint.c 392 */;
	int cocci_id/* drivers/input/mouse/trackpoint.c 392 */;
	struct trackpoint_data *cocci_id/* drivers/input/mouse/trackpoint.c 343 */;
	void cocci_id/* drivers/input/mouse/trackpoint.c 343 */;
	u8 cocci_id/* drivers/input/mouse/trackpoint.c 33 */[2];
	struct trackpoint_attr_data *cocci_id/* drivers/input/mouse/trackpoint.c 247 */;
	struct attribute_group cocci_id/* drivers/input/mouse/trackpoint.c 240 */;
	struct attribute *cocci_id/* drivers/input/mouse/trackpoint.c 222 */[];
	struct serio *cocci_id/* drivers/input/mouse/trackpoint.c 216 */;
	struct device cocci_id/* drivers/input/mouse/trackpoint.c 215 */;
	struct device *cocci_id/* drivers/input/mouse/trackpoint.c 215 */;
	umode_t cocci_id/* drivers/input/mouse/trackpoint.c 212 */;
	struct kobject *cocci_id/* drivers/input/mouse/trackpoint.c 212 */;
	struct attribute *cocci_id/* drivers/input/mouse/trackpoint.c 203 */;
	const char *const cocci_id/* drivers/input/mouse/trackpoint.c 19 */[];
	bool *cocci_id/* drivers/input/mouse/trackpoint.c 149 */;
	const char *cocci_id/* drivers/input/mouse/trackpoint.c 145 */;
	size_t cocci_id/* drivers/input/mouse/trackpoint.c 145 */;
	void *cocci_id/* drivers/input/mouse/trackpoint.c 144 */;
	ssize_t cocci_id/* drivers/input/mouse/trackpoint.c 144 */;
	char *cocci_id/* drivers/input/mouse/trackpoint.c 103 */;
}
