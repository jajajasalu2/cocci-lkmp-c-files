cocci_test_suite() {
	void __exit cocci_id/* drivers/watchdog/f71808e_wdt.c 866 */;
	void cocci_id/* drivers/watchdog/f71808e_wdt.c 866 */;
	const unsigned short cocci_id/* drivers/watchdog/f71808e_wdt.c 851 */[];
	const int cocci_id/* drivers/watchdog/f71808e_wdt.c 84 */;
	unsigned int cocci_id/* drivers/watchdog/f71808e_wdt.c 836 */;
	u16 cocci_id/* drivers/watchdog/f71808e_wdt.c 787 */;
	int __init cocci_id/* drivers/watchdog/f71808e_wdt.c 785 */;
	int cocci_id/* drivers/watchdog/f71808e_wdt.c 785 */;
	struct notifier_block cocci_id/* drivers/watchdog/f71808e_wdt.c 681 */;
	struct miscdevice cocci_id/* drivers/watchdog/f71808e_wdt.c 675 */;
	const struct file_operations cocci_id/* drivers/watchdog/f71808e_wdt.c 665 */;
	void *cocci_id/* drivers/watchdog/f71808e_wdt.c 658 */;
	struct notifier_block *cocci_id/* drivers/watchdog/f71808e_wdt.c 657 */;
	int __user *cocci_id/* drivers/watchdog/f71808e_wdt.c 607 */;
	union {
		struct watchdog_info __user *ident;
		int __user *i;
	} cocci_id/* drivers/watchdog/f71808e_wdt.c 602 */;
	struct file *cocci_id/* drivers/watchdog/f71808e_wdt.c 596 */;
	long cocci_id/* drivers/watchdog/f71808e_wdt.c 596 */;
	char cocci_id/* drivers/watchdog/f71808e_wdt.c 567 */;
	loff_t *cocci_id/* drivers/watchdog/f71808e_wdt.c 557 */;
	size_t cocci_id/* drivers/watchdog/f71808e_wdt.c 557 */;
	const char __user *cocci_id/* drivers/watchdog/f71808e_wdt.c 556 */;
	ssize_t cocci_id/* drivers/watchdog/f71808e_wdt.c 556 */;
	struct inode *cocci_id/* drivers/watchdog/f71808e_wdt.c 511 */;
	unsigned short cocci_id/* drivers/watchdog/f71808e_wdt.c 309 */;
	unsigned long cocci_id/* drivers/watchdog/f71808e_wdt.c 189 */;
	u8 cocci_id/* drivers/watchdog/f71808e_wdt.c 174 */;
	struct watchdog_data cocci_id/* drivers/watchdog/f71808e_wdt.c 155 */;
	struct watchdog_data {
		unsigned short sioaddr;
		enum chips type;
		unsigned long opened;
		struct mutex lock;
		char expect_close;
		struct watchdog_info ident;
		unsigned short timeout;
		u8 timer_val;
		char minutes_mode;
		u8 pulse_val;
		char pulse_mode;
		char caused_reboot;
	} cocci_id/* drivers/watchdog/f71808e_wdt.c 139 */;
	void cocci_id/* drivers/watchdog/f71808e_wdt.c 137 */(int base);
	void cocci_id/* drivers/watchdog/f71808e_wdt.c 136 */(int base,
							      int ld);
	int cocci_id/* drivers/watchdog/f71808e_wdt.c 135 */(int base);
	void cocci_id/* drivers/watchdog/f71808e_wdt.c 134 */(int base,
							      int reg,
							      int bit);
	void cocci_id/* drivers/watchdog/f71808e_wdt.c 132 */(int base,
							      int reg, u8 val);
	int cocci_id/* drivers/watchdog/f71808e_wdt.c 130 */(int base,
							     int reg);
	const char *cocci_id/* drivers/watchdog/f71808e_wdt.c 116 */[];
	enum chips{f71808fg, f71858fg, f71862fg, f71868, f71869, f71882fg, f71889fg, f81803, f81865, f81866,} cocci_id/* drivers/watchdog/f71808e_wdt.c 113 */;
	bool cocci_id/* drivers/watchdog/f71808e_wdt.c 104 */;
}
