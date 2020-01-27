cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/w1/masters/omap_hdq.c 776 */;
	const struct of_device_id cocci_id/* drivers/w1/masters/omap_hdq.c 769 */[];
	const char *cocci_id/* drivers/w1/masters/omap_hdq.c 665 */;
	struct device *cocci_id/* drivers/w1/masters/omap_hdq.c 661 */;
	struct platform_device *cocci_id/* drivers/w1/masters/omap_hdq.c 659 */;
	struct w1_bus_master cocci_id/* drivers/w1/masters/omap_hdq.c 653 */;
	struct hdq_data {
		struct device *dev;
		void __iomem *hdq_base;
		struct mutex hdq_mutex;
		int hdq_usecount;
		u8 hdq_irqstatus;
		spinlock_t hdq_spinlock;
		int init_trans;
		int rrw;
		int mode;
	} cocci_id/* drivers/w1/masters/omap_hdq.c 60 */;
	u8 *cocci_id/* drivers/w1/masters/omap_hdq.c 349 */;
	u8 cocci_id/* drivers/w1/masters/omap_hdq.c 243 */;
	struct hdq_data *cocci_id/* drivers/w1/masters/omap_hdq.c 240 */;
	int cocci_id/* drivers/w1/masters/omap_hdq.c 240 */;
	u64 cocci_id/* drivers/w1/masters/omap_hdq.c 222 */;
	w1_slave_found_callback cocci_id/* drivers/w1/masters/omap_hdq.c 220 */;
	struct w1_master *cocci_id/* drivers/w1/masters/omap_hdq.c 219 */;
	unsigned long cocci_id/* drivers/w1/masters/omap_hdq.c 201 */;
	irqreturn_t cocci_id/* drivers/w1/masters/omap_hdq.c 198 */;
	void *cocci_id/* drivers/w1/masters/omap_hdq.c 198 */;
	u32 cocci_id/* drivers/w1/masters/omap_hdq.c 102 */;
	void cocci_id/* drivers/w1/masters/omap_hdq.c 102 */;
}
