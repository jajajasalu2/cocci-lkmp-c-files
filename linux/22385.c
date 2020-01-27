cocci_test_suite() {
	const u32 cocci_id/* sound/pci/sis7019.c 996 */[3];
	struct snd_ac97 *cocci_id/* sound/pci/sis7019.c 994 */;
	unsigned short cocci_id/* sound/pci/sis7019.c 994 */;
	const u16 cocci_id/* sound/pci/sis7019.c 921 */[3];
	u16 cocci_id/* sound/pci/sis7019.c 918 */;
	unsigned long cocci_id/* sound/pci/sis7019.c 916 */;
	u32 cocci_id/* sound/pci/sis7019.c 914 */;
	struct snd_pcm *cocci_id/* sound/pci/sis7019.c 887 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/sis7019.c 874 */;
	struct voice {
		u16 flags;
#define VOICE_IN_USE 1
#define VOICE_CAPTURE 2
#define VOICE_SSO_TIMING 4
#define VOICE_SYNC_TIMING 8
		u16 sync_cso;
		u16 period_size;
		u16 buffer_size;
		u16 sync_period_size;
		u16 sync_buffer_size;
		u32 sso;
		u32 vperiod;
		struct snd_pcm_substream *substream;
		struct voice *timing;
		void __iomem *ctrl_base;
		void __iomem *wave_base;
		void __iomem *sync_base;
		int num;
	} cocci_id/* sound/pci/sis7019.c 69 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/sis7019.c 649 */;
	u32 cocci_id/* sound/pci/sis7019.c 589 */[2];
	unsigned int cocci_id/* sound/pci/sis7019.c 441 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/sis7019.c 439 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/sis7019.c 436 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/sis7019.c 435 */;
	const struct pci_device_id cocci_id/* sound/pci/sis7019.c 43 */[];
	int cocci_id/* sound/pci/sis7019.c 408 */;
	struct voice *cocci_id/* sound/pci/sis7019.c 404 */;
	struct sis7019 *cocci_id/* sound/pci/sis7019.c 404 */;
	void cocci_id/* sound/pci/sis7019.c 370 */;
	bool cocci_id/* sound/pci/sis7019.c 31 */;
	char *cocci_id/* sound/pci/sis7019.c 30 */;
	irqreturn_t cocci_id/* sound/pci/sis7019.c 297 */;
	void *cocci_id/* sound/pci/sis7019.c 297 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/sis7019.c 171 */;
	struct pci_driver cocci_id/* sound/pci/sis7019.c 1458 */;
	const struct pci_device_id *cocci_id/* sound/pci/sis7019.c 1392 */;
	struct snd_device_ops cocci_id/* sound/pci/sis7019.c 1306 */;
	struct pci_dev *cocci_id/* sound/pci/sis7019.c 1302 */;
	struct snd_card *cocci_id/* sound/pci/sis7019.c 1301 */;
	struct device *cocci_id/* sound/pci/sis7019.c 1230 */;
	void __iomem *cocci_id/* sound/pci/sis7019.c 1072 */;
	struct snd_device *cocci_id/* sound/pci/sis7019.c 1063 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/sis7019.c 1009 */;
	struct snd_ac97_template cocci_id/* sound/pci/sis7019.c 1008 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/sis7019.c 1007 */;
	struct sis7019 {
		unsigned long ioport;
		void __iomem *ioaddr;
		int irq;
		int codecs_present;
		struct pci_dev *pci;
		struct snd_pcm *pcm;
		struct snd_card *card;
		struct snd_ac97 *ac97[3];
		struct mutex ac97_mutex;
		spinlock_t voice_lock;
		struct voice voices[64];
		struct voice capture_voice;
		void *suspend_state[SIS_SUSPEND_PAGES];
		int silence_users;
		dma_addr_t silence_dma_addr;
	} cocci_id/* sound/pci/sis7019.c 100 */;
}
