cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 98 */;
	struct clk_hisi_phase *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 97 */;
	spinlock_t *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 95 */;
	void __iomem *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 95 */;
	const struct hisi_phase_clock *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 94 */;
	struct device *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 93 */;
	struct clk *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 93 */;
	const struct clk_ops cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 88 */;
	unsigned long cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 68 */;
	u32 cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 45 */;
	struct clk_hw *cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 42 */;
	int cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 42 */;
	struct clk_hisi_phase {
		struct clk_hw hw;
		void __iomem *reg;
		u32 *phase_degrees;
		u32 *phase_regvals;
		u8 phase_num;
		u32 mask;
		u8 shift;
		u8 flags;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 16 */;
	struct clk_hisi_phase cocci_id/* drivers/clk/hisilicon/clk-hisi-phase.c 100 */;
}
