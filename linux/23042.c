cocci_test_suite() {
	unsigned int cocci_id/* sound/soc/adi/axi-i2s.c 92 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/adi/axi-i2s.c 89 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/adi/axi-i2s.c 88 */;
	struct axi_i2s {
		struct regmap *regmap;
		struct clk *clk;
		struct clk *clk_ref;
		bool has_capture;
		bool has_playback;
		struct snd_soc_dai_driver dai_driver;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
		struct snd_ratnum ratnum;
		struct snd_pcm_hw_constraint_ratnums rate_constraints;
	} cocci_id/* sound/soc/adi/axi-i2s.c 40 */;
	struct platform_driver cocci_id/* sound/soc/adi/axi-i2s.c 292 */;
	const struct of_device_id cocci_id/* sound/soc/adi/axi-i2s.c 286 */[];
	struct platform_device *cocci_id/* sound/soc/adi/axi-i2s.c 277 */;
	void __iomem *cocci_id/* sound/soc/adi/axi-i2s.c 190 */;
	struct resource *cocci_id/* sound/soc/adi/axi-i2s.c 188 */;
	const char *cocci_id/* sound/soc/adi/axi-i2s.c 176 */;
	struct property *cocci_id/* sound/soc/adi/axi-i2s.c 175 */;
	const struct device_node *cocci_id/* sound/soc/adi/axi-i2s.c 173 */;
	void cocci_id/* sound/soc/adi/axi-i2s.c 173 */;
	const struct regmap_config cocci_id/* sound/soc/adi/axi-i2s.c 166 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/adi/axi-i2s.c 162 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/adi/axi-i2s.c 156 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/adi/axi-i2s.c 149 */;
	struct axi_i2s *cocci_id/* sound/soc/adi/axi-i2s.c 139 */;
	struct snd_soc_dai *cocci_id/* sound/soc/adi/axi-i2s.c 137 */;
	int cocci_id/* sound/soc/adi/axi-i2s.c 137 */;
	uint32_t cocci_id/* sound/soc/adi/axi-i2s.c 110 */;
}
