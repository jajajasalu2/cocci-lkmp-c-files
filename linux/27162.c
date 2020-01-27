cocci_test_suite() {
	const struct user_key_payload *cocci_id/* fs/crypto/keysetup_v1.c 99 */;
	char *cocci_id/* fs/crypto/keysetup_v1.c 97 */;
	const struct fscrypt_key **cocci_id/* fs/crypto/keysetup_v1.c 95 */;
	const u8 cocci_id/* fs/crypto/keysetup_v1.c 93 */[FSCRYPT_KEY_DESCRIPTOR_SIZE];
	const char *cocci_id/* fs/crypto/keysetup_v1.c 92 */;
	struct key *cocci_id/* fs/crypto/keysetup_v1.c 91 */;
	struct crypto_skcipher *cocci_id/* fs/crypto/keysetup_v1.c 55 */;
	struct scatterlist cocci_id/* fs/crypto/keysetup_v1.c 54 */;
	struct skcipher_request *cocci_id/* fs/crypto/keysetup_v1.c 52 */;
	u8 *cocci_id/* fs/crypto/keysetup_v1.c 49 */;
	unsigned int cocci_id/* fs/crypto/keysetup_v1.c 49 */;
	const u8 cocci_id/* fs/crypto/keysetup_v1.c 48 */[FS_KEY_DERIVATION_NONCE_SIZE];
	const u8 *cocci_id/* fs/crypto/keysetup_v1.c 47 */;
	int cocci_id/* fs/crypto/keysetup_v1.c 47 */;
	struct fscrypt_info *cocci_id/* fs/crypto/keysetup_v1.c 307 */;
	const struct fscrypt_mode *cocci_id/* fs/crypto/keysetup_v1.c 256 */;
	unsigned long cocci_id/* fs/crypto/keysetup_v1.c 182 */;
	const struct fscrypt_info *cocci_id/* fs/crypto/keysetup_v1.c 180 */;
	struct fscrypt_direct_key *cocci_id/* fs/crypto/keysetup_v1.c 178 */;
	void cocci_id/* fs/crypto/keysetup_v1.c 154 */;
	struct fscrypt_direct_key {
		struct hlist_node dk_node;
		refcount_t dk_refcount;
		const struct fscrypt_mode *dk_mode;
		struct crypto_skcipher *dk_ctfm;
		u8 dk_descriptor[FSCRYPT_KEY_DESCRIPTOR_SIZE];
		u8 dk_raw[FSCRYPT_MAX_KEY_SIZE];
	} cocci_id/* fs/crypto/keysetup_v1.c 145 */;
	struct fscrypt_key cocci_id/* fs/crypto/keysetup_v1.c 120 */;
	const struct fscrypt_key *cocci_id/* fs/crypto/keysetup_v1.c 100 */;
}
