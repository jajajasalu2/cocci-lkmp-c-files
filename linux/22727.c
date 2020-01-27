cocci_test_suite() {
	struct platform_driver cocci_id/* sound/mips/sgio2audio.c 945 */;
	struct platform_device *cocci_id/* sound/mips/sgio2audio.c 894 */;
	struct snd_sgio2audio **cocci_id/* sound/mips/sgio2audio.c 814 */;
	struct snd_card *cocci_id/* sound/mips/sgio2audio.c 813 */;
	struct snd_device_ops cocci_id/* sound/mips/sgio2audio.c 809 */;
	struct snd_device *cocci_id/* sound/mips/sgio2audio.c 802 */;
	struct snd_sgio2audio {
		struct snd_card *card;
		struct snd_ad1843 ad1843;
		spinlock_t ad1843_lock;
		struct snd_sgio2audio_chan channel[3];
		void *ring_base;
		dma_addr_t ring_base_dma;
	} cocci_id/* sound/mips/sgio2audio.c 80 */;
	struct {
		int idx;
		int irq;
		irqreturn_t (*isr)(int, void *);
		const char *desc;
	} cocci_id/* sound/mips/sgio2audio.c 739 */[];
	struct snd_sgio2audio_chan {
		int idx;
		struct snd_pcm_substream *substream;
		int pos;
		snd_pcm_uframes_t size;
		spinlock_t lock;
	} cocci_id/* sound/mips/sgio2audio.c 71 */;
	struct snd_pcm *cocci_id/* sound/mips/sgio2audio.c 703 */;
	const struct snd_pcm_ops cocci_id/* sound/mips/sgio2audio.c 685 */;
	snd_pcm_uframes_t cocci_id/* sound/mips/sgio2audio.c 651 */;
	struct snd_pcm_hw_params *cocci_id/* sound/mips/sgio2audio.c 583 */;
	struct snd_pcm_runtime *cocci_id/* sound/mips/sgio2audio.c 564 */;
	struct snd_pcm_substream *cocci_id/* sound/mips/sgio2audio.c 561 */;
	const struct snd_pcm_hardware cocci_id/* sound/mips/sgio2audio.c 521 */;
	struct snd_sgio2audio_chan *cocci_id/* sound/mips/sgio2audio.c 471 */;
	irqreturn_t cocci_id/* sound/mips/sgio2audio.c 469 */;
	s64 cocci_id/* sound/mips/sgio2audio.c 396 */;
	char *cocci_id/* sound/mips/sgio2audio.c 38 */;
	s16 cocci_id/* sound/mips/sgio2audio.c 379 */;
	int cocci_id/* sound/mips/sgio2audio.c 37 */;
	u64 cocci_id/* sound/mips/sgio2audio.c 353 */;
	s16 *cocci_id/* sound/mips/sgio2audio.c 352 */;
	u64 *cocci_id/* sound/mips/sgio2audio.c 351 */;
	unsigned char *cocci_id/* sound/mips/sgio2audio.c 349 */;
	unsigned int cocci_id/* sound/mips/sgio2audio.c 345 */;
	const struct snd_kcontrol_new cocci_id/* sound/mips/sgio2audio.c 276 */;
	const char *const cocci_id/* sound/mips/sgio2audio.c 190 */[3];
	struct snd_ctl_elem_value *cocci_id/* sound/mips/sgio2audio.c 158 */;
	struct snd_kcontrol *cocci_id/* sound/mips/sgio2audio.c 157 */;
	struct snd_ctl_elem_info *cocci_id/* sound/mips/sgio2audio.c 145 */;
	unsigned long cocci_id/* sound/mips/sgio2audio.c 106 */;
	struct snd_sgio2audio *cocci_id/* sound/mips/sgio2audio.c 104 */;
	void *cocci_id/* sound/mips/sgio2audio.c 102 */;
}
