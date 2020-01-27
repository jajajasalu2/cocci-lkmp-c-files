cocci_test_suite() {
	struct clk_onecell_data *cocci_id/* drivers/clk/st/clkgen-fsyn.c 864 */;
	struct device_node *cocci_id/* drivers/clk/st/clkgen-fsyn.c 860 */;
	void __init cocci_id/* drivers/clk/st/clkgen-fsyn.c 859 */;
	struct clk_init_data cocci_id/* drivers/clk/st/clkgen-fsyn.c 827 */;
	struct clk *cocci_id/* drivers/clk/st/clkgen-fsyn.c 826 */;
	spinlock_t *cocci_id/* drivers/clk/st/clkgen-fsyn.c 823 */;
	struct clkgen_quadfs_data *cocci_id/* drivers/clk/st/clkgen-fsyn.c 822 */;
	void __iomem *cocci_id/* drivers/clk/st/clkgen-fsyn.c 822 */;
	const char *cocci_id/* drivers/clk/st/clkgen-fsyn.c 821 */;
	struct clk *__initcocci_id/* drivers/clk/st/clkgen-fsyn.c 820 */;
	const struct clk_ops cocci_id/* drivers/clk/st/clkgen-fsyn.c 811 */;
	const struct clkgen_quadfs_data cocci_id/* drivers/clk/st/clkgen-fsyn.c 76 */;
	int cocci_id/* drivers/clk/st/clkgen-fsyn.c 73 */(unsigned long,
							  const struct stm_fs *,
							  unsigned long *);
	int (*cocci_id/* drivers/clk/st/clkgen-fsyn.c 719 */)(unsigned long,
							      unsigned long,
							      struct stm_fs *);
	int (*cocci_id/* drivers/clk/st/clkgen-fsyn.c 717 */)(unsigned long,
							      const struct stm_fs *,
							      unsigned long *);
	struct st_clk_quadfs_fsynth *cocci_id/* drivers/clk/st/clkgen-fsyn.c 716 */;
	struct clk_hw *cocci_id/* drivers/clk/st/clkgen-fsyn.c 713 */;
	long cocci_id/* drivers/clk/st/clkgen-fsyn.c 713 */;
	int cocci_id/* drivers/clk/st/clkgen-fsyn.c 71 */(unsigned long input,
							  unsigned long output,
							  struct stm_fs *fs);
	struct stm_fs cocci_id/* drivers/clk/st/clkgen-fsyn.c 631 */;
	uint64_t cocci_id/* drivers/clk/st/clkgen-fsyn.c 628 */;
	struct stm_fs *cocci_id/* drivers/clk/st/clkgen-fsyn.c 621 */;
	unsigned long cocci_id/* drivers/clk/st/clkgen-fsyn.c 620 */;
	int cocci_id/* drivers/clk/st/clkgen-fsyn.c 620 */;
	uint64_t *cocci_id/* drivers/clk/st/clkgen-fsyn.c 585 */;
	signed long cocci_id/* drivers/clk/st/clkgen-fsyn.c 585 */;
	const struct stm_fs *cocci_id/* drivers/clk/st/clkgen-fsyn.c 561 */;
	unsigned long *cocci_id/* drivers/clk/st/clkgen-fsyn.c 561 */;
	u32 cocci_id/* drivers/clk/st/clkgen-fsyn.c 550 */;
	void cocci_id/* drivers/clk/st/clkgen-fsyn.c 531 */;
	struct st_clk_quadfs_fsynth cocci_id/* drivers/clk/st/clkgen-fsyn.c 469 */;
	struct st_clk_quadfs_fsynth {
		struct clk_hw hw;
		void __iomem *regs_base;
		spinlock_t *lock;
		struct clkgen_quadfs_data *data;
		u32 chan;
		u32 md;
		u32 pe;
		u32 sdiv;
		u32 nsdiv;
	} cocci_id/* drivers/clk/st/clkgen-fsyn.c 444 */;
	struct clkgen_quadfs_data {
		bool reset_present;
		bool bwfilter_present;
		bool lockstatus_present;
		bool powerup_polarity;
		bool standby_polarity;
		bool nsdiv_present;
		bool nrst_present;
		struct clkgen_field ndiv;
		struct clkgen_field ref_bw;
		struct clkgen_field nreset;
		struct clkgen_field npda;
		struct clkgen_field lock_status;
		struct clkgen_field nrst[QUADFS_MAX_CHAN];
		struct clkgen_field nsb[QUADFS_MAX_CHAN];
		struct clkgen_field en[QUADFS_MAX_CHAN];
		struct clkgen_field mdiv[QUADFS_MAX_CHAN];
		struct clkgen_field pe[QUADFS_MAX_CHAN];
		struct clkgen_field sdiv[QUADFS_MAX_CHAN];
		struct clkgen_field nsdiv[QUADFS_MAX_CHAN];
		const struct clk_ops *pll_ops;
		int (*get_params)(unsigned long, unsigned long,
				  struct stm_fs *);
		int (*get_rate)(unsigned long, const struct stm_fs *,
				unsigned long *);
	} cocci_id/* drivers/clk/st/clkgen-fsyn.c 41 */;
	struct stm_fs {
		unsigned long ndiv;
		unsigned long mdiv;
		unsigned long pe;
		unsigned long sdiv;
		unsigned long nsdiv;
	} cocci_id/* drivers/clk/st/clkgen-fsyn.c 33 */;
	unsigned int cocci_id/* drivers/clk/st/clkgen-fsyn.c 329 */;
	struct st_clk_quadfs_pll *cocci_id/* drivers/clk/st/clkgen-fsyn.c 233 */;
	struct st_clk_quadfs_pll cocci_id/* drivers/clk/st/clkgen-fsyn.c 188 */;
	struct st_clk_quadfs_pll {
		struct clk_hw hw;
		void __iomem *regs_base;
		spinlock_t *lock;
		struct clkgen_quadfs_data *data;
		u32 ndiv;
	} cocci_id/* drivers/clk/st/clkgen-fsyn.c 180 */;
}
