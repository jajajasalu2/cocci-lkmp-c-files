cocci_test_suite() {
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm2-cmd.c 719 */;
	int cocci_id/* drivers/char/tpm/tpm2-cmd.c 719 */;
	u8 cocci_id/* drivers/char/tpm/tpm2-cmd.c 67 */;
	__be32 *cocci_id/* drivers/char/tpm/tpm2-cmd.c 620 */;
	u16 cocci_id/* drivers/char/tpm/tpm2-cmd.c 547 */;
	void *cocci_id/* drivers/char/tpm/tpm2-cmd.c 541 */;
	struct tpm2_pcr_selection cocci_id/* drivers/char/tpm/tpm2-cmd.c 539 */;
	ssize_t cocci_id/* drivers/char/tpm/tpm2-cmd.c 537 */;
	struct tpm2_pcr_selection {
		__be16 hash_alg;
		u8 size_of_select;
		u8 pcr_select[3];
	}__packed cocci_id/* drivers/char/tpm/tpm2-cmd.c 531 */;
	enum hash_algo cocci_id/* drivers/char/tpm/tpm2-cmd.c 518 */;
	struct tpm_digest cocci_id/* drivers/char/tpm/tpm2-cmd.c 510 */;
	struct tpm_bank_info *cocci_id/* drivers/char/tpm/tpm2-cmd.c 509 */;
	struct tpm_header *cocci_id/* drivers/char/tpm/tpm2-cmd.c 485 */;
	struct tpm_buf cocci_id/* drivers/char/tpm/tpm2-cmd.c 448 */;
	struct tpm2_get_cap_out *cocci_id/* drivers/char/tpm/tpm2-cmd.c 389 */;
	const char *cocci_id/* drivers/char/tpm/tpm2-cmd.c 387 */;
	u32 *cocci_id/* drivers/char/tpm/tpm2-cmd.c 386 */;
	struct tpm2_get_cap_out {
		u8 more_data;
		__be32 subcap_id;
		__be32 property_cnt;
		__be32 property_id;
		__be32 value;
	}__packed cocci_id/* drivers/char/tpm/tpm2-cmd.c 367 */;
	void cocci_id/* drivers/char/tpm/tpm2-cmd.c 348 */;
	struct tpm2_get_random_out cocci_id/* drivers/char/tpm/tpm2-cmd.c 310 */;
	struct tpm2_get_random_out *cocci_id/* drivers/char/tpm/tpm2-cmd.c 290 */;
	u8 *cocci_id/* drivers/char/tpm/tpm2-cmd.c 288 */;
	size_t cocci_id/* drivers/char/tpm/tpm2-cmd.c 288 */;
	struct tpm2_get_random_out {
		__be16 size;
		u8 buffer[TPM_MAX_RNG_DATA];
	}__packed cocci_id/* drivers/char/tpm/tpm2-cmd.c 272 */;
	const unsigned char *cocci_id/* drivers/char/tpm/tpm2-cmd.c 255 */;
	struct tpm2_null_auth_area cocci_id/* drivers/char/tpm/tpm2-cmd.c 239 */;
	struct tpm_digest *cocci_id/* drivers/char/tpm/tpm2-cmd.c 236 */;
	struct tpm2_null_auth_area {
		__be32 handle;
		__be16 nonce_size;
		u8 attributes;
		__be16 auth_size;
	}__packed cocci_id/* drivers/char/tpm/tpm2-cmd.c 219 */;
	struct tpm2_hash cocci_id/* drivers/char/tpm/tpm2-cmd.c 17 */[];
	u8 cocci_id/* drivers/char/tpm/tpm2-cmd.c 168 */[TPM2_PCR_SELECT_MIN];
	struct tpm2_pcr_read_out *cocci_id/* drivers/char/tpm/tpm2-cmd.c 167 */;
	u16 *cocci_id/* drivers/char/tpm/tpm2-cmd.c 162 */;
	struct tpm2_pcr_read_out {
		__be32 update_cnt;
		__be32 pcr_selects_cnt;
		__be16 hash_alg;
		u8 pcr_select_size;
		u8 pcr_select[TPM2_PCR_SELECT_MIN];
		__be32 digests_cnt;
		__be16 digest_size;
		u8 digest[];
	}__packed cocci_id/* drivers/char/tpm/tpm2-cmd.c 141 */;
	unsigned int cocci_id/* drivers/char/tpm/tpm2-cmd.c 130 */;
	u32 cocci_id/* drivers/char/tpm/tpm2-cmd.c 128 */;
	unsigned long cocci_id/* drivers/char/tpm/tpm2-cmd.c 128 */;
}
