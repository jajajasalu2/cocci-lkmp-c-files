cocci_test_suite() {
	struct skl_ext_manifest_hdr {
		u32 id;
		u32 len;
		u16 version_major;
		u16 version_minor;
		u32 entries;
	} cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 82 */;
	struct adsp_fw_hdr {
		u32 id;
		u32 len;
		u8 name[8];
		u32 preload_page_count;
		u32 fw_image_flags;
		u32 feature_mask;
		u16 major;
		u16 minor;
		u16 hotfix;
		u16 build;
		u32 num_modules;
		u32 hw_buf_base;
		u32 hw_buf_length;
		u32 load_offset;
	}__packed cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 65 */;
	struct adsp_module_entry {
		u32 struct_id;
		u8 name[8];
		u8 uuid[16];
		struct module_type type;
		u8 hash1[DEFAULT_HASH_SHA256_LEN];
		u32 entry_point;
		u16 cfg_offset;
		u16 cfg_count;
		u32 affinity_mask;
		u16 instance_max_count;
		u16 instance_bss_size;
		struct segment_desc segments[3];
	}__packed cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 50 */;
	struct module_type {
		u32 load_type:4;
		u32 auto_start:1;
		u32 domain_ll:1;
		u32 domain_dp:1;
		u32 rsvd:25;
	}__packed cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 42 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 388 */;
	unsigned int cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 385 */;
	struct skl_lib_info *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 383 */;
	struct segment_desc {
		union seg_flags flags;
		u32 v_base_addr;
		u32 file_offset;
	} cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 36 */;
	struct sst_dsp_device *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 358 */;
	struct skl_dsp_loader_ops cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 357 */;
	struct skl_dev **cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 357 */;
	const char *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 356 */;
	struct device *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 356 */;
	struct skl_ext_manifest_hdr *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 338 */;
	struct firmware *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 336 */;
	int cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 336 */;
	struct uuid_module *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 321 */;
	struct skl_dev *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 319 */;
	void cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 319 */;
	struct firmware cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 238 */;
	struct adsp_module_entry *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 233 */;
	struct adsp_fw_hdr *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 232 */;
	const struct firmware *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 229 */;
	int *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 202 */;
	union seg_flags {
		u32 ul;
		struct {
			u32 contents:1;
			u32 alloc:1;
			u32 load:1;
			u32 read_only:1;
			u32 code:1;
			u32 data:1;
			u32 _rsvd0:2;
			u32 type:4;
			u32 _rsvd1:4;
			u32 length:16;
		} r;
	}__packed cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 20 */;
	guid_t *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 172 */;
	u32 cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 119 */;
	u64 *cocci_id/* sound/soc/intel/skylake/skl-sst-utils.c 115 */;
}
