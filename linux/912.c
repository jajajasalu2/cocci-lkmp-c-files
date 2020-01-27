cocci_test_suite() {
	struct nand_onfi_vendor_micron *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 84 */;
	struct nand_parameters *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 81 */;
	struct micron_nand {
		struct micron_on_die_ecc ecc;
	} cocci_id/* drivers/mtd/nand/raw/nand_micron.c 65 */;
	struct micron_on_die_ecc {
		bool forced;
		bool enabled;
		void *rawbuf;
	} cocci_id/* drivers/mtd/nand/raw/nand_micron.c 59 */;
	const struct nand_manufacturer_ops cocci_id/* drivers/mtd/nand/raw/nand_micron.c 545 */;
	struct nand_onfi_params *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 534 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 533 */;
	void cocci_id/* drivers/mtd/nand/raw/nand_micron.c 533 */;
	struct micron_nand *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 527 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 434 */;
	int cocci_id/* drivers/mtd/nand/raw/nand_micron.c 432 */;
	struct nand_onfi_vendor_micron {
		u8 two_plane_read;
		u8 read_cache;
		u8 read_unique_id;
		u8 dq_imped;
		u8 dq_imped_num_settings;
		u8 dq_imped_feat_addr;
		u8 rb_pulldown_strength;
		u8 rb_pulldown_strength_feat_addr;
		u8 rb_pulldown_strength_num_settings;
		u8 otp_mode;
		u8 otp_page_start;
		u8 otp_data_prot_addr;
		u8 otp_num_pages;
		u8 otp_feat_addr;
		u8 read_retry_options;
		u8 reserved[72];
		u8 param_revision;
	}__packed cocci_id/* drivers/mtd/nand/raw/nand_micron.c 39 */;
	u8 cocci_id/* drivers/mtd/nand/raw/nand_micron.c 373 */[5];
	enum{MICRON_ON_DIE_UNSUPPORTED, MICRON_ON_DIE_SUPPORTED, MICRON_ON_DIE_MANDATORY,} cocci_id/* drivers/mtd/nand/raw/nand_micron.c 341 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 326 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 284 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 229 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/nand_micron.c 194 */;
	void *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 189 */;
	u8 cocci_id/* drivers/mtd/nand/raw/nand_micron.c 188 */;
	u8 cocci_id/* drivers/mtd/nand/raw/nand_micron.c 169 */[ONFI_SUBFEATURE_PARAM_LEN];
	bool cocci_id/* drivers/mtd/nand/raw/nand_micron.c 166 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/nand_micron.c 126 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/nand_micron.c 102 */;
}
