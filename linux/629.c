cocci_test_suite() {
	const u64 cocci_id/* crypto/vmac.c 79 */;
	void __exit cocci_id/* crypto/vmac.c 688 */;
	int __init cocci_id/* crypto/vmac.c 683 */;
	struct crypto_template cocci_id/* crypto/vmac.c 676 */;
	struct vmac_desc_ctx cocci_id/* crypto/vmac.c 658 */;
	struct vmac_tfm_ctx cocci_id/* crypto/vmac.c 654 */;
	struct crypto_alg *cocci_id/* crypto/vmac.c 623 */;
	struct shash_instance *cocci_id/* crypto/vmac.c 622 */;
	struct crypto_template *cocci_id/* crypto/vmac.c 620 */;
	struct rtattr **cocci_id/* crypto/vmac.c 620 */;
	struct vmac_tfm_ctx *cocci_id/* crypto/vmac.c 615 */;
	struct crypto_tfm *cocci_id/* crypto/vmac.c 613 */;
	struct crypto_cipher *cocci_id/* crypto/vmac.c 603 */;
	struct crypto_spawn *cocci_id/* crypto/vmac.c 601 */;
	struct crypto_instance *cocci_id/* crypto/vmac.c 600 */;
	struct vmac_desc_ctx {
		union {
			u8 partial[VMAC_NHBYTES];
			__le64 partial_words[VMAC_NHBYTES / 8];
		};
		unsigned int partial_size;
		bool first_block_processed;
		u64 polytmp[2 * VMAC_TAG_LEN / 64];
		union {
			u8 bytes[VMAC_NONCEBYTES];
			__be64 pads[VMAC_NONCEBYTES / 8];
		} nonce;
		unsigned int nonce_size;
	} cocci_id/* crypto/vmac.c 59 */;
	u8 *cocci_id/* crypto/vmac.c 563 */;
	struct shash_desc *cocci_id/* crypto/vmac.c 563 */;
	struct vmac_tfm_ctx {
		struct crypto_cipher *cipher;
		u64 nhkey[(VMAC_NHBYTES / 8) + 2 * (VMAC_TAG_LEN / 64 - 1)];
		u64 polykey[2 * VMAC_TAG_LEN / 64];
		u64 l3key[2 * VMAC_TAG_LEN / 64];
	} cocci_id/* crypto/vmac.c 51 */;
	u8 cocci_id/* crypto/vmac.c 434 */[16];
	__be64 cocci_id/* crypto/vmac.c 433 */[2];
	const u8 *cocci_id/* crypto/vmac.c 430 */;
	struct crypto_shash *cocci_id/* crypto/vmac.c 429 */;
	const __le64 *cocci_id/* crypto/vmac.c 400 */;
	unsigned int cocci_id/* crypto/vmac.c 400 */;
	struct vmac_desc_ctx *cocci_id/* crypto/vmac.c 399 */;
	const struct vmac_tfm_ctx *cocci_id/* crypto/vmac.c 398 */;
	u32 cocci_id/* crypto/vmac.c 374 */;
	u64 cocci_id/* crypto/vmac.c 358 */;
	u32 *cocci_id/* crypto/vmac.c 303 */;
	const u64 *cocci_id/* crypto/vmac.c 274 */;
	u64 *cocci_id/* crypto/vmac.c 273 */;
	void cocci_id/* crypto/vmac.c 273 */;
	int cocci_id/* crypto/vmac.c 150 */;
}
