cocci_test_suite() {
	int *cocci_id/* drivers/input/misc/cma3000_d0x.c 95 */;
	int cocci_id/* drivers/input/misc/cma3000_d0x.c 84 */[8][2];
	struct cma3000_accl_data {
		const struct cma3000_bus_ops *bus_ops;
		const struct cma3000_platform_data *pdata;
		struct device *dev;
		struct input_dev *input_dev;
		int bit_to_mg;
		int irq;
		int g_range;
		u8 mode;
		struct mutex mutex;
		bool opened;
		bool suspended;
	} cocci_id/* drivers/input/misc/cma3000_d0x.c 55 */;
	struct cma3000_accl_data cocci_id/* drivers/input/misc/cma3000_d0x.c 295 */;
	const struct cma3000_platform_data *cocci_id/* drivers/input/misc/cma3000_d0x.c 276 */;
	const struct cma3000_bus_ops *cocci_id/* drivers/input/misc/cma3000_d0x.c 274 */;
	struct device *cocci_id/* drivers/input/misc/cma3000_d0x.c 273 */;
	int cocci_id/* drivers/input/misc/cma3000_d0x.c 273 */;
	struct cma3000_accl_data *cocci_id/* drivers/input/misc/cma3000_d0x.c 234 */;
	struct input_dev *cocci_id/* drivers/input/misc/cma3000_d0x.c 232 */;
	void cocci_id/* drivers/input/misc/cma3000_d0x.c 232 */;
	u8 cocci_id/* drivers/input/misc/cma3000_d0x.c 176 */;
	irqreturn_t cocci_id/* drivers/input/misc/cma3000_d0x.c 104 */;
	void *cocci_id/* drivers/input/misc/cma3000_d0x.c 104 */;
}
