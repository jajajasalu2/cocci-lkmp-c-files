cocci_test_suite() {
	struct snd_card *cocci_id/* sound/pci/als4000.c 990 */;
	struct device *cocci_id/* sound/pci/als4000.c 988 */;
	struct snd_card_als4000 {
		unsigned long iobase;
		struct pci_dev *pci;
		struct snd_sb *chip;
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
	} cocci_id/* sound/pci/als4000.c 95 */;
	bool cocci_id/* sound/pci/als4000.c 88 */;
	unsigned short cocci_id/* sound/pci/als4000.c 846 */;
	struct snd_opl3 *cocci_id/* sound/pci/als4000.c 845 */;
	const struct pci_device_id *cocci_id/* sound/pci/als4000.c 838 */;
	struct pci_dev *cocci_id/* sound/pci/als4000.c 837 */;
	bool cocci_id/* sound/pci/als4000.c 79 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/als4000.c 78 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/als4000.c 77 */[SNDRV_CARDS];
	struct resource *cocci_id/* sound/pci/als4000.c 763 */;
	struct gameport *cocci_id/* sound/pci/als4000.c 762 */;
	struct snd_card_als4000 *cocci_id/* sound/pci/als4000.c 760 */;
	u8 cocci_id/* sound/pci/als4000.c 730 */;
	void cocci_id/* sound/pci/als4000.c 728 */;
	u32 cocci_id/* sound/pci/als4000.c 713 */;
	struct snd_pcm *cocci_id/* sound/pci/als4000.c 685 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/als4000.c 672 */;
	struct snd_sb *cocci_id/* sound/pci/als4000.c 652 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/als4000.c 650 */;
	int cocci_id/* sound/pci/als4000.c 650 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/als4000.c 643 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/als4000.c 600 */;
	irqreturn_t cocci_id/* sound/pci/als4000.c 529 */;
	void *cocci_id/* sound/pci/als4000.c 529 */;
	unsigned int cocci_id/* sound/pci/als4000.c 495 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/als4000.c 492 */;
	unsigned cocci_id/* sound/pci/als4000.c 374 */;
	unsigned long cocci_id/* sound/pci/als4000.c 373 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/als4000.c 358 */;
	const unsigned char cocci_id/* sound/pci/als4000.c 344 */[];
	enum{CMD_WIDTH8=0x04, CMD_SIGNED=0x10, CMD_MONO=0x80, CMD_STEREO=0xA0,} cocci_id/* sound/pci/als4000.c 343 */;
	const struct {
		unsigned char dsp_cmd,dma_on,dma_off,format;
	} cocci_id/* sound/pci/als4000.c 320 */[];
	dma_addr_t cocci_id/* sound/pci/als4000.c 284 */;
	enum als4k_cr_t cocci_id/* sound/pci/als4000.c 266 */;
	enum als4k_cr0_t{ALS4K_CR0_DMA_CONTIN_MODE_CTRL=0x02, ALS4K_CR0_DMA_90H_MODE_CTRL=0x04, ALS4K_CR0_MX80_81_REG_WRITE_ENABLE=0x80,} cocci_id/* sound/pci/als4000.c 249 */;
	enum als4k_cr_t{ALS4K_CR0_SB_CONFIG=0x00, ALS4K_CR2_MISC_CONTROL=0x02, ALS4K_CR3_CONFIGURATION=0x03, ALS4K_CR17_FIFO_STATUS=0x17, ALS4K_CR18_ESP_MAJOR_VERSION=0x18, ALS4K_CR19_ESP_MINOR_VERSION=0x19, ALS4K_CR1A_MPU401_UART_MODE_CONTROL=0x1a, ALS4K_CR1C_FIFO2_BLOCK_LENGTH_LO=0x1c, ALS4K_CR1D_FIFO2_BLOCK_LENGTH_HI=0x1d, ALS4K_CR1E_FIFO2_CONTROL=0x1e, ALS4K_CR3A_MISC_CONTROL=0x3a, ALS4K_CR3B_CRC32_BYTE0=0x3b, ALS4K_CR3C_CRC32_BYTE1=0x3c, ALS4K_CR3D_CRC32_BYTE2=0x3d, ALS4K_CR3E_CRC32_BYTE3=0x3e,} cocci_id/* sound/pci/als4000.c 231 */;
	enum als4k_gcr_t cocci_id/* sound/pci/als4000.c 226 */;
	enum als4k_iobase_t cocci_id/* sound/pci/als4000.c 192 */;
	enum als4k_gcr8c_t{ALS4K_GCR8C_IRQ_MASK_CTRL_ENABLE=0x8000, ALS4K_GCR8C_CHIP_REV_MASK=0xf0000,} cocci_id/* sound/pci/als4000.c 172 */;
	enum als4k_gcr_t{ALS4K_GCR8C_MISC_CTRL=0x8c, ALS4K_GCR90_TEST_MODE_REG=0x90, ALS4K_GCR91_DMA0_ADDR=0x91, ALS4K_GCR92_DMA0_MODE_COUNT=0x92, ALS4K_GCR93_DMA1_ADDR=0x93, ALS4K_GCR94_DMA1_MODE_COUNT=0x94, ALS4K_GCR95_DMA3_ADDR=0x95, ALS4K_GCR96_DMA3_MODE_COUNT=0x96, ALS4K_GCR99_DMA_EMULATION_CTRL=0x99, ALS4K_GCRA0_FIFO1_CURRENT_ADDR=0xa0, ALS4K_GCRA1_FIFO1_STATUS_BYTECOUNT=0xa1, ALS4K_GCRA2_FIFO2_PCIADDR=0xa2, ALS4K_GCRA3_FIFO2_COUNT=0xa3, ALS4K_GCRA4_FIFO2_CURRENT_ADDR=0xa4, ALS4K_GCRA5_FIFO1_STATUS_BYTECOUNT=0xa5, ALS4K_GCRA6_PM_CTRL=0xa6, ALS4K_GCRA7_PCI_ACCESS_STORAGE=0xa7, ALS4K_GCRA8_LEGACY_CFG1=0xa8, ALS4K_GCRA9_LEGACY_CFG2=0xa9, ALS4K_GCRFF_DUMMY_SCRATCH=0xff,} cocci_id/* sound/pci/als4000.c 149 */;
	enum als4k_iobase_0e_t{ALS4K_IOB_0E_MPU_IRQ=0x10, ALS4K_IOB_0E_CR1E_IRQ=0x40, ALS4K_IOB_0E_SB_DMA_IRQ=0x80,} cocci_id/* sound/pci/als4000.c 143 */;
	enum als4k_iobase_t{ALS4K_IOD_00_AC97_ACCESS=0x00, ALS4K_IOW_04_AC97_READ=0x04, ALS4K_IOB_06_AC97_STATUS=0x06, ALS4K_IOB_07_IRQSTATUS=0x07, ALS4K_IOD_08_GCR_DATA=0x08, ALS4K_IOB_0C_GCR_INDEX=0x0c, ALS4K_IOB_0E_IRQTYPE_SB_CR1E_MPU=0x0e, ALS4K_IOB_10_ADLIB_ADDR0=0x10, ALS4K_IOB_11_ADLIB_ADDR1=0x11, ALS4K_IOB_12_ADLIB_ADDR2=0x12, ALS4K_IOB_13_ADLIB_ADDR3=0x13, ALS4K_IOB_14_MIXER_INDEX=0x14, ALS4K_IOB_15_MIXER_DATA=0x15, ALS4K_IOB_16_ESP_RESET=0x16, ALS4K_IOB_16_ACK_FOR_CR1E=0x16, ALS4K_IOB_18_OPL_ADDR0=0x18, ALS4K_IOB_19_OPL_ADDR1=0x19, ALS4K_IOB_1A_ESP_RD_DATA=0x1a, ALS4K_IOB_1C_ESP_CMD_DATA=0x1c, ALS4K_IOB_1C_ESP_WR_STATUS=0x1c, ALS4K_IOB_1E_ESP_RD_STATUS8=0x1e, ALS4K_IOB_1F_ESP_RD_STATUS16=0x1f, ALS4K_IOB_20_ESP_GAMEPORT_200=0x20, ALS4K_IOB_21_ESP_GAMEPORT_201=0x21, ALS4K_IOB_30_MIDI_DATA=0x30, ALS4K_IOB_31_MIDI_STATUS=0x31, ALS4K_IOB_31_MIDI_COMMAND=0x31,} cocci_id/* sound/pci/als4000.c 112 */;
	const struct pci_device_id cocci_id/* sound/pci/als4000.c 105 */[];
	struct pci_driver cocci_id/* sound/pci/als4000.c 1013 */;
}
