cocci_test_suite() {
	bool cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 99 */;
	struct device *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 99 */;
	unsigned int cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 99 */;
	struct platform_driver cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 640 */;
	const struct dev_pm_ops cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 635 */;
	const struct of_device_id cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 628 */[];
	struct xtfpga_i2s {
		struct device *dev;
		struct clk *clk;
		struct regmap *regmap;
		void __iomem *regs;
		struct snd_pcm_substream __rcu *tx_substream;
		unsigned (*tx_fn)(struct xtfpga_i2s *i2s,
				  struct snd_pcm_runtime *runtime,
				  unsigned tx_ptr);
		unsigned tx_ptr;
		unsigned tx_fifo_level;
		unsigned tx_fifo_low;
		unsigned tx_fifo_high;
	} cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 57 */;
	struct platform_device *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 533 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 497 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 491 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 480 */;
	size_t cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 473 */;
	struct snd_card *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 472 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 470 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 459 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 394 */;
	struct snd_soc_component *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 382 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 352 */;
	unsigned cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 284 */;
	struct xtfpga_i2s *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 283 */;
	struct snd_soc_dai *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 281 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 280 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 279 */;
	int cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 279 */;
	irqreturn_t cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 223 */;
	void *cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 223 */;
	void cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 176 */;
	const struct regmap_config cocci_id/* sound/soc/xtensa/xtfpga-i2s.c 109 */;
}
