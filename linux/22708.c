cocci_test_suite() {
	irqreturn_t cocci_id/* sound/drivers/ml403-ac97cr.c 770 */;
	const struct snd_pcm_ops cocci_id/* sound/drivers/ml403-ac97cr.c 759 */;
	struct snd_ml403_ac97cr *cocci_id/* sound/drivers/ml403-ac97cr.c 739 */;
	struct snd_pcm_substream *cocci_id/* sound/drivers/ml403-ac97cr.c 737 */;
	struct snd_pcm_runtime *cocci_id/* sound/drivers/ml403-ac97cr.c 711 */;
	struct snd_pcm_hw_params *cocci_id/* sound/drivers/ml403-ac97cr.c 681 */;
	bool cocci_id/* sound/drivers/ml403-ac97cr.c 68 */;
	struct snd_pcm_indirect2 cocci_id/* sound/drivers/ml403-ac97cr.c 660 */;
	bool cocci_id/* sound/drivers/ml403-ac97cr.c 62 */[SNDRV_CARDS];
	char *cocci_id/* sound/drivers/ml403-ac97cr.c 61 */[SNDRV_CARDS];
	int cocci_id/* sound/drivers/ml403-ac97cr.c 60 */[SNDRV_CARDS];
	snd_pcm_uframes_t cocci_id/* sound/drivers/ml403-ac97cr.c 509 */;
	u32 cocci_id/* sound/drivers/ml403-ac97cr.c 487 */;
	u16 *cocci_id/* sound/drivers/ml403-ac97cr.c 485 */;
	struct snd_pcm_indirect2 *cocci_id/* sound/drivers/ml403-ac97cr.c 482 */;
	size_t cocci_id/* sound/drivers/ml403-ac97cr.c 480 */;
	volatile u32 cocci_id/* sound/drivers/ml403-ac97cr.c 465 */;
	const struct snd_pcm_hardware cocci_id/* sound/drivers/ml403-ac97cr.c 381 */;
	struct snd_ml403_ac97cr {
		spinlock_t reg_lock;
		struct mutex cdc_mutex;
		int irq;
		int enable_irq;
		int capture_irq;
		int enable_capture_irq;
		struct resource *res_port;
		void *port;
		struct snd_ac97 *ac97;
		int ac97_fake;
#ifdef CODEC_STAT
		int ac97_read;
		int ac97_write;
#endif
		struct platform_device *pfdev;
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_pcm_substream *playback_substream;
		struct snd_pcm_substream *capture_substream;
		struct snd_pcm_indirect2 ind_rec;
		struct snd_pcm_indirect2 capture_ind2_rec;
	} cocci_id/* sound/drivers/ml403-ac97cr.c 328 */;
	struct snd_ac97 *cocci_id/* sound/drivers/ml403-ac97cr.c 268 */;
	int cocci_id/* sound/drivers/ml403-ac97cr.c 262 */;
	void cocci_id/* sound/drivers/ml403-ac97cr.c 260 */;
	struct lm4550_reg cocci_id/* sound/drivers/ml403-ac97cr.c 159 */[64];
	struct lm4550_reg {
		u16 value;
		u16 flag;
		u16 wmask;
		u16 def;
	} cocci_id/* sound/drivers/ml403-ac97cr.c 152 */;
	struct platform_driver cocci_id/* sound/drivers/ml403-ac97cr.c 1313 */;
	struct snd_pcm *cocci_id/* sound/drivers/ml403-ac97cr.c 1228 */;
	struct snd_ac97_bus_ops cocci_id/* sound/drivers/ml403-ac97cr.c 1198 */;
	struct snd_ac97_template cocci_id/* sound/drivers/ml403-ac97cr.c 1196 */;
	struct snd_ac97_bus *cocci_id/* sound/drivers/ml403-ac97cr.c 1195 */;
	void *cocci_id/* sound/drivers/ml403-ac97cr.c 1142 */;
	unsigned int cocci_id/* sound/drivers/ml403-ac97cr.c 1138 */;
	struct resource *cocci_id/* sound/drivers/ml403-ac97cr.c 1105 */;
	struct snd_device_ops cocci_id/* sound/drivers/ml403-ac97cr.c 1102 */;
	struct snd_ml403_ac97cr **cocci_id/* sound/drivers/ml403-ac97cr.c 1098 */;
	struct snd_card *cocci_id/* sound/drivers/ml403-ac97cr.c 1097 */;
	struct platform_device *cocci_id/* sound/drivers/ml403-ac97cr.c 1097 */;
	struct snd_device *cocci_id/* sound/drivers/ml403-ac97cr.c 1089 */;
	unsigned long cocci_id/* sound/drivers/ml403-ac97cr.c 1055 */;
}
