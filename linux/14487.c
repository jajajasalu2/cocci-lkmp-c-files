cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/rockchip/clk-ddr.c 99 */;
	struct rockchip_ddrclk *cocci_id/* drivers/clk/rockchip/clk-ddr.c 98 */;
	spinlock_t *cocci_id/* drivers/clk/rockchip/clk-ddr.c 96 */;
	void __iomem *cocci_id/* drivers/clk/rockchip/clk-ddr.c 95 */;
	u8 cocci_id/* drivers/clk/rockchip/clk-ddr.c 92 */;
	const char *const*cocci_id/* drivers/clk/rockchip/clk-ddr.c 91 */;
	const char *cocci_id/* drivers/clk/rockchip/clk-ddr.c 90 */;
	struct clk *cocci_id/* drivers/clk/rockchip/clk-ddr.c 90 */;
	int cocci_id/* drivers/clk/rockchip/clk-ddr.c 90 */;
	const struct clk_ops cocci_id/* drivers/clk/rockchip/clk-ddr.c 83 */;
	u32 cocci_id/* drivers/clk/rockchip/clk-ddr.c 74 */;
	struct clk_hw *cocci_id/* drivers/clk/rockchip/clk-ddr.c 71 */;
	unsigned long *cocci_id/* drivers/clk/rockchip/clk-ddr.c 60 */;
	long cocci_id/* drivers/clk/rockchip/clk-ddr.c 58 */;
	struct arm_smccc_res cocci_id/* drivers/clk/rockchip/clk-ddr.c 49 */;
	unsigned long cocci_id/* drivers/clk/rockchip/clk-ddr.c 45 */;
	struct rockchip_ddrclk cocci_id/* drivers/clk/rockchip/clk-ddr.c 27 */;
	struct rockchip_ddrclk {
		struct clk_hw hw;
		void __iomem *reg_base;
		int mux_offset;
		int mux_shift;
		int mux_width;
		int div_shift;
		int div_width;
		int ddr_flag;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/rockchip/clk-ddr.c 15 */;
}
