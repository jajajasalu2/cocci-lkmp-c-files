cocci_test_suite() {
	struct samsung_spdif_info cocci_id/* sound/soc/samsung/spdif.c 92 */;
	struct snd_dmaengine_dai_dma_data cocci_id/* sound/soc/samsung/spdif.c 91 */;
	struct samsung_spdif_info {
		spinlock_t lock;
		struct device *dev;
		void __iomem *regs;
		unsigned long clk_rate;
		struct clk *pclk;
		struct clk *sclk;
		u32 saved_clkcon;
		u32 saved_con;
		u32 saved_cstas;
		struct snd_dmaengine_dai_dma_data *dma_playback;
	} cocci_id/* sound/soc/samsung/spdif.c 78 */;
	struct platform_driver cocci_id/* sound/soc/samsung/spdif.c 473 */;
	dma_filter_fn cocci_id/* sound/soc/samsung/spdif.c 359 */;
	struct resource *cocci_id/* sound/soc/samsung/spdif.c 357 */;
	struct s3c_audio_pdata *cocci_id/* sound/soc/samsung/spdif.c 356 */;
	struct platform_device *cocci_id/* sound/soc/samsung/spdif.c 354 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/samsung/spdif.c 350 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/samsung/spdif.c 334 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/samsung/spdif.c 327 */;
	void cocci_id/* sound/soc/samsung/spdif.c 273 */;
	unsigned long cocci_id/* sound/soc/samsung/spdif.c 179 */;
	u32 cocci_id/* sound/soc/samsung/spdif.c 178 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/samsung/spdif.c 177 */;
	void __iomem *cocci_id/* sound/soc/samsung/spdif.c 176 */;
	struct samsung_spdif_info *cocci_id/* sound/soc/samsung/spdif.c 175 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/samsung/spdif.c 174 */;
	struct snd_soc_dai *cocci_id/* sound/soc/samsung/spdif.c 172 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/samsung/spdif.c 171 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/samsung/spdif.c 170 */;
	int cocci_id/* sound/soc/samsung/spdif.c 170 */;
	int cocci_id/* sound/soc/samsung/spdif.c 166 */[];
	unsigned int cocci_id/* sound/soc/samsung/spdif.c 114 */;
}
