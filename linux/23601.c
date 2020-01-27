cocci_test_suite() {
	void cocci_id/* sound/soc/img/img-spdif-out.c 94 */;
	struct platform_driver cocci_id/* sound/soc/img/img-spdif-out.c 472 */;
	const struct of_device_id cocci_id/* sound/soc/img/img-spdif-out.c 460 */[];
	struct platform_device *cocci_id/* sound/soc/img/img-spdif-out.c 411 */;
	struct img_spdif_out {
		spinlock_t lock;
		void __iomem *base;
		struct clk *clk_sys;
		struct clk *clk_ref;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct device *dev;
		struct reset_control *rst;
		u32 suspend_ctl;
		u32 suspend_csl;
		u32 suspend_csh;
	} cocci_id/* sound/soc/img/img-spdif-out.c 39 */;
	struct device *cocci_id/* sound/soc/img/img-spdif-out.c 328 */;
	void __iomem *cocci_id/* sound/soc/img/img-spdif-out.c 326 */;
	struct resource *cocci_id/* sound/soc/img/img-spdif-out.c 325 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/img/img-spdif-out.c 318 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/img/img-spdif-out.c 307 */;
	struct img_spdif_out *cocci_id/* sound/soc/img/img-spdif-out.c 297 */;
	struct snd_soc_dai *cocci_id/* sound/soc/img/img-spdif-out.c 295 */;
	int cocci_id/* sound/soc/img/img-spdif-out.c 295 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/img/img-spdif-out.c 290 */;
	snd_pcm_format_t cocci_id/* sound/soc/img/img-spdif-out.c 239 */;
	long cocci_id/* sound/soc/img/img-spdif-out.c 237 */;
	unsigned int cocci_id/* sound/soc/img/img-spdif-out.c 236 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/img/img-spdif-out.c 233 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/img/img-spdif-out.c 232 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/img/img-spdif-out.c 186 */[];
	unsigned long cocci_id/* sound/soc/img/img-spdif-out.c 138 */;
	u32 cocci_id/* sound/soc/img/img-spdif-out.c 137 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/img/img-spdif-out.c 133 */;
	struct snd_kcontrol *cocci_id/* sound/soc/img/img-spdif-out.c 132 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/img/img-spdif-out.c 112 */;
}
