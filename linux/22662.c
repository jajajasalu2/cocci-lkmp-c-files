cocci_test_suite() {
	struct snd_timer_hardware cocci_id/* sound/sparc/cs4231.c 872 */;
	struct snd_cs4231 {
		spinlock_t lock;
		void __iomem *port;
		struct cs4231_dma_control p_dma;
		struct cs4231_dma_control c_dma;
		u32 flags;
#define CS4231_FLAG_EBUS 0x00000001
#define CS4231_FLAG_PLAYBACK 0x00000002
#define CS4231_FLAG_CAPTURE 0x00000004
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_pcm_substream *playback_substream;
		unsigned int p_periods_sent;
		struct snd_pcm_substream *capture_substream;
		unsigned int c_periods_sent;
		struct snd_timer *timer;
		unsigned short mode;
#define CS4231_MODE_NONE 0x0000
#define CS4231_MODE_PLAY 0x0001
#define CS4231_MODE_RECORD 0x0002
#define CS4231_MODE_TIMER 0x0004
#define CS4231_MODE_OPEN (CS4231_MODE_PLAY | CS4231_MODE_RECORD | CS4231_MODE_TIMER)
			unsigned char image[32];
		int mce_bit;
		int calibrate_mute;
		struct mutex mce_mutex;
		struct mutex open_mutex;
		struct platform_device *op;
		unsigned int irq[2];
		unsigned int regs_size;
		struct snd_cs4231 *next;
	} cocci_id/* sound/sparc/cs4231.c 81 */;
	struct cs4231_dma_control {
		void (*prepare)(struct cs4231_dma_control *dma_cont, int dir);
		void (*enable)(struct cs4231_dma_control *dma_cont, int on);
		int (*request)(struct cs4231_dma_control *dma_cont, dma_addr_t bus_addr, size_t len);
		unsigned int (*address)(struct cs4231_dma_control *dma_cont);
#ifdef EBUS_SUPPORT
		struct ebus_dma_info ebus_info;
#endif
#ifdef SBUS_SUPPORT
		struct sbus_dma_info sbus_info;
#endif
	} cocci_id/* sound/sparc/cs4231.c 66 */;
	unsigned char cocci_id/* sound/sparc/cs4231.c 628 */;
	struct snd_pcm_hw_params *cocci_id/* sound/sparc/cs4231.c 627 */;
	struct sbus_dma_info {
		spinlock_t lock;
		int dir;
		void __iomem *regs;
	} cocci_id/* sound/sparc/cs4231.c 58 */;
	bool cocci_id/* sound/sparc/cs4231.c 50 */;
	struct snd_pcm_substream *cocci_id/* sound/sparc/cs4231.c 443 */;
	bool cocci_id/* sound/sparc/cs4231.c 44 */[SNDRV_CARDS];
	struct snd_pcm_runtime *cocci_id/* sound/sparc/cs4231.c 427 */;
	unsigned int *cocci_id/* sound/sparc/cs4231.c 425 */;
	char *cocci_id/* sound/sparc/cs4231.c 42 */[SNDRV_CARDS];
	int cocci_id/* sound/sparc/cs4231.c 41 */[SNDRV_CARDS];
	void cocci_id/* sound/sparc/cs4231.c 265 */;
	u8 cocci_id/* sound/sparc/cs4231.c 257 */;
	struct snd_cs4231 *cocci_id/* sound/sparc/cs4231.c 257 */;
	void __iomem *cocci_id/* sound/sparc/cs4231.c 257 */;
	unsigned char cocci_id/* sound/sparc/cs4231.c 221 */[32];
	struct platform_driver cocci_id/* sound/sparc/cs4231.c 2108 */;
	const struct of_device_id cocci_id/* sound/sparc/cs4231.c 2095 */[];
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/sparc/cs4231.c 209 */;
	const unsigned int cocci_id/* sound/sparc/cs4231.c 204 */[14];
	struct snd_device_ops cocci_id/* sound/sparc/cs4231.c 1955 */;
	struct snd_device *cocci_id/* sound/sparc/cs4231.c 1948 */;
	struct cs4231_dma_control *cocci_id/* sound/sparc/cs4231.c 1920 */;
	unsigned int cocci_id/* sound/sparc/cs4231.c 1920 */;
	int cocci_id/* sound/sparc/cs4231.c 1910 */;
	dma_addr_t cocci_id/* sound/sparc/cs4231.c 1905 */;
	size_t cocci_id/* sound/sparc/cs4231.c 1905 */;
	void *cocci_id/* sound/sparc/cs4231.c 1893 */;
	struct ebus_dma_info *cocci_id/* sound/sparc/cs4231.c 1892 */;
	unsigned char cocci_id/* sound/sparc/cs4231.c 187 */[14];
	unsigned long long cocci_id/* sound/sparc/cs4231.c 1869 */;
	struct resource *cocci_id/* sound/sparc/cs4231.c 1858 */;
	struct sbus_dma_info *cocci_id/* sound/sparc/cs4231.c 1760 */;
	u32 cocci_id/* sound/sparc/cs4231.c 1726 */;
	unsigned long cocci_id/* sound/sparc/cs4231.c 1725 */;
	irqreturn_t cocci_id/* sound/sparc/cs4231.c 1622 */;
	struct snd_cs4231 cocci_id/* sound/sparc/cs4231.c 1575 */;
	struct snd_card *cocci_id/* sound/sparc/cs4231.c 1560 */;
	struct snd_card **cocci_id/* sound/sparc/cs4231.c 1558 */;
	struct platform_device *cocci_id/* sound/sparc/cs4231.c 1557 */;
	struct snd_kcontrol_new cocci_id/* sound/sparc/cs4231.c 1497 */[];
	unsigned short cocci_id/* sound/sparc/cs4231.c 1458 */;
	struct snd_ctl_elem_value *cocci_id/* sound/sparc/cs4231.c 1416 */;
	struct snd_kcontrol *cocci_id/* sound/sparc/cs4231.c 1415 */;
	struct snd_ctl_elem_info *cocci_id/* sound/sparc/cs4231.c 1402 */;
	const char *constcocci_id/* sound/sparc/cs4231.c 1285 */[4];
	struct snd_timer_id cocci_id/* sound/sparc/cs4231.c 1258 */;
	struct snd_timer *cocci_id/* sound/sparc/cs4231.c 1257 */;
	struct snd_pcm *cocci_id/* sound/sparc/cs4231.c 1228 */;
	const struct snd_pcm_ops cocci_id/* sound/sparc/cs4231.c 1214 */;
	const struct snd_pcm_hardware cocci_id/* sound/sparc/cs4231.c 1117 */;
	unsigned char *cocci_id/* sound/sparc/cs4231.c 1036 */;
	snd_pcm_uframes_t cocci_id/* sound/sparc/cs4231.c 1014 */;
}
