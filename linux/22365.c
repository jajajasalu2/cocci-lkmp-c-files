cocci_test_suite() {
	struct crypto_shash *cocci_id/* security/keys/dh.c 89 */;
	struct kdf_sdesc **cocci_id/* security/keys/dh.c 87 */;
	struct kdf_sdesc {
		struct shash_desc shash;
		char ctx[];
	} cocci_id/* security/keys/dh.c 82 */;
	struct dh_completion *cocci_id/* security/keys/dh.c 73 */;
	struct crypto_async_request *cocci_id/* security/keys/dh.c 71 */;
	void cocci_id/* security/keys/dh.c 71 */;
	struct dh_completion {
		struct completion completion;
		int err;
	} cocci_id/* security/keys/dh.c 66 */;
	struct dh *cocci_id/* security/keys/dh.c 59 */;
	struct keyctl_kdf_params cocci_id/* security/keys/dh.c 414 */;
	struct keyctl_kdf_params __user *cocci_id/* security/keys/dh.c 412 */;
	const struct user_key_payload *cocci_id/* security/keys/dh.c 37 */;
	char *cocci_id/* security/keys/dh.c 255 */;
	struct kdf_sdesc *cocci_id/* security/keys/dh.c 243 */;
	uint8_t *cocci_id/* security/keys/dh.c 241 */;
	struct kpp_request *cocci_id/* security/keys/dh.c 240 */;
	struct crypto_kpp *cocci_id/* security/keys/dh.c 239 */;
	struct dh_completion cocci_id/* security/keys/dh.c 238 */;
	struct scatterlist cocci_id/* security/keys/dh.c 237 */;
	struct dh cocci_id/* security/keys/dh.c 236 */;
	struct keyctl_dh_params cocci_id/* security/keys/dh.c 235 */;
	int cocci_id/* security/keys/dh.c 233 */;
	ssize_t cocci_id/* security/keys/dh.c 232 */;
	struct keyctl_kdf_params *cocci_id/* security/keys/dh.c 229 */;
	char __user *cocci_id/* security/keys/dh.c 228 */;
	size_t cocci_id/* security/keys/dh.c 228 */;
	struct keyctl_dh_params __user *cocci_id/* security/keys/dh.c 227 */;
	long cocci_id/* security/keys/dh.c 227 */;
	key_ref_t cocci_id/* security/keys/dh.c 20 */;
	struct key *cocci_id/* security/keys/dh.c 19 */;
	key_serial_t cocci_id/* security/keys/dh.c 17 */;
	void **cocci_id/* security/keys/dh.c 17 */;
	u8 cocci_id/* security/keys/dh.c 162 */[32];
	__be32 cocci_id/* security/keys/dh.c 150 */;
	struct shash_desc *cocci_id/* security/keys/dh.c 146 */;
	u8 *cocci_id/* security/keys/dh.c 144 */;
	const u8 *cocci_id/* security/keys/dh.c 143 */;
	unsigned int cocci_id/* security/keys/dh.c 143 */;
	struct shash_desc cocci_id/* security/keys/dh.c 106 */;
}
