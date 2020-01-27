cocci_test_suite() {
	u32 *cocci_id/* sound/mips/hal2.c 92 */;
	struct platform_driver cocci_id/* sound/mips/hal2.c 915 */;
	struct platform_device *cocci_id/* sound/mips/hal2.c 865 */;
	struct hal2_syn_regs *cocci_id/* sound/mips/hal2.c 819 */;
	struct hal2_vol_regs *cocci_id/* sound/mips/hal2.c 818 */;
	struct hal2_aes_regs *cocci_id/* sound/mips/hal2.c 817 */;
	struct hal2_ctl_regs *cocci_id/* sound/mips/hal2.c 816 */;
	struct hpc3_regs *cocci_id/* sound/mips/hal2.c 800 */;
	struct snd_card *cocci_id/* sound/mips/hal2.c 797 */;
	struct snd_hal2 **cocci_id/* sound/mips/hal2.c 797 */;
	struct snd_device_ops cocci_id/* sound/mips/hal2.c 758 */;
	struct snd_hal2 {
		struct snd_card *card;
		struct hal2_ctl_regs *ctl_regs;
		struct hal2_aes_regs *aes_regs;
		struct hal2_vol_regs *vol_regs;
		struct hal2_syn_regs *syn_regs;
		struct hal2_codec dac;
		struct hal2_codec adc;
	} cocci_id/* sound/mips/hal2.c 75 */;
	struct snd_device *cocci_id/* sound/mips/hal2.c 749 */;
	struct snd_pcm *cocci_id/* sound/mips/hal2.c 727 */;
	const struct snd_pcm_ops cocci_id/* sound/mips/hal2.c 713 */;
	struct snd_pcm_substream *cocci_id/* sound/mips/hal2.c 691 */;
	unsigned char *cocci_id/* sound/mips/hal2.c 685 */;
	struct snd_pcm_indirect *cocci_id/* sound/mips/hal2.c 682 */;
	size_t cocci_id/* sound/mips/hal2.c 682 */;
	void cocci_id/* sound/mips/hal2.c 681 */;
	snd_pcm_uframes_t cocci_id/* sound/mips/hal2.c 671 */;
	struct snd_pcm_runtime *cocci_id/* sound/mips/hal2.c 615 */;
	struct hal2_codec {
		struct snd_pcm_indirect pcm_indirect;
		struct snd_pcm_substream *substream;
		unsigned char *buffer;
		dma_addr_t buffer_dma;
		struct hal2_desc *desc;
		dma_addr_t desc_dma;
		int desc_count;
		struct hal2_pbus pbus;
		int voices;
		unsigned int sample_rate;
		unsigned int master;
		unsigned short mod;
		unsigned short inc;
	} cocci_id/* sound/mips/hal2.c 55 */;
	struct snd_pcm_hw_params *cocci_id/* sound/mips/hal2.c 509 */;
	struct hal2_desc {
		struct hpc_dma_desc desc;
		u32 pad;
	} cocci_id/* sound/mips/hal2.c 50 */;
	const struct snd_pcm_hardware cocci_id/* sound/mips/hal2.c 489 */;
	struct hal2_desc cocci_id/* sound/mips/hal2.c 456 */;
	dma_addr_t cocci_id/* sound/mips/hal2.c 448 */;
	struct hal2_desc *cocci_id/* sound/mips/hal2.c 447 */;
	struct device *cocci_id/* sound/mips/hal2.c 446 */;
	struct snd_hal2 *cocci_id/* sound/mips/hal2.c 444 */;
	struct hal2_codec *cocci_id/* sound/mips/hal2.c 444 */;
	int cocci_id/* sound/mips/hal2.c 444 */;
	struct hal2_pbus {
		struct hpc3_pbus_dmacregs *pbus;
		int pbusnr;
		unsigned int ctrl;
	} cocci_id/* sound/mips/hal2.c 44 */;
	struct hal2_pbus *cocci_id/* sound/mips/hal2.c 391 */;
	unsigned short cocci_id/* sound/mips/hal2.c 316 */;
	unsigned int cocci_id/* sound/mips/hal2.c 314 */;
	char *cocci_id/* sound/mips/hal2.c 30 */;
	irqreturn_t cocci_id/* sound/mips/hal2.c 297 */;
	void *cocci_id/* sound/mips/hal2.c 297 */;
	const struct snd_kcontrol_new cocci_id/* sound/mips/hal2.c 254 */;
	u32 cocci_id/* sound/mips/hal2.c 190 */;
	struct snd_ctl_elem_value *cocci_id/* sound/mips/hal2.c 187 */;
	struct snd_kcontrol *cocci_id/* sound/mips/hal2.c 186 */;
	struct snd_ctl_elem_info *cocci_id/* sound/mips/hal2.c 170 */;
	u16 cocci_id/* sound/mips/hal2.c 155 */;
}
