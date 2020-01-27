cocci_test_suite() {
	int cocci_id/* drivers/clk/rockchip/softrst.c 85 */;
	struct rockchip_softrst *cocci_id/* drivers/clk/rockchip/softrst.c 84 */;
	u8 cocci_id/* drivers/clk/rockchip/softrst.c 82 */;
	void __iomem *cocci_id/* drivers/clk/rockchip/softrst.c 82 */;
	unsigned int cocci_id/* drivers/clk/rockchip/softrst.c 81 */;
	struct device_node *cocci_id/* drivers/clk/rockchip/softrst.c 80 */;
	void __init cocci_id/* drivers/clk/rockchip/softrst.c 80 */;
	const struct reset_control_ops cocci_id/* drivers/clk/rockchip/softrst.c 75 */;
	u32 cocci_id/* drivers/clk/rockchip/softrst.c 36 */;
	struct rockchip_softrst cocci_id/* drivers/clk/rockchip/softrst.c 26 */;
	unsigned long cocci_id/* drivers/clk/rockchip/softrst.c 23 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/rockchip/softrst.c 22 */;
	struct rockchip_softrst {
		struct reset_controller_dev rcdev;
		void __iomem *reg_base;
		int num_regs;
		int num_per_reg;
		u8 flags;
		spinlock_t lock;
	} cocci_id/* drivers/clk/rockchip/softrst.c 13 */;
}
