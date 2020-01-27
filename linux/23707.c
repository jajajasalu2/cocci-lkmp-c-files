cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 74 */;
	struct fiq_handler cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 68 */;
	struct pt_regs cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 49 */;
	struct imx_pcm_runtime_data cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 47 */;
	struct imx_pcm_runtime_data *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 46 */;
	enum hrtimer_restart cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 44 */;
	struct hrtimer *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 44 */;
	struct platform_device *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 387 */;
	void cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 387 */;
	unsigned long cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 367 */;
	struct imx_pcm_fiq_params *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 352 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 338 */;
	struct imx_pcm_runtime_data {
		unsigned int period;
		int periods;
		unsigned long offset;
		struct hrtimer hrt;
		int poll_time_ns;
		struct snd_pcm_substream *substream;
		atomic_t playing;
		atomic_t capturing;
	} cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 33 */;
	struct snd_dma_buffer *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 313 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 312 */;
	struct snd_pcm *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 310 */;
	struct snd_card *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 252 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 250 */;
	size_t cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 237 */;
	struct vm_area_struct *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 218 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 206 */;
	struct snd_soc_component *cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 203 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 157 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 147 */;
	int cocci_id/* sound/soc/fsl/imx-pcm-fiq.c 107 */;
}
