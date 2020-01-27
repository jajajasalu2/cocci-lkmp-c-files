cocci_test_suite() {
	void __iomem *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 86 */;
	struct sst_module_template cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 84 */;
	struct sst_module *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 83 */;
	struct dma_block_info *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 82 */;
	void cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 77 */(struct sst_dsp *sst);
	struct sst_ops cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 689 */;
	struct fw_module_header {
		unsigned char signature[SST_HSW_FW_SIGNATURE_SIZE];
		__le32 mod_size;
		__le32 blocks;
		__le16 padding;
		__le16 type;
		__le32 entry_point;
		struct fw_module_info info;
	}__attribute__((packed)) cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 67 */;
	struct device *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 614 */;
	const struct sst_adsp_memregion *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 613 */;
	const struct sst_block_ops cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 606 */;
	struct fw_header {
		unsigned char signature[SST_HSW_FW_SIGNATURE_SIZE];
		__le32 file_size;
		__le32 modules;
		__le32 file_format;
		__le32 reserved[4];
	}__attribute__((packed)) cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 59 */;
	u32 cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 573 */;
	struct sst_mem_block *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 570 */;
	struct fw_module_info {
		__le32 persistent_size;
		__le32 scratch_size;
	}__attribute__((packed)) cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 54 */;
	u8 cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 526 */[4];
	const struct sst_sram_shift cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 488 */[];
	struct sst_sram_shift {
		u32 dev_id;
		u32 iram_shift;
		u32 dram_shift;
	} cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 482 */;
	struct dma_block_info {
		__le32 type;
		__le32 size;
		__le32 ram_offset;
		__le32 rsvd;
	}__attribute__((packed)) cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 47 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 462 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 462 */;
	int cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 462 */;
	const struct sst_adsp_memregion cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 450 */[];
	struct sst_adsp_memregion {
		u32 start;
		u32 end;
		int blocks;
		enum sst_mem_type type;
	} cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 442 */;
	void cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 396 */;
	irqreturn_t cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 212 */;
	void *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 212 */;
	struct fw_module_header *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 176 */;
	struct fw_header *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 175 */;
	struct sst_fw *cocci_id/* sound/soc/intel/haswell/sst-haswell-dsp.c 173 */;
}
