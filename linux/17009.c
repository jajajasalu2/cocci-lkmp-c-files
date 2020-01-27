cocci_test_suite() {
	enum{AD7879_SEQ_YPOS=0, AD7879_SEQ_XPOS=1, AD7879_SEQ_Z1=2, AD7879_SEQ_Z2=3, AD7879_NR_SENSE=4,} cocci_id/* drivers/input/touchscreen/ad7879.c 95 */;
	u8 cocci_id/* drivers/input/touchscreen/ad7879.c 518 */;
	struct regmap *cocci_id/* drivers/input/touchscreen/ad7879.c 517 */;
	u32 cocci_id/* drivers/input/touchscreen/ad7879.c 494 */;
	unsigned cocci_id/* drivers/input/touchscreen/ad7879.c 396 */;
	struct gpio_chip *cocci_id/* drivers/input/touchscreen/ad7879.c 395 */;
	const struct attribute_group cocci_id/* drivers/input/touchscreen/ad7879.c 390 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/ad7879.c 385 */[];
	int cocci_id/* drivers/input/touchscreen/ad7879.c 372 */;
	unsigned int cocci_id/* drivers/input/touchscreen/ad7879.c 371 */;
	const char *cocci_id/* drivers/input/touchscreen/ad7879.c 368 */;
	size_t cocci_id/* drivers/input/touchscreen/ad7879.c 368 */;
	struct device_attribute *cocci_id/* drivers/input/touchscreen/ad7879.c 359 */;
	char *cocci_id/* drivers/input/touchscreen/ad7879.c 359 */;
	struct device *cocci_id/* drivers/input/touchscreen/ad7879.c 358 */;
	ssize_t cocci_id/* drivers/input/touchscreen/ad7879.c 358 */;
	bool cocci_id/* drivers/input/touchscreen/ad7879.c 338 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/ad7879.c 319 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/ad7879.c 294 */;
	u16 cocci_id/* drivers/input/touchscreen/ad7879.c 272 */;
	struct ad7879 *cocci_id/* drivers/input/touchscreen/ad7879.c 270 */;
	void cocci_id/* drivers/input/touchscreen/ad7879.c 270 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/ad7879.c 245 */;
	void *cocci_id/* drivers/input/touchscreen/ad7879.c 245 */;
	struct timer_list *cocci_id/* drivers/input/touchscreen/ad7879.c 238 */;
	struct ad7879 {
		struct regmap *regmap;
		struct device *dev;
		struct input_dev *input;
		struct timer_list timer;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gc;
		struct mutex mutex;
#endif
		unsigned int irq;
		bool disabled;
		bool suspended;
		bool swap_xy;
		u16 conversion_data[AD7879_NR_SENSE];
		char phys[32];
		u8 first_conversion_delay;
		u8 acquisition_time;
		u8 averaging;
		u8 pen_down_acc_interval;
		u8 median;
		u16 x_plate_ohms;
		u16 cmd_crtl1;
		u16 cmd_crtl2;
		u16 cmd_crtl3;
		int x;
		int y;
		int Rt;
	} cocci_id/* drivers/input/touchscreen/ad7879.c 106 */;
}
