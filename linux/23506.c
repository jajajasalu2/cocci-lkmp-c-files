cocci_test_suite() {
	struct sst_module_template cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 62 */;
	struct sst_module *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 61 */;
	struct dma_block_info *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 60 */;
	struct sst_byt_fw_module_header {
		unsigned char signature[SST_BYT_FW_SIGNATURE_SIZE];
		u32 mod_size;
		u32 blocks;
		u32 type;
		u32 entry_point;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 49 */;
	struct fw_header {
		unsigned char signature[SST_BYT_FW_SIGNATURE_SIZE];
		u32 file_size;
		u32 modules;
		u32 file_format;
		u32 reserved[4];
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 41 */;
	struct sst_ops cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 345 */;
	struct dma_block_info {
		enum sst_ram_type type;
		u32 size;
		u32 ram_offset;
		u32 rsvd;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 34 */;
	struct device *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 288 */;
	const struct sst_adsp_memregion *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 287 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 285 */;
	enum sst_ram_type{SST_BYT_IRAM=1, SST_BYT_DRAM=2, SST_BYT_CACHE=3,} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 28 */;
	const struct sst_adsp_memregion cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 245 */[];
	struct sst_adsp_memregion {
		u32 start;
		u32 end;
		int blocks;
		enum sst_mem_type type;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 237 */;
	u32 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 208 */;
	int cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 201 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 199 */;
	void cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 199 */;
	irqreturn_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 171 */;
	void *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 171 */;
	u64 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 154 */;
	struct sst_byt_fw_module_header *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 117 */;
	struct fw_header *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 116 */;
	struct sst_fw *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-dsp.c 114 */;
}
