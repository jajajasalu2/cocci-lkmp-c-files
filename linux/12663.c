cocci_test_suite() {
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 743 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 707 */;
	enum di_sync_wave{DI_SYNC_NONE=0, DI_SYNC_CLK=1, DI_SYNC_INT_HSYNC=2, DI_SYNC_HSYNC=3, DI_SYNC_VSYNC=4, DI_SYNC_DE=6, DI_SYNC_CNT1=2, DI_SYNC_CNT4=5, DI_SYNC_CNT5=6,} cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 58 */;
	struct ipu_di_signal_cfg *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 557 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 511 */;
	struct videomode *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 509 */;
	struct ipu_di *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 509 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 509 */;
	signed cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 455 */;
	enum di_pins{DI_PIN11=0, DI_PIN12=1, DI_PIN13=2, DI_PIN14=3, DI_PIN15=4, DI_PIN16=5, DI_PIN17=6, DI_PIN_CS=7, DI_PIN_SER_CLK=0, DI_PIN_SER_RS=1,} cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 44 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 425 */;
	uint32_t cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 398 */;
	unsigned cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 397 */;
	struct clk *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 396 */;
	const struct ipu_di_signal_cfg *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 394 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 393 */;
	struct di_sync_config {
		int run_count;
		int run_src;
		int offset_count;
		int offset_src;
		int repeat_count;
		int cnt_clr_src;
		int cnt_polarity_gen_en;
		int cnt_polarity_clr_src;
		int cnt_polarity_trigger_src;
		int cnt_up;
		int cnt_down;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 30 */;
	struct di_sync_config cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 209 */[];
	struct ipu_di {
		void __iomem *base;
		int id;
		u32 module;
		struct clk *clk_di;
		struct clk *clk_ipu;
		struct clk *clk_di_pixel;
		bool inuse;
		struct ipu_soc *ipu;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 17 */;
	struct di_sync_config *cocci_id/* drivers/gpu/ipu-v3/ipu-di.c 156 */;
}
