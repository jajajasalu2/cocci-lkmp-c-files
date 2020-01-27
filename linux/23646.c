cocci_test_suite() {
	enum{CLK_DACODEC, CLK_I2S_BASE,} cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 76 */;
	struct platform_driver cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 598 */;
	const struct of_device_id cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 591 */[];
	phys_addr_t cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 562 */;
	struct resource *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 547 */;
	struct device *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 545 */;
	struct device_node *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 544 */;
	struct platform_device *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 542 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 538 */;
	const struct snd_soc_dai_driver cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 519 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 511 */;
	struct hi6210_i2s *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 501 */;
	struct snd_soc_dai *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 499 */;
	int cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 499 */;
	struct hi6210_i2s {
		struct device *dev;
		struct reset_control *rc;
		struct clk *clk[8];
		int clocks;
		struct snd_soc_dai_driver dai;
		void __iomem *base;
		struct regmap *sysctrl;
		phys_addr_t base_phys;
		struct snd_dmaengine_dai_dma_data dma_data[2];
		int clk_rate;
		spinlock_t lock;
		int rate;
		int format;
		u8 bits;
		u8 channels;
		u8 id;
		u8 channel_length;
		u8 use;
		u32 master:1;
		u32 status:1;
	} cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 34 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 259 */;
	u32 cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 257 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 253 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 252 */;
	unsigned int cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 220 */;
	void cocci_id/* sound/soc/hisilicon/hi6210-i2s.c 202 */;
}
