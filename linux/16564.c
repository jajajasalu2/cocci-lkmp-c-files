cocci_test_suite() {
	struct pkey_kblob2pkey2 cocci_id/* drivers/s390/crypto/pkey_api.c 996 */;
	struct pkey_kblob2pkey2 __user *cocci_id/* drivers/s390/crypto/pkey_api.c 995 */;
	struct pkey_verifykey2 cocci_id/* drivers/s390/crypto/pkey_api.c 975 */;
	struct pkey_verifykey2 __user *cocci_id/* drivers/s390/crypto/pkey_api.c 974 */;
	struct pkey_clr2seck2 cocci_id/* drivers/s390/crypto/pkey_api.c 932 */;
	struct pkey_clr2seck2 __user *cocci_id/* drivers/s390/crypto/pkey_api.c 931 */;
	struct pkey_genseck2 cocci_id/* drivers/s390/crypto/pkey_api.c 890 */;
	struct pkey_genseck2 __user *cocci_id/* drivers/s390/crypto/pkey_api.c 889 */;
	struct pkey_kblob2pkey cocci_id/* drivers/s390/crypto/pkey_api.c 871 */;
	struct pkey_kblob2pkey __user *cocci_id/* drivers/s390/crypto/pkey_api.c 870 */;
	struct pkey_verifyprotk cocci_id/* drivers/s390/crypto/pkey_api.c 861 */;
	struct pkey_verifyprotk __user *cocci_id/* drivers/s390/crypto/pkey_api.c 860 */;
	struct pkey_genprotk cocci_id/* drivers/s390/crypto/pkey_api.c 847 */;
	struct pkey_genprotk __user *cocci_id/* drivers/s390/crypto/pkey_api.c 846 */;
	struct pkey_verifykey cocci_id/* drivers/s390/crypto/pkey_api.c 832 */;
	struct pkey_verifykey __user *cocci_id/* drivers/s390/crypto/pkey_api.c 831 */;
	u8 cocci_id/* drivers/s390/crypto/pkey_api.c 83 */[64];
	struct pkey_skey2pkey cocci_id/* drivers/s390/crypto/pkey_api.c 818 */;
	struct pkey_skey2pkey __user *cocci_id/* drivers/s390/crypto/pkey_api.c 817 */;
	long cocci_id/* drivers/s390/crypto/pkey_api.c 81 */;
	struct pkey_findcard cocci_id/* drivers/s390/crypto/pkey_api.c 803 */;
	struct pkey_findcard __user *cocci_id/* drivers/s390/crypto/pkey_api.c 802 */;
	struct pkey_clr2protk cocci_id/* drivers/s390/crypto/pkey_api.c 787 */;
	struct pkey_clr2protk __user *cocci_id/* drivers/s390/crypto/pkey_api.c 786 */;
	const struct pkey_clrkey *cocci_id/* drivers/s390/crypto/pkey_api.c 78 */;
	struct pkey_sec2protk cocci_id/* drivers/s390/crypto/pkey_api.c 771 */;
	struct pkey_sec2protk __user *cocci_id/* drivers/s390/crypto/pkey_api.c 770 */;
	struct pkey_clr2seck cocci_id/* drivers/s390/crypto/pkey_api.c 755 */;
	struct pkey_clr2seck __user *cocci_id/* drivers/s390/crypto/pkey_api.c 754 */;
	struct pkey_genseck cocci_id/* drivers/s390/crypto/pkey_api.c 740 */;
	struct pkey_genseck __user *cocci_id/* drivers/s390/crypto/pkey_api.c 739 */;
	unsigned long cocci_id/* drivers/s390/crypto/pkey_api.c 733 */;
	unsigned int cocci_id/* drivers/s390/crypto/pkey_api.c 732 */;
	struct pkey_apqn cocci_id/* drivers/s390/crypto/pkey_api.c 729 */;
	void __user *cocci_id/* drivers/s390/crypto/pkey_api.c 724 */;
	void *cocci_id/* drivers/s390/crypto/pkey_api.c 724 */;
	size_t cocci_id/* drivers/s390/crypto/pkey_api.c 724 */;
	u64 *cocci_id/* drivers/s390/crypto/pkey_api.c 689 */;
	u8 cocci_id/* drivers/s390/crypto/pkey_api.c 678 */[32];
	enum pkey_key_type cocci_id/* drivers/s390/crypto/pkey_api.c 677 */;
	struct cipherkeytoken *cocci_id/* drivers/s390/crypto/pkey_api.c 651 */;
	struct secaeskeytoken *cocci_id/* drivers/s390/crypto/pkey_api.c 644 */;
	u64 cocci_id/* drivers/s390/crypto/pkey_api.c 641 */;
	struct protaeskeytoken {
		u8 type;
		u8 res0[3];
		u8 version;
		u8 res1[3];
		u32 keytype;
		u32 len;
		u8 protkey[MAXPROTKEYSIZE];
	}__packed cocci_id/* drivers/s390/crypto/pkey_api.c 64 */;
	struct keytoken_header cocci_id/* drivers/s390/crypto/pkey_api.c 634 */;
	struct keytoken_header *cocci_id/* drivers/s390/crypto/pkey_api.c 632 */;
	struct pkey_apqn *cocci_id/* drivers/s390/crypto/pkey_api.c 628 */;
	size_t *cocci_id/* drivers/s390/crypto/pkey_api.c 628 */;
	u32 cocci_id/* drivers/s390/crypto/pkey_api.c 627 */;
	const u8 *cocci_id/* drivers/s390/crypto/pkey_api.c 627 */;
	int cocci_id/* drivers/s390/crypto/pkey_api.c 627 */;
	void __exit cocci_id/* drivers/s390/crypto/pkey_api.c 58 */;
	void cocci_id/* drivers/s390/crypto/pkey_api.c 58 */;
	void __init cocci_id/* drivers/s390/crypto/pkey_api.c 50 */;
	enum pkey_key_size *cocci_id/* drivers/s390/crypto/pkey_api.c 486 */;
	enum pkey_key_type *cocci_id/* drivers/s390/crypto/pkey_api.c 485 */;
	u8 *cocci_id/* drivers/s390/crypto/pkey_api.c 438 */;
	const struct pkey_apqn *cocci_id/* drivers/s390/crypto/pkey_api.c 435 */;
	debug_info_t *cocci_id/* drivers/s390/crypto/pkey_api.c 43 */;
	cpacf_mask_t cocci_id/* drivers/s390/crypto/pkey_api.c 37 */;
	struct pkey_protkey *cocci_id/* drivers/s390/crypto/pkey_api.c 334 */;
	struct protaeskeytoken cocci_id/* drivers/s390/crypto/pkey_api.c 313 */;
	struct protaeskeytoken *cocci_id/* drivers/s390/crypto/pkey_api.c 309 */;
	u8 cocci_id/* drivers/s390/crypto/pkey_api.c 267 */[AES_BLOCK_SIZE];
	struct {
		u8 iv[AES_BLOCK_SIZE];
		u8 key[MAXPROTKEYSIZE];
	} cocci_id/* drivers/s390/crypto/pkey_api.c 263 */;
	const struct pkey_protkey *cocci_id/* drivers/s390/crypto/pkey_api.c 260 */;
	struct pkey_clrkey cocci_id/* drivers/s390/crypto/pkey_api.c 223 */;
	u32 *cocci_id/* drivers/s390/crypto/pkey_api.c 180 */;
	u16 *cocci_id/* drivers/s390/crypto/pkey_api.c 179 */;
	const struct pkey_seckey *cocci_id/* drivers/s390/crypto/pkey_api.c 178 */;
	int __init cocci_id/* drivers/s390/crypto/pkey_api.c 1485 */;
	struct miscdevice cocci_id/* drivers/s390/crypto/pkey_api.c 1474 */;
	const struct file_operations cocci_id/* drivers/s390/crypto/pkey_api.c 1467 */;
	const struct attribute_group *cocci_id/* drivers/s390/crypto/pkey_api.c 1460 */[];
	struct attribute_group cocci_id/* drivers/s390/crypto/pkey_api.c 1455 */;
	struct bin_attribute *cocci_id/* drivers/s390/crypto/pkey_api.c 1446 */[];
	loff_t cocci_id/* drivers/s390/crypto/pkey_api.c 1393 */;
	char *cocci_id/* drivers/s390/crypto/pkey_api.c 1393 */;
	struct bin_attribute *cocci_id/* drivers/s390/crypto/pkey_api.c 1392 */;
	struct kobject *cocci_id/* drivers/s390/crypto/pkey_api.c 1391 */;
	struct file *cocci_id/* drivers/s390/crypto/pkey_api.c 1390 */;
	ssize_t cocci_id/* drivers/s390/crypto/pkey_api.c 1390 */;
	bool cocci_id/* drivers/s390/crypto/pkey_api.c 1357 */;
	enum pkey_key_size cocci_id/* drivers/s390/crypto/pkey_api.c 1356 */;
	u16 cocci_id/* drivers/s390/crypto/pkey_api.c 135 */;
	struct cipherkeytoken cocci_id/* drivers/s390/crypto/pkey_api.c 1348 */;
	struct secaeskeytoken cocci_id/* drivers/s390/crypto/pkey_api.c 1256 */;
	struct pkey_seckey *cocci_id/* drivers/s390/crypto/pkey_api.c 1254 */;
	struct pkey_protkey cocci_id/* drivers/s390/crypto/pkey_api.c 1134 */;
	struct pkey_apqns4keytype cocci_id/* drivers/s390/crypto/pkey_api.c 1072 */;
	struct pkey_apqns4keytype __user *cocci_id/* drivers/s390/crypto/pkey_api.c 1071 */;
	struct pkey_apqns4key cocci_id/* drivers/s390/crypto/pkey_api.c 1023 */;
	struct pkey_apqns4key __user *cocci_id/* drivers/s390/crypto/pkey_api.c 1022 */;
}
