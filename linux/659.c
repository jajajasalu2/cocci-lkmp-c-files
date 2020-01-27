cocci_test_suite() {
	unsigned long cocci_id/* crypto/skcipher.c 97 */;
	struct crypto_spawn *cocci_id/* crypto/skcipher.c 964 */;
	struct crypto_attr_type *cocci_id/* crypto/skcipher.c 961 */;
	struct crypto_alg **cocci_id/* crypto/skcipher.c 959 */;
	struct crypto_template *cocci_id/* crypto/skcipher.c 958 */;
	struct rtattr **cocci_id/* crypto/skcipher.c 958 */;
	struct skcipher_ctx_simple *cocci_id/* crypto/skcipher.c 928 */;
	struct crypto_cipher *cocci_id/* crypto/skcipher.c 916 */;
	struct crypto_alg *cocci_id/* crypto/skcipher.c 837 */;
	struct skcipher_alg *cocci_id/* crypto/skcipher.c 835 */;
	struct crypto_sync_skcipher *cocci_id/* crypto/skcipher.c 785 */;
	gfp_t cocci_id/* crypto/skcipher.c 78 */;
	u32 cocci_id/* crypto/skcipher.c 779 */;
	const char *cocci_id/* crypto/skcipher.c 778 */;
	struct crypto_skcipher *cocci_id/* crypto/skcipher.c 778 */;
	struct crypto_skcipher_spawn *cocci_id/* crypto/skcipher.c 770 */;
	int cocci_id/* crypto/skcipher.c 770 */;
	struct crypto_skcipher cocci_id/* crypto/skcipher.c 767 */;
	const struct crypto_type cocci_id/* crypto/skcipher.c 756 */;
	struct skcipher_alg cocci_id/* crypto/skcipher.c 733 */;
	struct crypto_report_blkcipher cocci_id/* crypto/skcipher.c 732 */;
	struct sk_buff *cocci_id/* crypto/skcipher.c 730 */;
	struct seq_file *cocci_id/* crypto/skcipher.c 713 */;
	void cocci_id/* crypto/skcipher.c 711 */(struct seq_file *m,
						 struct crypto_alg *alg)
	__maybe_unused;
	struct skcipher_instance cocci_id/* crypto/skcipher.c 706 */;
	struct skcipher_instance *cocci_id/* crypto/skcipher.c 705 */;
	struct crypto_instance *cocci_id/* crypto/skcipher.c 703 */;
	struct crypto_tfm *cocci_id/* crypto/skcipher.c 673 */;
	void cocci_id/* crypto/skcipher.c 673 */;
	unsigned int cocci_id/* crypto/skcipher.c 660 */;
	struct skcipher_request *cocci_id/* crypto/skcipher.c 656 */;
	const u8 *cocci_id/* crypto/skcipher.c 613 */;
	struct aead_request *cocci_id/* crypto/skcipher.c 552 */;
	struct page *cocci_id/* crypto/skcipher.c 52 */;
	struct crypto_aead *cocci_id/* crypto/skcipher.c 513 */;
	struct scatter_walk *cocci_id/* crypto/skcipher.c 50 */;
	void *cocci_id/* crypto/skcipher.c 50 */;
	int cocci_id/* crypto/skcipher.c 42 */(struct skcipher_walk *walk);
	u8 *cocci_id/* crypto/skcipher.c 404 */;
	unsigned cocci_id/* crypto/skcipher.c 398 */;
	struct skcipher_walk *cocci_id/* crypto/skcipher.c 396 */;
	struct skcipher_walk_buffer {
		struct list_head entry;
		struct scatter_walk dst;
		unsigned int len;
		u8 *data;
		u8 buffer[];
	} cocci_id/* crypto/skcipher.c 34 */;
	struct skcipher_walk_buffer *cocci_id/* crypto/skcipher.c 287 */;
	enum{SKCIPHER_WALK_PHYS=1 << 0, SKCIPHER_WALK_SLOW=1 << 1, SKCIPHER_WALK_COPY=1 << 2, SKCIPHER_WALK_DIFF=1 << 3, SKCIPHER_WALK_SLEEP=1 << 4,} cocci_id/* crypto/skcipher.c 26 */;
	bool cocci_id/* crypto/skcipher.c 226 */;
	struct skcipher_ctx_simple cocci_id/* crypto/skcipher.c 1011 */;
}
