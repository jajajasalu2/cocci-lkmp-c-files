cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/serio/i8042.c 985 */[2];
	int __init cocci_id/* drivers/input/serio/i8042.c 795 */;
	void cocci_id/* drivers/input/serio/i8042.c 795 */;
	unsigned char cocci_id/* drivers/input/serio/i8042.c 743 */;
	unsigned long cocci_id/* drivers/input/serio/i8042.c 742 */;
	irqreturn_t __init cocci_id/* drivers/input/serio/i8042.c 740 */;
	void *cocci_id/* drivers/input/serio/i8042.c 740 */;
	struct completion cocci_id/* drivers/input/serio/i8042.c 737 */;
	const struct kernel_param_ops cocci_id/* drivers/input/serio/i8042.c 72 */;
	enum i8042_controller_reset_mode *cocci_id/* drivers/input/serio/i8042.c 56 */;
	const struct kernel_param *cocci_id/* drivers/input/serio/i8042.c 54 */;
	enum i8042_controller_reset_mode cocci_id/* drivers/input/serio/i8042.c 53 */;
	unsigned int cocci_id/* drivers/input/serio/i8042.c 518 */;
	irqreturn_t cocci_id/* drivers/input/serio/i8042.c 512 */;
	enum i8042_controller_reset_mode{I8042_RESET_NEVER, I8042_RESET_ALWAYS, I8042_RESET_ON_S2RAM,

#define

I8042_RESET_DEFAULT

I8042_RESET_ON_S2RAM


} cocci_id/* drivers/input/serio/i8042.c 47 */;
	const char *cocci_id/* drivers/input/serio/i8042.c 396 */;
	struct i8042_port *cocci_id/* drivers/input/serio/i8042.c 379 */;
	struct serio *cocci_id/* drivers/input/serio/i8042.c 377 */;
	unsigned char *cocci_id/* drivers/input/serio/i8042.c 295 */;
	int cocci_id/* drivers/input/serio/i8042.c 295 */;
	bool (*cocci_id/* drivers/input/serio/i8042.c 207 */)(unsigned char data,
							      unsigned char str,
							      struct serio *port);
	bool (*cocci_id/* drivers/input/serio/i8042.c 186 */)(unsigned char data,
							      unsigned char str,
							      struct serio *serio);
	irqreturn_t cocci_id/* drivers/input/serio/i8042.c 170 */(int irq,
								  void *dev_id);
	struct notifier_block cocci_id/* drivers/input/serio/i8042.c 168 */;
	bool cocci_id/* drivers/input/serio/i8042.c 165 */;
	void __exit cocci_id/* drivers/input/serio/i8042.c 1634 */;
	struct platform_device *cocci_id/* drivers/input/serio/i8042.c 1605 */;
	struct i8042_port cocci_id/* drivers/input/serio/i8042.c 159 */[I8042_NUM_PORTS];
	struct platform_driver cocci_id/* drivers/input/serio/i8042.c 1588 */;
	struct device *cocci_id/* drivers/input/serio/i8042.c 1510 */;
	struct notifier_block *cocci_id/* drivers/input/serio/i8042.c 1507 */;
	struct i8042_port {
		struct serio *serio;
		int irq;
		bool exists;
		bool driver_bound;
		signed char mux;
	} cocci_id/* drivers/input/serio/i8042.c 146 */;
	int (*cocci_id/* drivers/input/serio/i8042.c 1441 */)(void);
	void __init cocci_id/* drivers/input/serio/i8042.c 1388 */;
	struct serio cocci_id/* drivers/input/serio/i8042.c 1351 */;
	const struct dev_pm_ops cocci_id/* drivers/input/serio/i8042.c 1296 */;
	char cocci_id/* drivers/input/serio/i8042.c 126 */[128];
	char cocci_id/* drivers/input/serio/i8042.c 1124 */;
	long cocci_id/* drivers/input/serio/i8042.c 1121 */;
}
