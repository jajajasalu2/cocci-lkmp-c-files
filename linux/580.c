cocci_test_suite() {
	unsigned char cocci_id/* crypto/drbg.c 985 */;
	union {
		unsigned char req[8];
		__be64 req_int;
	} cocci_id/* crypto/drbg.c 981 */;
	unsigned char cocci_id/* crypto/drbg.c 826 */[5];
	unsigned int cocci_id/* crypto/drbg.c 784 */;
	const unsigned char *cocci_id/* crypto/drbg.c 779 */;
	unsigned char *cocci_id/* crypto/drbg.c 778 */;
	size_t cocci_id/* crypto/drbg.c 778 */;
	void cocci_id/* crypto/drbg.c 778 */;
	int cocci_id/* crypto/drbg.c 638 */(struct drbg_state *drbg);
	void cocci_id/* crypto/drbg.c 635 */(struct drbg_state *drbg,
					     const unsigned char *key);
	int cocci_id/* crypto/drbg.c 633 */(struct drbg_state *drbg,
					    unsigned char *outval,
					    const struct list_head *in);
	const struct drbg_state_ops cocci_id/* crypto/drbg.c 620 */;
	unsigned char cocci_id/* crypto/drbg.c 401 */[8];
	short cocci_id/* crypto/drbg.c 325 */;
	struct drbg_string *cocci_id/* crypto/drbg.c 323 */;
	int cocci_id/* crypto/drbg.c 312 */(struct drbg_state *drbg,
					    u8 *inbuf, u32 inbuflen,
					    u8 *outbuf, u32 outlen);
	int cocci_id/* crypto/drbg.c 308 */(struct drbg_state *drbg,
					    unsigned char *outval,
					    const struct drbg_string *in);
	struct s *cocci_id/* crypto/drbg.c 287 */;
	struct s {
		__be32 conv;
	} cocci_id/* crypto/drbg.c 284 */;
	__u32 cocci_id/* crypto/drbg.c 282 */;
	unsigned short cocci_id/* crypto/drbg.c 244 */;
	void __exit cocci_id/* crypto/drbg.c 2124 */;
	drbg_flag_t cocci_id/* crypto/drbg.c 208 */;
	const struct drbg_core *cocci_id/* crypto/drbg.c 2055 */;
	struct rng_alg *cocci_id/* crypto/drbg.c 2054 */;
	void __init cocci_id/* crypto/drbg.c 2054 */;
	struct rng_alg cocci_id/* crypto/drbg.c 2047 */[22];
	bool cocci_id/* crypto/drbg.c 1991 */;
	unsigned char cocci_id/* crypto/drbg.c 1987 */[OUTBUFLEN];
	int __init cocci_id/* crypto/drbg.c 1983 */;
	const u8 *cocci_id/* crypto/drbg.c 1930 */;
	struct crypto_rng *cocci_id/* crypto/drbg.c 1929 */;
	struct crypto_tfm *cocci_id/* crypto/drbg.c 1915 */;
	bool *cocci_id/* crypto/drbg.c 1878 */;
	int *cocci_id/* crypto/drbg.c 1878 */;
	const char *cocci_id/* crypto/drbg.c 1877 */;
	struct scatterlist *cocci_id/* crypto/drbg.c 1822 */;
	u32 cocci_id/* crypto/drbg.c 1819 */;
	const struct drbg_string *cocci_id/* crypto/drbg.c 1807 */;
	u8 *cocci_id/* crypto/drbg.c 1788 */;
	char cocci_id/* crypto/drbg.c 1744 */[CRYPTO_MAX_ALG_NAME];
	struct skcipher_request *cocci_id/* crypto/drbg.c 1742 */;
	struct crypto_skcipher *cocci_id/* crypto/drbg.c 1741 */;
	struct crypto_cipher *cocci_id/* crypto/drbg.c 1718 */;
	const struct list_head *cocci_id/* crypto/drbg.c 1703 */;
	struct sdesc *cocci_id/* crypto/drbg.c 1685 */;
	struct shash_desc cocci_id/* crypto/drbg.c 1670 */;
	struct crypto_shash *cocci_id/* crypto/drbg.c 1661 */;
	struct sdesc {
		struct shash_desc shash;
		char ctx[];
	} cocci_id/* crypto/drbg.c 1653 */;
	struct random_ready_callback *cocci_id/* crypto/drbg.c 1479 */;
	const struct drbg_core cocci_id/* crypto/drbg.c 116 */[];
	unsigned char cocci_id/* crypto/drbg.c 1125 */[((32 + 16) * 2)];
	unsigned char cocci_id/* crypto/drbg.c 1075 */[32];
	struct drbg_state cocci_id/* crypto/drbg.c 1072 */;
	struct drbg_string cocci_id/* crypto/drbg.c 1070 */;
	struct work_struct *cocci_id/* crypto/drbg.c 1068 */;
	struct list_head *cocci_id/* crypto/drbg.c 1037 */;
	struct drbg_state *cocci_id/* crypto/drbg.c 1037 */;
	int cocci_id/* crypto/drbg.c 1037 */;
}
