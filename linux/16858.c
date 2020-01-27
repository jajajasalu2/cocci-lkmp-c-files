cocci_test_suite() {
	void cocci_id/* drivers/input/misc/rotary_encoder.c 74 */;
	int cocci_id/* drivers/input/misc/rotary_encoder.c 58 */;
	struct rotary_encoder *cocci_id/* drivers/input/misc/rotary_encoder.c 56 */;
	unsigned int cocci_id/* drivers/input/misc/rotary_encoder.c 56 */;
	struct platform_driver cocci_id/* drivers/input/misc/rotary_encoder.c 357 */;
	const struct of_device_id cocci_id/* drivers/input/misc/rotary_encoder.c 350 */[];
	int __maybe_unused cocci_id/* drivers/input/misc/rotary_encoder.c 333 */;
	struct rotary_encoder {
		struct input_dev *input;
		struct mutex access_mutex;
		u32 steps;
		u32 axis;
		bool relative_axis;
		bool rollover;
		enum rotary_encoder_encoding encoding;
		unsigned int pos;
		struct gpio_descs *gpios;
		unsigned int *irq;
		bool armed;
		signed char dir;
		unsigned int last_stable;
	} cocci_id/* drivers/input/misc/rotary_encoder.c 33 */;
	enum rotary_encoder_encoding{ROTENC_GRAY, ROTENC_BINARY,} cocci_id/* drivers/input/misc/rotary_encoder.c 28 */;
	struct rotary_encoder cocci_id/* drivers/input/misc/rotary_encoder.c 195 */;
	u32 cocci_id/* drivers/input/misc/rotary_encoder.c 191 */;
	irq_handler_t cocci_id/* drivers/input/misc/rotary_encoder.c 190 */;
	struct input_dev *cocci_id/* drivers/input/misc/rotary_encoder.c 189 */;
	struct device *cocci_id/* drivers/input/misc/rotary_encoder.c 187 */;
	struct platform_device *cocci_id/* drivers/input/misc/rotary_encoder.c 185 */;
	irqreturn_t cocci_id/* drivers/input/misc/rotary_encoder.c 137 */;
	void *cocci_id/* drivers/input/misc/rotary_encoder.c 137 */;
}
