cocci_test_suite() {
	struct zx_i2s_info {
		struct snd_dmaengine_dai_dma_data dma_playback;
		struct snd_dmaengine_dai_dma_data dma_capture;
		struct clk *dai_wclk;
		struct clk *dai_pclk;
		void __iomem *reg_base;
		int master;
		resource_size_t mapbase;
	} cocci_id/* sound/soc/zte/zx-i2s.c 91 */;
	struct platform_driver cocci_id/* sound/soc/zte/zx-i2s.c 440 */;
	const struct of_device_id cocci_id/* sound/soc/zte/zx-i2s.c 434 */[];
	struct resource *cocci_id/* sound/soc/zte/zx-i2s.c 389 */;
	struct platform_device *cocci_id/* sound/soc/zte/zx-i2s.c 387 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/zte/zx-i2s.c 368 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/zte/zx-i2s.c 364 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/zte/zx-i2s.c 356 */;
	unsigned long cocci_id/* sound/soc/zte/zx-i2s.c 228 */;
	unsigned int cocci_id/* sound/soc/zte/zx-i2s.c 226 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/zte/zx-i2s.c 225 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/zte/zx-i2s.c 221 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/zte/zx-i2s.c 220 */;
	struct zx_i2s_info *cocci_id/* sound/soc/zte/zx-i2s.c 163 */;
	struct snd_soc_dai *cocci_id/* sound/soc/zte/zx-i2s.c 161 */;
	int cocci_id/* sound/soc/zte/zx-i2s.c 161 */;
	bool cocci_id/* sound/soc/zte/zx-i2s.c 138 */;
	void __iomem *cocci_id/* sound/soc/zte/zx-i2s.c 138 */;
	void cocci_id/* sound/soc/zte/zx-i2s.c 138 */;
}
