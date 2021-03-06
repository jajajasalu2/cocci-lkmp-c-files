cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/img/img-spdif-in.c 878 */;
	const struct of_device_id cocci_id/* sound/soc/img/img-spdif-in.c 866 */[];
	struct platform_device *cocci_id/* sound/soc/img/img-spdif-in.c 815 */;
	struct device *cocci_id/* sound/soc/img/img-spdif-in.c 725 */;
	struct reset_control *cocci_id/* sound/soc/img/img-spdif-in.c 723 */;
	void __iomem *cocci_id/* sound/soc/img/img-spdif-in.c 721 */;
	struct resource *cocci_id/* sound/soc/img/img-spdif-in.c 720 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/img/img-spdif-in.c 713 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/img/img-spdif-in.c 702 */;
	struct img_spdif_in {
		spinlock_t lock;
		void __iomem *base;
		struct clk *clk_sys;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct device *dev;
		unsigned int trk;
		bool multi_freq;
		int lock_acquire;
		int lock_release;
		unsigned int single_freq;
		unsigned int multi_freqs[IMG_SPDIF_IN_NUM_ACLKGEN];
		bool active;
		u32 suspend_clkgen;
		u32 suspend_ctl;
		unsigned int aclkgen_regs[IMG_SPDIF_IN_NUM_ACLKGEN];
	} cocci_id/* sound/soc/img/img-spdif-in.c 70 */;
	struct snd_soc_dai *cocci_id/* sound/soc/img/img-spdif-in.c 690 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/img/img-spdif-in.c 685 */;
	snd_pcm_format_t cocci_id/* sound/soc/img/img-spdif-in.c 670 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/img/img-spdif-in.c 666 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/img/img-spdif-in.c 665 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/img/img-spdif-in.c 571 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/img/img-spdif-in.c 494 */;
	struct snd_kcontrol *cocci_id/* sound/soc/img/img-spdif-in.c 493 */;
	bool cocci_id/* sound/soc/img/img-spdif-in.c 351 */;
	unsigned int cocci_id/* sound/soc/img/img-spdif-in.c 350 */[IMG_SPDIF_IN_NUM_ACLKGEN];
	struct snd_ctl_elem_info *cocci_id/* sound/soc/img/img-spdif-in.c 271 */;
	unsigned int cocci_id/* sound/soc/img/img-spdif-in.c 216 */[];
	unsigned int *cocci_id/* sound/soc/img/img-spdif-in.c 149 */;
	unsigned long cocci_id/* sound/soc/img/img-spdif-in.c 134 */;
	unsigned long *cocci_id/* sound/soc/img/img-spdif-in.c 132 */;
	unsigned int cocci_id/* sound/soc/img/img-spdif-in.c 132 */;
	int cocci_id/* sound/soc/img/img-spdif-in.c 131 */;
	u32 cocci_id/* sound/soc/img/img-spdif-in.c 125 */;
	struct img_spdif_in *cocci_id/* sound/soc/img/img-spdif-in.c 124 */;
	void cocci_id/* sound/soc/img/img-spdif-in.c 124 */;
}
