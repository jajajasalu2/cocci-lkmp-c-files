cocci_test_suite() {
	struct ucode {
		u8 id;
		char version[VERSION_LEN - 1];
		__be32 code_size;
		u8 raz[12];
		u64 code[0];
	} cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 69 */;
	struct pci_driver cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 580 */;
	int cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 53 */(struct pci_dev *pdev,
									int num_vfs);
	const struct pci_device_id *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 420 */;
	const struct pci_device_id cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 41 */[];
	unsigned int cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 36 */;
	u64 cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 354 */;
	const char cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 32 */[];
	struct pci_dev *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 308 */;
	void cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 279 */;
	struct nitrox_device *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 244 */;
	int cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 244 */;
	u32 cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 129 */;
	union aqm_grp_execmsk_hi cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 128 */;
	union aqm_grp_execmsk_lo cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 127 */;
	union ucd_core_eid_ucode_block_num cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 126 */;
	u64 *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 124 */;
	struct ucode *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 123 */;
	const char *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 122 */;
	const struct firmware *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_main.c 121 */;
}
