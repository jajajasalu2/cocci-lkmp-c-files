cocci_test_suite() {
	unsigned int cocci_id/* sound/pci/riptide/riptide.c 976 */[2];
	unsigned int *cocci_id/* sound/pci/riptide/riptide.c 973 */;
	unsigned char cocci_id/* sound/pci/riptide/riptide.c 943 */[E2SINK_MAX];
	unsigned short cocci_id/* sound/pci/riptide/riptide.c 925 */;
	struct cmdport *cocci_id/* sound/pci/riptide/riptide.c 831 */;
	struct riptideport *cocci_id/* sound/pci/riptide/riptide.c 830 */;
	union cmdret *cocci_id/* sound/pci/riptide/riptide.c 824 */;
	unsigned char *cocci_id/* sound/pci/riptide/riptide.c 740 */;
	struct cmdif *cocci_id/* sound/pci/riptide/riptide.c 739 */;
	unsigned char cocci_id/* sound/pci/riptide/riptide.c 739 */;
	void cocci_id/* sound/pci/riptide/riptide.c 738 */;
	u32 cocci_id/* sound/pci/riptide/riptide.c 651 */;
	const unsigned char *cocci_id/* sound/pci/riptide/riptide.c 651 */;
	unsigned int cocci_id/* sound/pci/riptide/riptide.c 651 */;
	union firmware_version cocci_id/* sound/pci/riptide/riptide.c 640 */[];
	const struct lbuspath cocci_id/* sound/pci/riptide/riptide.c 633 */;
	struct lbuspath cocci_id/* sound/pci/riptide/riptide.c 616 */[];
	unsigned char cocci_id/* sound/pci/riptide/riptide.c 566 */[];
	unsigned char cocci_id/* sound/pci/riptide/riptide.c 520 */[E2SINK_MAX + 1][2];
	const struct pci_device_id cocci_id/* sound/pci/riptide/riptide.c 497 */[];
	int cocci_id/* sound/pci/riptide/riptide.c 492 */(struct cmdif *cif,
							  struct snd_riptide *chip);
	int cocci_id/* sound/pci/riptide/riptide.c 491 */(struct snd_riptide *chip);
	int cocci_id/* sound/pci/riptide/riptide.c 488 */(struct cmdif *cif,
							  unsigned char source,
							  unsigned char sink,
							  unsigned char *a,
							  unsigned char *b);
	int cocci_id/* sound/pci/riptide/riptide.c 486 */(struct cmdif *cif,
							  u32 flags, u32 cmd,
							  u32 parm,
							  union cmdret *ret);
	struct pcmhw {
		struct lbuspath paths;
		unsigned char *lbuspath;
		unsigned char source;
		unsigned char intdec[2];
		unsigned char mixer;
		unsigned char id;
		unsigned char state;
		unsigned int rate;
		unsigned int channels;
		snd_pcm_format_t format;
		struct snd_dma_buffer sgdlist;
		struct sgd *sgdbuf;
		unsigned int size;
		unsigned int pages;
		unsigned int oldpos;
		unsigned int pointer;
	} cocci_id/* sound/pci/riptide/riptide.c 465 */;
	struct sgd {
		__le32 dwNextLink;
		__le32 dwSegPtrPhys;
		__le32 dwSegLen;
		__le32 dwStat_Ctl;
	} cocci_id/* sound/pci/riptide/riptide.c 458 */;
	struct snd_riptide {
		struct snd_card *card;
		struct pci_dev *pci;
		const struct firmware *fw_entry;
		struct cmdif *cif;
		struct snd_pcm *pcm;
		struct snd_pcm *pcm_i2s;
		struct snd_rawmidi *rmidi;
		struct snd_opl3 *opl3;
		struct snd_ac97 *ac97;
		struct snd_ac97_bus *ac97_bus;
		struct snd_pcm_substream *playback_substream[PLAYBACK_SUBSTREAMS];
		struct snd_pcm_substream *capture_substream;
		int openstreams;
		int irq;
		unsigned long port;
		unsigned short mpuaddr;
		unsigned short opladdr;
#ifdef SUPPORT_JOYSTICK
		unsigned short gameaddr;
#endif
		struct resource *res_port;
		unsigned short device_id;
		union firmware_version firmware;
		spinlock_t lock;
		struct tasklet_struct riptide_tq;
		struct snd_info_entry *proc_entry;
		unsigned long received_irqs;
		unsigned long handled_irqs;
#ifdef CONFIG_PM_SLEEP
		int in_suspend;
#endif
	} cocci_id/* sound/pci/riptide/riptide.c 415 */;
	union firmware_version {
		union cmdret ret;
		struct riptide_firmware firmware;
	} cocci_id/* sound/pci/riptide/riptide.c 407 */;
	union cmdret {
		u8 retbytes[8];
		u16 retwords[4];
		u32 retlongs[2];
	} cocci_id/* sound/pci/riptide/riptide.c 401 */;
	struct riptide_firmware {
		u16 ASIC;
		u16 CODEC;
		u16 AUXDSP;
		u16 PROG;
	} cocci_id/* sound/pci/riptide/riptide.c 394 */;
	struct cmdif {
		struct riptideport *hwport;
		spinlock_t lock;
		unsigned int cmdcnt;
		unsigned int cmdtime;
		unsigned int cmdtimemax;
		unsigned int cmdtimemin;
		unsigned int errcnt;
		int is_reset;
	} cocci_id/* sound/pci/riptide/riptide.c 383 */;
	struct riptideport {
		u32 audio_control;
		u32 audio_status;
		u32 pad[2];
		struct cmdport port[2];
	} cocci_id/* sound/pci/riptide/riptide.c 376 */;
	struct cmdport {
		u32 data1;
		u32 data2;
		u32 stat;
		u32 pad[5];
	} cocci_id/* sound/pci/riptide/riptide.c 369 */;
	struct lbuspath {
		unsigned char *noconv;
		unsigned char *stereo;
		unsigned char *mono;
	} cocci_id/* sound/pci/riptide/riptide.c 363 */;
	enum{SB_CMD=0, MODEM_CMD, I2S_CMD0, I2S_CMD1, FM_CMD, MAX_CMD,} cocci_id/* sound/pci/riptide/riptide.c 361 */;
	enum RT_CHANNEL_IDS{M0TX=0, M1TX, TAMTX, HSSPKR, PDAC, DSNDTX0, DSNDTX1, DSNDTX2, DSNDTX3, DSNDTX4, DSNDTX5, DSNDTX6, DSNDTX7, WVSTRTX, COP3DTX, SPARE, M0RX, HSMIC, M1RX, CLEANRX, MICADC, PADC, COPRX1, COPRX2, CHANNEL_ID_COUNTER,} cocci_id/* sound/pci/riptide/riptide.c 354 */;
	enum LBUS_SINK{LS_SRC_INTERPOLATOR=0, LS_SRC_INTERPOLATORM, LS_SRC_DECIMATOR, LS_SRC_DECIMATORM, LS_MIXER_IN, LS_MIXER_GAIN_FUNCTION, LS_SRC_SPLITTER, LS_SRC_MERGER, LS_NONE1, LS_NONE2,} cocci_id/* sound/pci/riptide/riptide.c 348 */;
	enum E2SINK{LBUS2ARM_FIFO0=0, LBUS2ARM_FIFO1, LBUS2ARM_FIFO2, LBUS2ARM_FIFO3, LBUS2ARM_FIFO4, LBUS2ARM_FIFO5, LBUS2ARM_FIFO6, LBUS2ARM_FIFO7, INTER0_IN, INTER1_IN, INTER2_IN, INTER3_IN, INTER4_IN, INTERM0_IN, INTERM1_IN, INTERM2_IN, INTERM3_IN, INTERM4_IN, INTERM5_IN, INTERM6_IN, DECIMM0_IN, DECIMM1_IN, DECIMM2_IN, DECIMM3_IN, DECIM0_IN, SR3_4_IN, PDAC2ACLNK, MODEM0TX2ACLNK, MODEM1TX2ACLNK, HNDSPK2ACLNK, DIGITAL_MIXER_IN0, DIGITAL_MIXER_IN1, DIGITAL_MIXER_IN2, DIGITAL_MIXER_IN3, DIGITAL_MIXER_IN4, DIGITAL_MIXER_IN5, DIGITAL_MIXER_IN6, DIGITAL_MIXER_IN7, DIGITAL_MIXER_IN8, DIGITAL_MIXER_IN9, DIGITAL_MIXER_IN10, DIGITAL_MIXER_IN11, GAINFUNC0_IN, GAINFUNC1_IN, GAINFUNC2_IN, GAINFUNC3_IN, GAINFUNC4_IN, SOFTMODEMRX, SPLITTER0_IN, SPLITTER1_IN, SPLITTER2_IN, SPLITTER3_IN, MERGER0_INL, MERGER0_INR, MERGER1_INL, MERGER1_INR, MERGER2_INL, MERGER2_INR, MERGER3_INL, MERGER3_INR, E2SINK_MAX,} cocci_id/* sound/pci/riptide/riptide.c 331 */;
	enum E1SOURCE{ARM2LBUS_FIFO0=0, ARM2LBUS_FIFO1, ARM2LBUS_FIFO2, ARM2LBUS_FIFO3, ARM2LBUS_FIFO4, ARM2LBUS_FIFO5, ARM2LBUS_FIFO6, ARM2LBUS_FIFO7, ARM2LBUS_FIFO8, ARM2LBUS_FIFO9, ARM2LBUS_FIFO10, ARM2LBUS_FIFO11, ARM2LBUS_FIFO12, ARM2LBUS_FIFO13, ARM2LBUS_FIFO14, ARM2LBUS_FIFO15, INTER0_OUT, INTER1_OUT, INTER2_OUT, INTER3_OUT, INTER4_OUT, INTERM0_OUT, INTERM1_OUT, INTERM2_OUT, INTERM3_OUT, INTERM4_OUT, INTERM5_OUT, INTERM6_OUT, DECIMM0_OUT, DECIMM1_OUT, DECIMM2_OUT, DECIMM3_OUT, DECIM0_OUT, SR3_4_OUT, OPL3_SAMPLE, ASRC0, ASRC1, ACLNK2PADC, ACLNK2MODEM0RX, ACLNK2MIC, ACLNK2MODEM1RX, ACLNK2HNDMIC, DIGITAL_MIXER_OUT0, GAINFUNC0_OUT, GAINFUNC1_OUT, GAINFUNC2_OUT, GAINFUNC3_OUT, GAINFUNC4_OUT, SOFTMODEMTX, SPLITTER0_OUTL, SPLITTER0_OUTR, SPLITTER1_OUTL, SPLITTER1_OUTR, SPLITTER2_OUTL, SPLITTER2_OUTR, SPLITTER3_OUTL, SPLITTER3_OUTR, MERGER0_OUT, MERGER1_OUT, MERGER2_OUT, MERGER3_OUT, ARM2LBUS_FIFO_DIRECT, NO_OUT,} cocci_id/* sound/pci/riptide/riptide.c 314 */;
	enum CMDS{GETV=0x00, GETC, GUNS, SCID, RMEM=0x10, SMEM, WMEM, SDTM, GOTO, SSTR=0x20, PSTR, KSTR, KDMA, GPOS, SETF, GSTS, NGPOS, PSEL=0x30, PCLR, PLST, RSSV, LSEL, SSRC=0x40, SLST, RSRC, SSRB, SDGV=0x50, RDGV, DLST, SACR=0x60, RACR, ALST, TXAC, RXAC, SI2S=0x70, ARM_SETDPLL=0x72,} cocci_id/* sound/pci/riptide/riptide.c 305 */;
	enum FIRMWARE{DATA_REC=0, EXT_END_OF_FILE, EXT_SEG_ADDR_REC, EXT_GOTO_CMD_REC, EXT_LIN_ADDR_REC,} cocci_id/* sound/pci/riptide/riptide.c 300 */;
	void __exit cocci_id/* sound/pci/riptide/riptide.c 2189 */;
	int cocci_id/* sound/pci/riptide/riptide.c 2176 */;
	int __init cocci_id/* sound/pci/riptide/riptide.c 2174 */;
	struct pci_driver cocci_id/* sound/pci/riptide/riptide.c 2155 */;
	const struct pci_device_id *cocci_id/* sound/pci/riptide/riptide.c 2045 */;
	struct pci_dev *cocci_id/* sound/pci/riptide/riptide.c 2045 */;
	struct gameport *cocci_id/* sound/pci/riptide/riptide.c 1994 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/riptide/riptide.c 1969 */;
	struct snd_ac97_template cocci_id/* sound/pci/riptide/riptide.c 1967 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/riptide/riptide.c 1966 */;
	unsigned char cocci_id/* sound/pci/riptide/riptide.c 1895 */[256];
	struct snd_info_buffer *cocci_id/* sound/pci/riptide/riptide.c 1889 */;
	struct snd_info_entry *cocci_id/* sound/pci/riptide/riptide.c 1888 */;
	struct snd_riptide cocci_id/* sound/pci/riptide/riptide.c 1838 */;
	struct snd_device_ops cocci_id/* sound/pci/riptide/riptide.c 1831 */;
	struct snd_riptide **cocci_id/* sound/pci/riptide/riptide.c 1826 */;
	struct snd_device *cocci_id/* sound/pci/riptide/riptide.c 1817 */;
	struct cmdif cocci_id/* sound/pci/riptide/riptide.c 1772 */;
	struct snd_ac97 *cocci_id/* sound/pci/riptide/riptide.c 1745 */;
	irqreturn_t cocci_id/* sound/pci/riptide/riptide.c 1701 */;
	struct snd_pcm *cocci_id/* sound/pci/riptide/riptide.c 1680 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/riptide/riptide.c 1667 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/riptide/riptide.c 1646 */;
	struct pcmhw cocci_id/* sound/pci/riptide/riptide.c 1620 */;
	struct sgd cocci_id/* sound/pci/riptide/riptide.c 1554 */;
	struct snd_dma_buffer *cocci_id/* sound/pci/riptide/riptide.c 1544 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/riptide/riptide.c 1540 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/riptide/riptide.c 1342 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/riptide/riptide.c 1322 */;
	bool cocci_id/* sound/pci/riptide/riptide.c 123 */;
	union firmware_version cocci_id/* sound/pci/riptide/riptide.c 1171 */;
	struct snd_card *cocci_id/* sound/pci/riptide/riptide.c 1153 */;
	struct device *cocci_id/* sound/pci/riptide/riptide.c 1151 */;
	bool cocci_id/* sound/pci/riptide/riptide.c 111 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/riptide/riptide.c 110 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/riptide/riptide.c 109 */[SNDRV_CARDS];
	struct sgd *cocci_id/* sound/pci/riptide/riptide.c 1081 */;
	struct pcmhw *cocci_id/* sound/pci/riptide/riptide.c 1079 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/riptide/riptide.c 1078 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/riptide/riptide.c 1077 */[PLAYBACK_SUBSTREAMS + 1];
	struct snd_riptide *cocci_id/* sound/pci/riptide/riptide.c 1075 */;
	void *cocci_id/* sound/pci/riptide/riptide.c 1075 */;
	unsigned long cocci_id/* sound/pci/riptide/riptide.c 1073 */;
	union cmdret cocci_id/* sound/pci/riptide/riptide.c 1063 */;
	unsigned short *cocci_id/* sound/pci/riptide/riptide.c 1060 */;
	short cocci_id/* sound/pci/riptide/riptide.c 1060 */;
	snd_pcm_format_t cocci_id/* sound/pci/riptide/riptide.c 1006 */;
}
