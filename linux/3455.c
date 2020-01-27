cocci_test_suite() {
	u32 *cocci_id/* drivers/vlynq/vlynq.c 82 */;
	struct bus_type cocci_id/* drivers/vlynq/vlynq.c 766 */;
	struct platform_driver cocci_id/* drivers/vlynq/vlynq.c 760 */;
	struct vlynq_regs *cocci_id/* drivers/vlynq/vlynq.c 708 */;
	struct resource *cocci_id/* drivers/vlynq/vlynq.c 658 */;
	struct platform_device *cocci_id/* drivers/vlynq/vlynq.c 655 */;
	struct vlynq_mapping *cocci_id/* drivers/vlynq/vlynq.c 586 */;
	struct vlynq_regs {
		u32 revision;
		u32 control;
		u32 status;
		u32 int_prio;
		u32 int_status;
		u32 int_pending;
		u32 int_ptr;
		u32 tx_offset;
		struct vlynq_mapping rx_mapping[4];
		u32 chip;
		u32 autonego;
		u32 unused[6];
		u32 int_device[8];
	} cocci_id/* drivers/vlynq/vlynq.c 51 */;
	struct plat_vlynq_ops *cocci_id/* drivers/vlynq/vlynq.c 484 */;
	struct vlynq_device *cocci_id/* drivers/vlynq/vlynq.c 481 */;
	int cocci_id/* drivers/vlynq/vlynq.c 481 */;
	struct vlynq_driver *cocci_id/* drivers/vlynq/vlynq.c 355 */;
	struct module *cocci_id/* drivers/vlynq/vlynq.c 355 */;
	struct vlynq_device_id *cocci_id/* drivers/vlynq/vlynq.c 314 */;
	struct device_driver *cocci_id/* drivers/vlynq/vlynq.c 310 */;
	struct device *cocci_id/* drivers/vlynq/vlynq.c 309 */;
	void cocci_id/* drivers/vlynq/vlynq.c 303 */;
	struct irq_chip cocci_id/* drivers/vlynq/vlynq.c 224 */;
	u32 cocci_id/* drivers/vlynq/vlynq.c 205 */;
	irqreturn_t cocci_id/* drivers/vlynq/vlynq.c 202 */;
	void *cocci_id/* drivers/vlynq/vlynq.c 202 */;
	unsigned int cocci_id/* drivers/vlynq/vlynq.c 151 */;
	struct irq_data *cocci_id/* drivers/vlynq/vlynq.c 138 */;
}
