cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/samsung/pcm.c 588 */;
	dma_filter_fn cocci_id/* sound/soc/samsung/pcm.c 486 */;
	struct s3c_audio_pdata *cocci_id/* sound/soc/samsung/pcm.c 485 */;
	struct resource *cocci_id/* sound/soc/samsung/pcm.c 484 */;
	struct platform_device *cocci_id/* sound/soc/samsung/pcm.c 481 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/samsung/pcm.c 477 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/samsung/pcm.c 466 */[];
	struct s3c_pcm_info *cocci_id/* sound/soc/samsung/pcm.c 440 */;
	struct snd_soc_dai *cocci_id/* sound/soc/samsung/pcm.c 438 */;
	int cocci_id/* sound/soc/samsung/pcm.c 438 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/samsung/pcm.c 430 */;
	unsigned int cocci_id/* sound/soc/samsung/pcm.c 314 */;
	u32 cocci_id/* sound/soc/samsung/pcm.c 264 */;
	unsigned long cocci_id/* sound/soc/samsung/pcm.c 263 */;
	struct clk *cocci_id/* sound/soc/samsung/pcm.c 261 */;
	void __iomem *cocci_id/* sound/soc/samsung/pcm.c 260 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/samsung/pcm.c 258 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/samsung/pcm.c 255 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/samsung/pcm.c 254 */;
	void cocci_id/* sound/soc/samsung/pcm.c 180 */;
	struct s3c_pcm_info cocci_id/* sound/soc/samsung/pcm.c 147 */[2];
	struct snd_dmaengine_dai_dma_data cocci_id/* sound/soc/samsung/pcm.c 138 */[];
	struct s3c_pcm_info {
		spinlock_t lock;
		struct device *dev;
		void __iomem *regs;
		unsigned int sclk_per_fs;
		unsigned int idleclk;
		struct clk *pclk;
		struct clk *cclk;
		struct snd_dmaengine_dai_dma_data *dma_playback;
		struct snd_dmaengine_dai_dma_data *dma_capture;
	} cocci_id/* sound/soc/samsung/pcm.c 112 */;
}
