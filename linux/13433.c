cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 68 */;
	u8 *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 65 */;
	void cocci_id/* drivers/media/usb/go7007/snd-go7007.c 65 */;
	const struct snd_pcm_hardware cocci_id/* drivers/media/usb/go7007/snd-go7007.c 47 */;
	struct go7007_snd {
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_pcm_substream *substream;
		spinlock_t lock;
		int w_idx;
		int hw_ptr;
		int avail;
		int capturing;
	} cocci_id/* drivers/media/usb/go7007/snd-go7007.c 36 */;
	bool cocci_id/* drivers/media/usb/go7007/snd-go7007.c 31 */;
	bool cocci_id/* drivers/media/usb/go7007/snd-go7007.c 27 */[SNDRV_CARDS];
	char *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 26 */[SNDRV_CARDS];
	int cocci_id/* drivers/media/usb/go7007/snd-go7007.c 25 */[SNDRV_CARDS];
	struct go7007_snd cocci_id/* drivers/media/usb/go7007/snd-go7007.c 231 */;
	struct snd_device_ops cocci_id/* drivers/media/usb/go7007/snd-go7007.c 215 */;
	struct snd_device *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 206 */;
	const struct snd_pcm_ops cocci_id/* drivers/media/usb/go7007/snd-go7007.c 194 */;
	struct page *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 188 */;
	snd_pcm_uframes_t cocci_id/* drivers/media/usb/go7007/snd-go7007.c 180 */;
	struct go7007_snd *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 149 */;
	struct go7007 *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 148 */;
	struct snd_pcm_substream *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 146 */;
	int cocci_id/* drivers/media/usb/go7007/snd-go7007.c 146 */;
	unsigned long cocci_id/* drivers/media/usb/go7007/snd-go7007.c 132 */;
	unsigned int cocci_id/* drivers/media/usb/go7007/snd-go7007.c 103 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/media/usb/go7007/snd-go7007.c 100 */;
}
