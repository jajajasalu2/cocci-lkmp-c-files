cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 96 */;
	const char *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 92 */;
	const char **cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 92 */;
	const struct clk_ops cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 85 */;
	u32 cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 63 */;
	int cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 62 */;
	struct s3c24xx_clkout *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 61 */;
	u8 cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 59 */;
	struct clk_hw *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 59 */;
	struct s3c24xx_clkout cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 57 */;
	struct s3c24xx_clkout {
		struct clk_hw hw;
		u32 mask;
		u8 shift;
	} cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 51 */;
	struct platform_driver cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 423 */;
	const struct platform_device_id cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 404 */[];
	struct s3c24xx_dclk_drv_data {
		const char **clkout0_parent_names;
		int clkout0_num_parents;
		const char **clkout1_parent_names;
		int clkout1_num_parents;
		const char **mux_parent_names;
		int mux_num_parents;
	} cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 38 */;
	struct s3c24xx_dclk_drv_data cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 369 */[];
	enum supported_socs{S3C2410, S3C2412, S3C2440, S3C2443,} cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 31 */;
	struct clk_hw **cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 242 */;
	struct s3c24xx_dclk_drv_data *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 241 */;
	struct platform_device *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 238 */;
	struct device *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 226 */;
	struct s3c24xx_dclk *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 194 */;
	void *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 192 */;
	unsigned long cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 192 */;
	struct notifier_block *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 191 */;
	void cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 170 */;
	const char *cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 143 */[];
	struct s3c24xx_dclk cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 137 */;
	struct s3c24xx_dclk {
		struct device *dev;
		void __iomem *base;
		struct notifier_block dclk0_div_change_nb;
		struct notifier_block dclk1_div_change_nb;
		spinlock_t dclk_lock;
		unsigned long reg_save;
		struct clk_hw_onecell_data clk_data;
	} cocci_id/* drivers/clk/samsung/clk-s3c2410-dclk.c 125 */;
}
