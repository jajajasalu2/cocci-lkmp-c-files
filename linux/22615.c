cocci_test_suite() {
	const struct snd_pcm_hardware cocci_id/* sound/usb/hiface/pcm.c 72 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/usb/hiface/pcm.c 66 */;
	const unsigned int cocci_id/* sound/usb/hiface/pcm.c 64 */[];
	u8 cocci_id/* sound/usb/hiface/pcm.c 578 */;
	struct snd_pcm *cocci_id/* sound/usb/hiface/pcm.c 570 */;
	struct pcm_runtime *cocci_id/* sound/usb/hiface/pcm.c 547 */;
	struct hiface_chip *cocci_id/* sound/usb/hiface/pcm.c 545 */;
	void cocci_id/* sound/usb/hiface/pcm.c 545 */;
	void *cocci_id/* sound/usb/hiface/pcm.c 536 */;
	void (*cocci_id/* sound/usb/hiface/pcm.c 526 */)(struct urb *);
	unsigned int cocci_id/* sound/usb/hiface/pcm.c 525 */;
	struct pcm_urb *cocci_id/* sound/usb/hiface/pcm.c 523 */;
	const struct snd_pcm_ops cocci_id/* sound/usb/hiface/pcm.c 512 */;
	snd_pcm_uframes_t cocci_id/* sound/usb/hiface/pcm.c 496 */;
	struct pcm_runtime {
		struct hiface_chip *chip;
		struct snd_pcm *instance;
		struct pcm_substream playback;
		bool panic;
		struct pcm_urb out_urbs[PCM_N_URBS];
		struct mutex stream_mutex;
		u8 stream_state;
		u8 extra_freq;
		wait_queue_head_t stream_wait_queue;
		bool stream_wait_cond;
	} cocci_id/* sound/usb/hiface/pcm.c 48 */;
	struct snd_pcm_hw_params *cocci_id/* sound/usb/hiface/pcm.c 419 */;
	enum{STREAM_DISABLED, STREAM_STARTING, STREAM_RUNNING, STREAM_STOPPING,} cocci_id/* sound/usb/hiface/pcm.c 41 */;
	unsigned long cocci_id/* sound/usb/hiface/pcm.c 398 */;
	struct pcm_substream *cocci_id/* sound/usb/hiface/pcm.c 397 */;
	struct snd_pcm_substream *cocci_id/* sound/usb/hiface/pcm.c 394 */;
	int cocci_id/* sound/usb/hiface/pcm.c 394 */;
	struct snd_pcm_runtime *cocci_id/* sound/usb/hiface/pcm.c 355 */;
	struct pcm_substream {
		spinlock_t lock;
		struct snd_pcm_substream *instance;
		bool active;
		snd_pcm_uframes_t dma_off;
		snd_pcm_uframes_t period_off;
	} cocci_id/* sound/usb/hiface/pcm.c 32 */;
	bool cocci_id/* sound/usb/hiface/pcm.c 309 */;
	struct urb *cocci_id/* sound/usb/hiface/pcm.c 304 */;
	u8 *cocci_id/* sound/usb/hiface/pcm.c 261 */;
	u32 *cocci_id/* sound/usb/hiface/pcm.c 252 */;
	struct pcm_urb {
		struct hiface_chip *chip;
		struct urb instance;
		struct usb_anchor submitted;
		u8 *buffer;
	} cocci_id/* sound/usb/hiface/pcm.c 24 */;
	struct device *cocci_id/* sound/usb/hiface/pcm.c 175 */;
	u16 cocci_id/* sound/usb/hiface/pcm.c 115 */;
	struct usb_device *cocci_id/* sound/usb/hiface/pcm.c 114 */;
}
