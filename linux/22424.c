cocci_test_suite() {
	enum{ICH_REG_##name##_BDBAR=base + 0x0, ICH_REG_##name##_CIV=base + 0x04, ICH_REG_##name##_LVI=base + 0x05, ICH_REG_##name##_SR=base + 0x06, ICH_REG_##name##_PICB=base + 0x08, ICH_REG_##name##_PIV=base + 0x0a, ICH_REG_##name##_CR=base + 0x0b,} cocci_id/* sound/pci/intel8x0.c 97 */;
	enum{DEVICE_INTEL, DEVICE_INTEL_ICH4, DEVICE_SIS, DEVICE_ALI, DEVICE_NFORCE,} cocci_id/* sound/pci/intel8x0.c 92 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/intel8x0.c 897 */;
	int cocci_id/* sound/pci/intel8x0.c 846 */[];
	unsigned char cocci_id/* sound/pci/intel8x0.c 807 */;
	irqreturn_t cocci_id/* sound/pci/intel8x0.c 766 */;
	void *cocci_id/* sound/pci/intel8x0.c 766 */;
	struct snd_ac97 *cocci_id/* sound/pci/intel8x0.c 620 */;
	unsigned short cocci_id/* sound/pci/intel8x0.c 620 */;
	bool cocci_id/* sound/pci/intel8x0.c 58 */;
	char *cocci_id/* sound/pci/intel8x0.c 57 */;
	int cocci_id/* sound/pci/intel8x0.c 56 */;
	u32 cocci_id/* sound/pci/intel8x0.c 475 */;
	u16 cocci_id/* sound/pci/intel8x0.c 475 */;
	u8 cocci_id/* sound/pci/intel8x0.c 441 */;
	const struct pci_device_id cocci_id/* sound/pci/intel8x0.c 408 */[];
	struct intel8x0 {
		unsigned int device_type;
		int irq;
		void __iomem *addr;
		void __iomem *bmaddr;
		struct pci_dev *pci;
		struct snd_card *card;
		int pcm_devs;
		struct snd_pcm *pcm[6];
		struct ichdev ichd[6];
		unsigned multi4:1,multi6:1,multi8:1,dra:1,smp20bit:1;
		unsigned in_ac97_init:1,in_sdin_init:1;
		unsigned in_measurement:1;
		unsigned fix_nocache:1;
		unsigned buggy_irq:1;
		unsigned xbox:1;
		unsigned buggy_semaphore:1;
		unsigned inside_vm:1;
		int spdif_idx;
		unsigned int sdm_saved;
		struct snd_ac97_bus *ac97_bus;
		struct snd_ac97 *ac97[3];
		unsigned int ac97_sdin[3];
		unsigned int max_codecs,ncodecs;
		unsigned int *codec_bit;
		unsigned int codec_isr_bits;
		unsigned int codec_ready_bits;
		spinlock_t reg_lock;
		u32 bdbars_count;
		struct snd_dma_buffer bdbars;
		u32 int_sta_reg;
		u32 int_sta_mask;
	} cocci_id/* sound/pci/intel8x0.c 360 */;
	struct ichdev {
		unsigned int ichd;
		unsigned long reg_offset;
		__le32 *bdbar;
		unsigned int bdbar_addr;
		struct snd_pcm_substream *substream;
		unsigned int physbuf;
		unsigned int size;
		unsigned int fragsize;
		unsigned int fragsize1;
		unsigned int position;
		unsigned int pos_shift;
		unsigned int last_pos;
		int frags;
		int lvi;
		int lvi_frag;
		int civ;
		int ack;
		int ack_reload;
		unsigned int ack_bit;
		unsigned int roff_sr;
		unsigned int roff_picb;
		unsigned int int_sta_mask;
		unsigned int ali_slot;
		struct ac97_pcm *pcm;
		int pcm_open_flag;
		unsigned int suspended:1;
	} cocci_id/* sound/pci/intel8x0.c 331 */;
	struct pci_driver cocci_id/* sound/pci/intel8x0.c 3262 */;
	enum{ALID_PCMIN, ALID_PCMOUT, ALID_MIC, ALID_AC97SPDIFOUT, ALID_SPDIFIN, ALID_SPDIFOUT, ALID_LAST=ALID_SPDIFOUT,} cocci_id/* sound/pci/intel8x0.c 319 */;
	struct shortname_table *cocci_id/* sound/pci/intel8x0.c 3180 */;
	const struct pci_device_id *cocci_id/* sound/pci/intel8x0.c 3175 */;
	const struct snd_pci_quirk *cocci_id/* sound/pci/intel8x0.c 3157 */;
	struct pci_dev *cocci_id/* sound/pci/intel8x0.c 3155 */;
	struct shortname_table {
		unsigned int id;
		const char *s;
	} cocci_id/* sound/pci/intel8x0.c 3120 */[];
	enum{NVD_PCMIN, NVD_PCMOUT, NVD_MIC, NVD_SPBAR, NVD_LAST=NVD_SPBAR,} cocci_id/* sound/pci/intel8x0.c 312 */;
	__le32 *cocci_id/* sound/pci/intel8x0.c 3062 */;
	enum{ICHD_PCMIN, ICHD_PCMOUT, ICHD_MIC, ICHD_MIC2, ICHD_PCM2IN, ICHD_SPBAR, ICHD_LAST=ICHD_SPBAR,} cocci_id/* sound/pci/intel8x0.c 303 */;
	struct ich_reg_info *cocci_id/* sound/pci/intel8x0.c 2947 */;
	struct ich_reg_info cocci_id/* sound/pci/intel8x0.c 2933 */[4];
	struct ich_reg_info cocci_id/* sound/pci/intel8x0.c 2925 */[6];
	unsigned int cocci_id/* sound/pci/intel8x0.c 2918 */[];
	struct snd_device_ops cocci_id/* sound/pci/intel8x0.c 2914 */;
	struct intel8x0 **cocci_id/* sound/pci/intel8x0.c 2907 */;
	unsigned int cocci_id/* sound/pci/intel8x0.c 2866 */[3];
	struct ich_reg_info {
		unsigned int int_sta_mask;
		unsigned int offset;
	} cocci_id/* sound/pci/intel8x0.c 2861 */;
	struct snd_device *cocci_id/* sound/pci/intel8x0.c 2855 */;
	const char *cocci_id/* sound/pci/intel8x0.c 2832 */[3];
	struct snd_info_buffer *cocci_id/* sound/pci/intel8x0.c 2816 */;
	struct snd_info_entry *cocci_id/* sound/pci/intel8x0.c 2815 */;
	ktime_t cocci_id/* sound/pci/intel8x0.c 2678 */;
	unsigned long cocci_id/* sound/pci/intel8x0.c 2675 */;
	struct ichdev *cocci_id/* sound/pci/intel8x0.c 2674 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/intel8x0.c 2673 */;
	struct snd_card *cocci_id/* sound/pci/intel8x0.c 2617 */;
	struct device *cocci_id/* sound/pci/intel8x0.c 2614 */;
	struct snd_pci_quirk cocci_id/* sound/pci/intel8x0.c 2346 */[];
	struct intel8x0 *cocci_id/* sound/pci/intel8x0.c 2333 */;
	void cocci_id/* sound/pci/intel8x0.c 2333 */;
	struct ac97_pcm *cocci_id/* sound/pci/intel8x0.c 2273 */;
	enum{ICH_REG_ALI_SCR=0x00, ICH_REG_ALI_SSR=0x04, ICH_REG_ALI_DMACR=0x08, ICH_REG_ALI_FIFOCR1=0x0c, ICH_REG_ALI_INTERFACECR=0x10, ICH_REG_ALI_INTERRUPTCR=0x14, ICH_REG_ALI_INTERRUPTSR=0x18, ICH_REG_ALI_FIFOCR2=0x1c, ICH_REG_ALI_CPR=0x20, ICH_REG_ALI_CPR_ADDR=0x22, ICH_REG_ALI_SPR=0x24, ICH_REG_ALI_SPR_ADDR=0x26, ICH_REG_ALI_FIFOCR3=0x2c, ICH_REG_ALI_TTSR=0x30, ICH_REG_ALI_RTSR=0x34, ICH_REG_ALI_CSPSR=0x38, ICH_REG_ALI_CAS=0x3c, ICH_REG_ALI_HWVOL=0xf0, ICH_REG_ALI_I2SCR=0xf4, ICH_REG_ALI_SPDIFCSR=0xf8, ICH_REG_ALI_SPDIFICS=0xfc,} cocci_id/* sound/pci/intel8x0.c 224 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/intel8x0.c 2157 */;
	struct snd_ac97_bus_ops *cocci_id/* sound/pci/intel8x0.c 2156 */;
	struct snd_ac97_template cocci_id/* sound/pci/intel8x0.c 2152 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/intel8x0.c 2151 */;
	const char *cocci_id/* sound/pci/intel8x0.c 2149 */;
	const struct ac97_quirk cocci_id/* sound/pci/intel8x0.c 1741 */[];
	const struct ac97_pcm cocci_id/* sound/pci/intel8x0.c 1671 */[];
	struct ich_pcm_table *cocci_id/* sound/pci/intel8x0.c 1611 */;
	struct ich_pcm_table cocci_id/* sound/pci/intel8x0.c 1576 */[];
	struct snd_pcm_chmap *cocci_id/* sound/pci/intel8x0.c 1496 */;
	char cocci_id/* sound/pci/intel8x0.c 1465 */[32];
	struct snd_pcm *cocci_id/* sound/pci/intel8x0.c 1463 */;
	struct ich_pcm_table {
		char *suffix;
		const struct snd_pcm_ops *playback_ops;
		const struct snd_pcm_ops *capture_ops;
		size_t prealloc_size;
		size_t prealloc_max_size;
		int ac97_idx;
	} cocci_id/* sound/pci/intel8x0.c 1448 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/intel8x0.c 1413 */;
	unsigned int cocci_id/* sound/pci/intel8x0.c 1270 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/intel8x0.c 1116 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/intel8x0.c 1087 */;
	const unsigned int cocci_id/* sound/pci/intel8x0.c 1083 */[];
	const struct snd_pcm_hardware cocci_id/* sound/pci/intel8x0.c 1062 */;
	size_t cocci_id/* sound/pci/intel8x0.c 1012 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/intel8x0.c 1008 */;
}