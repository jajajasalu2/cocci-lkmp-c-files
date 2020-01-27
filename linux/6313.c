cocci_test_suite() {
	struct i2c_client *cocci_id/* drivers/mfd/tps65010.c 951 */;
	unsigned long cocci_id/* drivers/mfd/tps65010.c 687 */;
	const struct i2c_device_id cocci_id/* drivers/mfd/tps65010.c 659 */[];
	struct tps65010 {
		struct i2c_client *client;
		struct mutex lock;
		struct delayed_work work;
		struct dentry *file;
		unsigned charging:1;
		unsigned por:1;
		unsigned model:8;
		u16 vbus;
		unsigned long flags;
#define FLAG_VBUS_CHANGED 0
#define FLAG_IRQ_ENABLE 1
		u8 chgstatus,regstatus,chgconf;
		u8 nmask1,nmask2;
		u8 outmask;
		struct gpio_chip chip;
		struct platform_device *leds;
	} cocci_id/* drivers/mfd/tps65010.c 60 */;
	enum tps_model{TPS65010, TPS65011, TPS65012, TPS65013,} cocci_id/* drivers/mfd/tps65010.c 53 */;
	struct tps65010_board *cocci_id/* drivers/mfd/tps65010.c 529 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/tps65010.c 525 */;
	struct gpio_chip *cocci_id/* drivers/mfd/tps65010.c 479 */;
	irqreturn_t cocci_id/* drivers/mfd/tps65010.c 433 */;
	struct tps65010 cocci_id/* drivers/mfd/tps65010.c 401 */;
	struct work_struct *cocci_id/* drivers/mfd/tps65010.c 397 */;
	struct i2c_driver cocci_id/* drivers/mfd/tps65010.c 35 */;
	const struct file_operations cocci_id/* drivers/mfd/tps65010.c 291 */;
	struct inode *cocci_id/* drivers/mfd/tps65010.c 286 */;
	struct file *cocci_id/* drivers/mfd/tps65010.c 286 */;
	char cocci_id/* drivers/mfd/tps65010.c 187 */[100];
	unsigned cocci_id/* drivers/mfd/tps65010.c 186 */;
	struct tps65010 *cocci_id/* drivers/mfd/tps65010.c 184 */;
	struct seq_file *cocci_id/* drivers/mfd/tps65010.c 182 */;
	void *cocci_id/* drivers/mfd/tps65010.c 182 */;
	const char *cocci_id/* drivers/mfd/tps65010.c 120 */;
	u8 cocci_id/* drivers/mfd/tps65010.c 118 */;
	char *cocci_id/* drivers/mfd/tps65010.c 118 */;
	int cocci_id/* drivers/mfd/tps65010.c 118 */;
	size_t cocci_id/* drivers/mfd/tps65010.c 118 */;
	void cocci_id/* drivers/mfd/tps65010.c 118 */;
	void __exit cocci_id/* drivers/mfd/tps65010.c 1058 */;
	int __init cocci_id/* drivers/mfd/tps65010.c 1047 */;
}
