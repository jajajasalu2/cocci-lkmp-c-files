cocci_test_suite() {
	unsigned int cocci_id/* sound/soc/adi/axi-spdif.c 79 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/adi/axi-spdif.c 76 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/adi/axi-spdif.c 75 */;
	struct axi_spdif {
		struct regmap *regmap;
		struct clk *clk;
		struct clk *clk_ref;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct snd_ratnum ratnum;
		struct snd_pcm_hw_constraint_ratnums rate_constraints;
	} cocci_id/* sound/soc/adi/axi-spdif.c 37 */;
	struct platform_driver cocci_id/* sound/soc/adi/axi-spdif.c 257 */;
	const struct of_device_id cocci_id/* sound/soc/adi/axi-spdif.c 251 */[];
	struct platform_device *cocci_id/* sound/soc/adi/axi-spdif.c 242 */;
	void __iomem *cocci_id/* sound/soc/adi/axi-spdif.c 183 */;
	struct resource *cocci_id/* sound/soc/adi/axi-spdif.c 182 */;
	const struct regmap_config cocci_id/* sound/soc/adi/axi-spdif.c 172 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/adi/axi-spdif.c 168 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/adi/axi-spdif.c 157 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/adi/axi-spdif.c 150 */;
	void cocci_id/* sound/soc/adi/axi-spdif.c 139 */;
	struct axi_spdif *cocci_id/* sound/soc/adi/axi-spdif.c 110 */;
	struct snd_soc_dai *cocci_id/* sound/soc/adi/axi-spdif.c 108 */;
	int cocci_id/* sound/soc/adi/axi-spdif.c 108 */;
}
