cocci_test_suite() {
	long cocci_id/* drivers/clk/bcm/clk-bcm2835.c 959 */;
	u64 cocci_id/* drivers/clk/bcm/clk-bcm2835.c 926 */;
	const struct bcm2835_clock_data *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 923 */;
	struct bcm2835_clock *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 922 */;
	unsigned long cocci_id/* drivers/clk/bcm/clk-bcm2835.c 918 */;
	u32 cocci_id/* drivers/clk/bcm/clk-bcm2835.c 917 */;
	struct bcm2835_clock cocci_id/* drivers/clk/bcm/clk-bcm2835.c 905 */;
	struct bcm2835_clock {
		struct clk_hw hw;
		struct bcm2835_cprman *cprman;
		const struct bcm2835_clock_data *data;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 897 */;
	const struct bcm2835_pll_divider_data *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 866 */;
	struct bcm2835_pll_divider *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 864 */;
	struct bcm2835_pll_divider cocci_id/* drivers/clk/bcm/clk-bcm2835.c 779 */;
	struct bcm2835_pll_divider {
		struct clk_divider div;
		struct bcm2835_cprman *cprman;
		const struct bcm2835_pll_divider_data *data;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 770 */;
	const struct bcm2835_pll_data *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 735 */;
	struct bcm2835_pll cocci_id/* drivers/clk/bcm/clk-bcm2835.c 733 */;
	struct bcm2835_pll *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 733 */;
	u32 cocci_id/* drivers/clk/bcm/clk-bcm2835.c 670 */[4];
	struct bcm2835_pll {
		struct clk_hw hw;
		struct bcm2835_cprman *cprman;
		const struct bcm2835_pll_data *data;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 512 */;
	struct bcm2835_gate_data {
		const char *name;
		const char *parent;
		u32 ctl_reg;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 505 */;
	struct bcm2835_clock_data {
		const char *name;
		const char *const*parents;
		int num_mux_parents;
		unsigned int set_rate_parent;
		u32 ctl_reg;
		u32 div_reg;
		u32 int_bits;
		u32 frac_bits;
		u32 flags;
		bool is_vpu_clock;
		bool is_mash_clock;
		bool low_jitter;
		u32 tcnt_mux;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 479 */;
	struct bcm2835_pll_divider_data {
		const char *name;
		const char *source_pll;
		u32 cm_reg;
		u32 a2w_reg;
		u32 load_mask;
		u32 hold_mask;
		u32 fixed_divider;
		u32 flags;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 466 */;
	const struct bcm2835_pll_ana_bits cocci_id/* drivers/clk/bcm/clk-bcm2835.c 446 */;
	struct bcm2835_pll_ana_bits {
		u32 mask0;
		u32 set0;
		u32 mask1;
		u32 set1;
		u32 mask3;
		u32 set3;
		u32 fb_prediv_mask;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 436 */;
	struct bcm2835_pll_data {
		const char *name;
		u32 cm_ctrl_reg;
		u32 a2w_ctrl_reg;
		u32 frac_reg;
		u32 ana_reg_base;
		u32 reference_enable_mask;
		u32 lock_mask;
		const struct bcm2835_pll_ana_bits *ana;
		unsigned long min_rate;
		unsigned long max_rate;
		unsigned long max_fb_rate;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 415 */;
	struct debugfs_regset32 *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 402 */;
	struct debugfs_reg32 *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 399 */;
	struct cprman_plat_data {
		unsigned int soc;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 329 */;
	struct bcm2835_cprman {
		struct device *dev;
		void __iomem *regs;
		spinlock_t regs_lock;
		const char *real_parent_names[ARRAY_SIZE(cprman_parent_names)];
		struct clk_hw_onecell_data onecell;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 313 */;
	struct platform_driver cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2268 */;
	const struct of_device_id cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2261 */[];
	const struct cprman_plat_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2257 */;
	size_t cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2198 */;
	const struct cprman_plat_data *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2197 */;
	const size_t cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2196 */;
	const struct bcm2835_clk_desc *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2195 */;
	struct bcm2835_cprman *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2194 */;
	struct clk_hw **cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2193 */;
	struct device *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2192 */;
	struct platform_device *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2190 */;
	int cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2190 */;
	struct clk *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 2180 */;
	const struct bcm2835_clk_desc cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1616 */[];
	const char *constcocci_id/* drivers/clk/bcm/clk-bcm2835.c 1574 */[];
	struct bcm2835_gate_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1486 */;
	struct bcm2835_clock_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1482 */;
	struct bcm2835_pll_divider_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1478 */;
	struct bcm2835_pll_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1474 */;
	bcm2835_clk_register cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1469 */;
	struct bcm2835_clk_desc {
		bcm2835_clk_register clk_register;
		unsigned int supported;
		const void *data;
	} cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1462 */;
	struct clk_hw *(*cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1460 */)(struct bcm2835_cprman *cprman,
									   const void *data);
	const struct bcm2835_gate_data *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1452 */;
	const char *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1393 */[1 << CM_SRC_BITS];
	struct clk_init_data cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1392 */;
	const char *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1334 */;
	const struct clk_ops cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1267 */;
	struct dentry *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1255 */;
	void cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1254 */;
	struct debugfs_reg32 cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1243 */[];
	u8 cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1233 */;
	struct clk_rate_request *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1170 */;
	unsigned long *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1103 */;
	u32 *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1102 */;
	struct clk_hw *cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1091 */;
	bool cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1090 */;
	ktime_t cocci_id/* drivers/clk/bcm/clk-bcm2835.c 1006 */;
}
