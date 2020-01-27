cocci_test_suite() {
	void *cocci_id/* drivers/ata/libata-zpodd.c 70 */;
	struct rm_feature_desc *cocci_id/* drivers/ata/libata-zpodd.c 57 */;
	unsigned int cocci_id/* drivers/ata/libata-zpodd.c 56 */;
	char *cocci_id/* drivers/ata/libata-zpodd.c 55 */;
	enum odd_mech_type cocci_id/* drivers/ata/libata-zpodd.c 53 */;
	const char cocci_id/* drivers/ata/libata-zpodd.c 38 */[ATAPI_CDB_LEN];
	struct ata_taskfile cocci_id/* drivers/ata/libata-zpodd.c 37 */;
	int cocci_id/* drivers/ata/libata-zpodd.c 35 */;
	struct zpodd cocci_id/* drivers/ata/libata-zpodd.c 278 */;
	struct acpi_device *cocci_id/* drivers/ata/libata-zpodd.c 267 */;
	acpi_handle cocci_id/* drivers/ata/libata-zpodd.c 254 */;
	struct ata_device *cocci_id/* drivers/ata/libata-zpodd.c 252 */;
	void cocci_id/* drivers/ata/libata-zpodd.c 252 */;
	struct device *cocci_id/* drivers/ata/libata-zpodd.c 244 */;
	u32 cocci_id/* drivers/ata/libata-zpodd.c 240 */;
	struct zpodd {
		enum odd_mech_type mech_type;
		struct ata_device *dev;
		bool from_notify;
		bool zp_ready;
		unsigned long last_ready;
		bool zp_sampled;
		bool powered_off;
	} cocci_id/* drivers/ata/libata-zpodd.c 21 */;
	struct zpodd *cocci_id/* drivers/ata/libata-zpodd.c 198 */;
	bool cocci_id/* drivers/ata/libata-zpodd.c 171 */;
	enum odd_mech_type{ODD_MECH_TYPE_SLOT, ODD_MECH_TYPE_DRAWER, ODD_MECH_TYPE_UNSUPPORTED,} cocci_id/* drivers/ata/libata-zpodd.c 15 */;
	unsigned long cocci_id/* drivers/ata/libata-zpodd.c 149 */;
	u8 cocci_id/* drivers/ata/libata-zpodd.c 106 */;
}
