cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/goldfish_events.c 92 */;
	int cocci_id/* drivers/input/keyboard/goldfish_events.c 78 */;
	u32 cocci_id/* drivers/input/keyboard/goldfish_events.c 77 */[4];
	void __iomem *cocci_id/* drivers/input/keyboard/goldfish_events.c 76 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/goldfish_events.c 75 */;
	struct event_dev *cocci_id/* drivers/input/keyboard/goldfish_events.c 73 */;
	void cocci_id/* drivers/input/keyboard/goldfish_events.c 73 */;
	uint8_t cocci_id/* drivers/input/keyboard/goldfish_events.c 56 */;
	unsigned long cocci_id/* drivers/input/keyboard/goldfish_events.c 51 */[];
	unsigned int cocci_id/* drivers/input/keyboard/goldfish_events.c 51 */;
	size_t cocci_id/* drivers/input/keyboard/goldfish_events.c 51 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/goldfish_events.c 36 */;
	void *cocci_id/* drivers/input/keyboard/goldfish_events.c 36 */;
	struct event_dev {
		struct input_dev *input;
		int irq;
		void __iomem *addr;
		char name[0];
	} cocci_id/* drivers/input/keyboard/goldfish_events.c 29 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/goldfish_events.c 188 */;
	const struct acpi_device_id cocci_id/* drivers/input/keyboard/goldfish_events.c 181 */[];
	enum{REG_READ=0x00, REG_SET_PAGE=0x00, REG_LEN=0x04, REG_DATA=0x08, PAGE_NAME=0x00000, PAGE_EVBITS=0x10000, PAGE_ABSDATA=0x20000 | EV_ABS,} cocci_id/* drivers/input/keyboard/goldfish_events.c 18 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/goldfish_events.c 174 */[];
	struct event_dev cocci_id/* drivers/input/keyboard/goldfish_events.c 129 */;
	struct resource *cocci_id/* drivers/input/keyboard/goldfish_events.c 106 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/goldfish_events.c 102 */;
}
