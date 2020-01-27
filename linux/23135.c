cocci_test_suite() {
	struct jz4740_i2s {
		struct resource *mem;
		void __iomem *base;
		dma_addr_t phys_base;
		struct clk *clk_aic;
		struct clk *clk_i2s;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
		enum jz47xx_i2s_version version;
	} cocci_id/* sound/soc/jz4740/jz4740-i2s.c 96 */;
	enum jz47xx_i2s_version{JZ_I2S_JZ4740, JZ_I2S_JZ4780,} cocci_id/* sound/soc/jz4740/jz4740-i2s.c 91 */;
	struct platform_driver cocci_id/* sound/soc/jz4740/jz4740-i2s.c 539 */;
	enum jz47xx_i2s_version cocci_id/* sound/soc/jz4740/jz4740-i2s.c 506 */;
	struct resource *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 498 */;
	struct platform_device *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 495 */;
	void *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 488 */;
	const struct of_device_id cocci_id/* sound/soc/jz4740/jz4740-i2s.c 487 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/jz4740/jz4740-i2s.c 482 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/jz4740/jz4740-i2s.c 441 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/jz4740/jz4740-i2s.c 429 */;
	uint32_t cocci_id/* sound/soc/jz4740/jz4740-i2s.c 390 */;
	struct snd_soc_dai *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 387 */;
	int cocci_id/* sound/soc/jz4740/jz4740-i2s.c 387 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 372 */;
	struct jz4740_i2s *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 370 */;
	void cocci_id/* sound/soc/jz4740/jz4740-i2s.c 370 */;
	struct clk *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 306 */;
	unsigned int cocci_id/* sound/soc/jz4740/jz4740-i2s.c 253 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 250 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 249 */;
	const struct jz4740_i2s *cocci_id/* sound/soc/jz4740/jz4740-i2s.c 110 */;
}
