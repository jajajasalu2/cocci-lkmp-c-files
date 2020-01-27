cocci_test_suite() {
	unsigned long cocci_id/* drivers/input/misc/sparcspkr.c 71 */;
	u32 cocci_id/* drivers/input/misc/sparcspkr.c 42 */;
	unsigned int cocci_id/* drivers/input/misc/sparcspkr.c 42 */;
	void __exit cocci_id/* drivers/input/misc/sparcspkr.c 359 */;
	void cocci_id/* drivers/input/misc/sparcspkr.c 359 */;
	int __init cocci_id/* drivers/input/misc/sparcspkr.c 354 */;
	struct platform_driver *constcocci_id/* drivers/input/misc/sparcspkr.c 349 */[];
	struct sparcspkr_state {
		const char *name;
		int (*event)(struct input_dev *dev, unsigned int type,
			     unsigned int code, int value);
		spinlock_t lock;
		struct input_dev *input_dev;
		union {
			struct grover_beep_info grover;
			struct bbc_beep_info bbc;
		} u;
	} cocci_id/* drivers/input/misc/sparcspkr.c 31 */;
	struct grover_beep_info *cocci_id/* drivers/input/misc/sparcspkr.c 272 */;
	struct bbc_beep_info {
		u32 clock_freq;
		void __iomem *regs;
	} cocci_id/* drivers/input/misc/sparcspkr.c 26 */;
	struct platform_driver cocci_id/* drivers/input/misc/sparcspkr.c 259 */;
	const struct of_device_id cocci_id/* drivers/input/misc/sparcspkr.c 250 */[];
	struct input_dev *cocci_id/* drivers/input/misc/sparcspkr.c 235 */;
	struct grover_beep_info {
		void __iomem *freq_regs;
		void __iomem *enable_reg;
	} cocci_id/* drivers/input/misc/sparcspkr.c 21 */;
	struct device_node *cocci_id/* drivers/input/misc/sparcspkr.c 190 */;
	struct bbc_beep_info *cocci_id/* drivers/input/misc/sparcspkr.c 189 */;
	struct sparcspkr_state *cocci_id/* drivers/input/misc/sparcspkr.c 188 */;
	struct platform_device *cocci_id/* drivers/input/misc/sparcspkr.c 186 */;
	int cocci_id/* drivers/input/misc/sparcspkr.c 186 */;
	struct device *cocci_id/* drivers/input/misc/sparcspkr.c 143 */;
}
