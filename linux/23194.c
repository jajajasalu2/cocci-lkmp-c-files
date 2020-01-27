cocci_test_suite() {
	unsigned int cocci_id/* sound/soc/sirf/sirf-usp.c 80 */;
	struct snd_soc_dai *cocci_id/* sound/soc/sirf/sirf-usp.c 70 */;
	int cocci_id/* sound/soc/sirf/sirf-usp.c 70 */;
	struct platform_driver cocci_id/* sound/soc/sirf/sirf-usp.c 421 */;
	const struct of_device_id cocci_id/* sound/soc/sirf/sirf-usp.c 409 */[];
	struct sirf_usp cocci_id/* sound/soc/sirf/sirf-usp.c 363 */;
	void __iomem *cocci_id/* sound/soc/sirf/sirf-usp.c 361 */;
	struct platform_device *cocci_id/* sound/soc/sirf/sirf-usp.c 357 */;
	const struct regmap_config cocci_id/* sound/soc/sirf/sirf-usp.c 349 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/sirf/sirf-usp.c 345 */;
	struct device *cocci_id/* sound/soc/sirf/sirf-usp.c 329 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/sirf/sirf-usp.c 271 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/sirf/sirf-usp.c 265 */;
	struct sirf_usp {
		struct regmap *regmap;
		struct clk *clk;
		u32 mode1_reg;
		u32 mode2_reg;
		int daifmt_format;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
	} cocci_id/* sound/soc/sirf/sirf-usp.c 18 */;
	u32 cocci_id/* sound/soc/sirf/sirf-usp.c 168 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sirf/sirf-usp.c 165 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sirf/sirf-usp.c 164 */;
	struct sirf_usp *cocci_id/* sound/soc/sirf/sirf-usp.c 116 */;
	void cocci_id/* sound/soc/sirf/sirf-usp.c 116 */;
}
