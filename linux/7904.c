cocci_test_suite() {
	struct b53_srab_priv {
		void __iomem *regs;
		void __iomem *mux_config;
		struct b53_srab_port_priv port_intrs[B53_N_PORTS];
	} cocci_id/* drivers/net/dsa/b53/b53_srab.c 85 */;
	struct b53_srab_port_priv {
		int irq;
		bool irq_enabled;
		struct b53_device *dev;
		unsigned int num;
		phy_interface_t mode;
	} cocci_id/* drivers/net/dsa/b53/b53_srab.c 77 */;
	struct platform_driver cocci_id/* drivers/net/dsa/b53/b53_srab.c 641 */;
	unsigned long cocci_id/* drivers/net/dsa/b53/b53_srab.c 603 */;
	const struct of_device_id *cocci_id/* drivers/net/dsa/b53/b53_srab.c 591 */;
	struct device_node *cocci_id/* drivers/net/dsa/b53/b53_srab.c 590 */;
	struct b53_platform_data *cocci_id/* drivers/net/dsa/b53/b53_srab.c 589 */;
	unsigned int cocci_id/* drivers/net/dsa/b53/b53_srab.c 539 */;
	struct platform_device *cocci_id/* drivers/net/dsa/b53/b53_srab.c 534 */;
	char *cocci_id/* drivers/net/dsa/b53/b53_srab.c 509 */;
	u32 cocci_id/* drivers/net/dsa/b53/b53_srab.c 493 */;
	bool cocci_id/* drivers/net/dsa/b53/b53_srab.c 491 */;
	struct b53_srab_priv *cocci_id/* drivers/net/dsa/b53/b53_srab.c 491 */;
	void cocci_id/* drivers/net/dsa/b53/b53_srab.c 491 */;
	void *cocci_id/* drivers/net/dsa/b53/b53_srab.c 476 */;
	const struct of_device_id cocci_id/* drivers/net/dsa/b53/b53_srab.c 469 */[];
	const struct b53_io_ops cocci_id/* drivers/net/dsa/b53/b53_srab.c 446 */;
	struct b53_srab_port_priv *cocci_id/* drivers/net/dsa/b53/b53_srab.c 438 */;
	struct b53_device *cocci_id/* drivers/net/dsa/b53/b53_srab.c 435 */;
	int cocci_id/* drivers/net/dsa/b53/b53_srab.c 435 */;
	irqreturn_t cocci_id/* drivers/net/dsa/b53/b53_srab.c 382 */;
	u16 cocci_id/* drivers/net/dsa/b53/b53_srab.c 286 */;
	u64 cocci_id/* drivers/net/dsa/b53/b53_srab.c 234 */;
	u64 *cocci_id/* drivers/net/dsa/b53/b53_srab.c 219 */;
	u32 *cocci_id/* drivers/net/dsa/b53/b53_srab.c 197 */;
	u16 *cocci_id/* drivers/net/dsa/b53/b53_srab.c 175 */;
	u8 *cocci_id/* drivers/net/dsa/b53/b53_srab.c 153 */;
	u8 __iomem *cocci_id/* drivers/net/dsa/b53/b53_srab.c 128 */;
	u8 cocci_id/* drivers/net/dsa/b53/b53_srab.c 125 */;
}
