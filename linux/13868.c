cocci_test_suite() {
	struct ir_raw_event cocci_id/* drivers/media/rc/st_rc.c 99 */;
	u32 cocci_id/* drivers/media/rc/st_rc.c 98 */;
	irqreturn_t cocci_id/* drivers/media/rc/st_rc.c 92 */;
	void *cocci_id/* drivers/media/rc/st_rc.c 92 */;
	struct platform_driver cocci_id/* drivers/media/rc/st_rc.c 393 */;
	const struct of_device_id cocci_id/* drivers/media/rc/st_rc.c 385 */[];
	struct st_rc_device cocci_id/* drivers/media/rc/st_rc.c 231 */;
	const char *cocci_id/* drivers/media/rc/st_rc.c 229 */;
	struct device_node *cocci_id/* drivers/media/rc/st_rc.c 228 */;
	struct resource *cocci_id/* drivers/media/rc/st_rc.c 226 */;
	struct device *cocci_id/* drivers/media/rc/st_rc.c 225 */;
	struct platform_device *cocci_id/* drivers/media/rc/st_rc.c 221 */;
	struct st_rc_device *cocci_id/* drivers/media/rc/st_rc.c 215 */;
	struct rc_dev *cocci_id/* drivers/media/rc/st_rc.c 213 */;
	void cocci_id/* drivers/media/rc/st_rc.c 213 */;
	unsigned long cocci_id/* drivers/media/rc/st_rc.c 203 */;
	struct st_rc_device {
		struct device *dev;
		int irq;
		int irq_wake;
		struct clk *sys_clock;
		void __iomem *base;
		void __iomem *rx_base;
		struct rc_dev *rdev;
		bool overclocking;
		int sample_mult;
		int sample_div;
		bool rxuhfmode;
		struct reset_control *rstc;
	} cocci_id/* drivers/media/rc/st_rc.c 17 */;
	unsigned int cocci_id/* drivers/media/rc/st_rc.c 163 */;
	int cocci_id/* drivers/media/rc/st_rc.c 162 */;
}
