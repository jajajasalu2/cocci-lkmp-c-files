cocci_test_suite() {
	int __init cocci_id/* arch/s390/crypto/des_s390.c 433 */;
	struct skcipher_alg *cocci_id/* arch/s390/crypto/des_s390.c 413 */;
	struct crypto_alg *cocci_id/* arch/s390/crypto/des_s390.c 403 */;
	struct skcipher_alg *cocci_id/* arch/s390/crypto/des_s390.c 400 */[6];
	struct crypto_alg *cocci_id/* arch/s390/crypto/des_s390.c 398 */[2];
	u8 cocci_id/* arch/s390/crypto/des_s390.c 322 */[DES_BLOCK_SIZE];
	u8 *cocci_id/* arch/s390/crypto/des_s390.c 303 */;
	unsigned int cocci_id/* arch/s390/crypto/des_s390.c 303 */;
	struct s390_des_ctx {
		u8 iv[DES_BLOCK_SIZE];
		u8 key[DES3_KEY_SIZE];
	} cocci_id/* arch/s390/crypto/des_s390.c 30 */;
	struct s390_des_ctx cocci_id/* arch/s390/crypto/des_s390.c 293 */;
	struct skcipher_alg cocci_id/* arch/s390/crypto/des_s390.c 288 */;
	struct skcipher_request *cocci_id/* arch/s390/crypto/des_s390.c 283 */;
	int cocci_id/* arch/s390/crypto/des_s390.c 283 */;
	cpacf_mask_t cocci_id/* arch/s390/crypto/des_s390.c 28 */;
	struct crypto_alg cocci_id/* arch/s390/crypto/des_s390.c 235 */;
	const u8 *cocci_id/* arch/s390/crypto/des_s390.c 227 */;
	struct crypto_tfm *cocci_id/* arch/s390/crypto/des_s390.c 227 */;
	void cocci_id/* arch/s390/crypto/des_s390.c 227 */;
	struct {
		u8 iv[DES_BLOCK_SIZE];
		u8 key[DES3_KEY_SIZE];
	} cocci_id/* arch/s390/crypto/des_s390.c 115 */;
	struct skcipher_walk cocci_id/* arch/s390/crypto/des_s390.c 112 */;
	struct s390_des_ctx *cocci_id/* arch/s390/crypto/des_s390.c 111 */;
	struct crypto_skcipher *cocci_id/* arch/s390/crypto/des_s390.c 110 */;
	unsigned long cocci_id/* arch/s390/crypto/des_s390.c 108 */;
}
