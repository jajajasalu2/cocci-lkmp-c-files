cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 95 */;
	const struct orion_mdio_ops *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 91 */;
	struct orion_mdio_ops {
		int (*is_done)(struct orion_mdio_dev *);
		unsigned int poll_interval_min;
		unsigned int poll_interval_max;
	} cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 83 */;
	enum orion_mdio_bus_type{BUS_TYPE_SMI, BUS_TYPE_XSMI,} cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 78 */;
	struct orion_mdio_dev {
		void __iomem *regs;
		struct clk *clk[4];
		int err_interrupt;
		wait_queue_head_t smi_busy_wait;
	} cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 65 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 424 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 417 */[];
	struct orion_mdio_dev cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 293 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 280 */;
	struct resource *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 279 */;
	enum orion_mdio_bus_type cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 278 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 276 */;
	struct orion_mdio_dev *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 263 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 261 */;
	void *cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 261 */;
	int cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 261 */;
	u16 cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 173 */;
	u32 cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 144 */;
	const struct orion_mdio_ops cocci_id/* drivers/net/ethernet/marvell/mvmdio.c 134 */;
}
