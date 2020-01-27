cocci_test_suite() {
	unsigned int cocci_id/* drivers/char/tpm/tpm2-space.c 73 */;
	struct tpm2_context *cocci_id/* drivers/char/tpm/tpm2-space.c 72 */;
	struct tpm_buf cocci_id/* drivers/char/tpm/tpm2-space.c 71 */;
	u32 *cocci_id/* drivers/char/tpm/tpm2-space.c 69 */;
	unsigned int *cocci_id/* drivers/char/tpm/tpm2-space.c 69 */;
	u8 *cocci_id/* drivers/char/tpm/tpm2-space.c 68 */;
	void cocci_id/* drivers/char/tpm/tpm2-space.c 56 */;
	struct tpm_header *cocci_id/* drivers/char/tpm/tpm2-space.c 530 */;
	size_t *cocci_id/* drivers/char/tpm/tpm2-space.c 528 */;
	void *cocci_id/* drivers/char/tpm/tpm2-space.c 528 */;
	struct tpm2_cap_handles *cocci_id/* drivers/char/tpm/tpm2-space.c 434 */;
	size_t cocci_id/* drivers/char/tpm/tpm2-space.c 430 */;
	struct tpm2_cap_handles {
		u8 more_data;
		__be32 capability;
		__be32 count;
		__be32 handles[];
	}__packed cocci_id/* drivers/char/tpm/tpm2-space.c 422 */;
	int cocci_id/* drivers/char/tpm/tpm2-space.c 336 */;
	struct tpm_space *cocci_id/* drivers/char/tpm/tpm2-space.c 335 */;
	u32 cocci_id/* drivers/char/tpm/tpm2-space.c 333 */;
	bool cocci_id/* drivers/char/tpm/tpm2-space.c 333 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm2-space.c 333 */;
	const struct tpm_header *cocci_id/* drivers/char/tpm/tpm2-space.c 266 */;
	const void *cocci_id/* drivers/char/tpm/tpm2-space.c 264 */;
	struct tpm2_context {
		__be64 sequence;
		__be32 saved_handle;
		__be32 hierarchy;
		__be16 blob_size;
	}__packed cocci_id/* drivers/char/tpm/tpm2-space.c 24 */;
	enum tpm2_handle_types{TPM2_HT_HMAC_SESSION=0x02000000, TPM2_HT_POLICY_SESSION=0x03000000, TPM2_HT_TRANSIENT=0x80000000,} cocci_id/* drivers/char/tpm/tpm2-space.c 18 */;
	__be32 *cocci_id/* drivers/char/tpm/tpm2-space.c 112 */;
}
