cocci_test_suite() {
	struct ds1wm_data {
		void __iomem *map;
		unsigned int bus_shift;
		bool is_hw_big_endian;
		struct platform_device *pdev;
		const struct mfd_cell *cell;
		int irq;
		int slave_present;
		void *reset_complete;
		void *read_complete;
		void *write_complete;
		int read_error;
		u8 read_byte;
		u8 int_en_reg_none;
		unsigned int reset_recover_delay;
	} cocci_id/* drivers/w1/masters/ds1wm.c 96 */;
	void __exit cocci_id/* drivers/w1/masters/ds1wm.c 663 */;
	int __init cocci_id/* drivers/w1/masters/ds1wm.c 657 */;
	struct platform_driver cocci_id/* drivers/w1/masters/ds1wm.c 647 */;
	struct {
		unsigned long freq;
		unsigned long divisor;
	} cocci_id/* drivers/w1/masters/ds1wm.c 64 */[];
	pm_message_t cocci_id/* drivers/w1/masters/ds1wm.c 615 */;
	struct resource *cocci_id/* drivers/w1/masters/ds1wm.c 510 */;
	struct ds1wm_driver_data *cocci_id/* drivers/w1/masters/ds1wm.c 509 */;
	struct platform_device *cocci_id/* drivers/w1/masters/ds1wm.c 506 */;
	struct w1_bus_master cocci_id/* drivers/w1/masters/ds1wm.c 499 */;
	unsigned long long cocci_id/* drivers/w1/masters/ds1wm.c 441 */;
	unsigned int cocci_id/* drivers/w1/masters/ds1wm.c 380 */;
	unsigned cocci_id/* drivers/w1/masters/ds1wm.c 379 */;
	u64 cocci_id/* drivers/w1/masters/ds1wm.c 377 */;
	w1_slave_found_callback cocci_id/* drivers/w1/masters/ds1wm.c 372 */;
	struct w1_master *cocci_id/* drivers/w1/masters/ds1wm.c 371 */;
	struct ds1wm_data *cocci_id/* drivers/w1/masters/ds1wm.c 333 */;
	void cocci_id/* drivers/w1/masters/ds1wm.c 333 */;
	struct device *cocci_id/* drivers/w1/masters/ds1wm.c 311 */;
	int cocci_id/* drivers/w1/masters/ds1wm.c 297 */;
	unsigned long cocci_id/* drivers/w1/masters/ds1wm.c 275 */;
	unsigned char cocci_id/* drivers/w1/masters/ds1wm.c 273 */;
	u8 cocci_id/* drivers/w1/masters/ds1wm.c 184 */;
	irqreturn_t cocci_id/* drivers/w1/masters/ds1wm.c 181 */;
	void *cocci_id/* drivers/w1/masters/ds1wm.c 181 */;
	u32 cocci_id/* drivers/w1/masters/ds1wm.c 146 */;
	u16 cocci_id/* drivers/w1/masters/ds1wm.c 125 */;
}
