cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/auxdisplay/arm-charlcd.c 76 */;
	void *cocci_id/* drivers/auxdisplay/arm-charlcd.c 76 */;
	struct charlcd {
		struct device *dev;
		u32 phybase;
		u32 physize;
		void __iomem *virtbase;
		int irq;
		struct completion complete;
		struct delayed_work init_work;
	} cocci_id/* drivers/auxdisplay/arm-charlcd.c 66 */;
	struct platform_driver cocci_id/* drivers/auxdisplay/arm-charlcd.c 360 */;
	const struct of_device_id cocci_id/* drivers/auxdisplay/arm-charlcd.c 355 */[];
	const struct dev_pm_ops cocci_id/* drivers/auxdisplay/arm-charlcd.c 350 */;
	struct device *cocci_id/* drivers/auxdisplay/arm-charlcd.c 341 */;
	struct resource *cocci_id/* drivers/auxdisplay/arm-charlcd.c 271 */;
	struct platform_device *cocci_id/* drivers/auxdisplay/arm-charlcd.c 267 */;
	int __init cocci_id/* drivers/auxdisplay/arm-charlcd.c 267 */;
	struct charlcd cocci_id/* drivers/auxdisplay/arm-charlcd.c 262 */;
	struct work_struct *cocci_id/* drivers/auxdisplay/arm-charlcd.c 259 */;
	const char *cocci_id/* drivers/auxdisplay/arm-charlcd.c 208 */;
	int cocci_id/* drivers/auxdisplay/arm-charlcd.c 208 */;
	u32 cocci_id/* drivers/auxdisplay/arm-charlcd.c 199 */;
	u8 cocci_id/* drivers/auxdisplay/arm-charlcd.c 197 */;
	struct charlcd *cocci_id/* drivers/auxdisplay/arm-charlcd.c 197 */;
	void cocci_id/* drivers/auxdisplay/arm-charlcd.c 197 */;
	bool cocci_id/* drivers/auxdisplay/arm-charlcd.c 160 */;
}
