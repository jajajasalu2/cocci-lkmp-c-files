cocci_test_suite() {
	struct crypto_aead *cocci_id/* security/keys/big_key.c 90 */;
	const char cocci_id/* security/keys/big_key.c 84 */[];
	struct key_type cocci_id/* security/keys/big_key.c 69 */;
	struct inode cocci_id/* security/keys/big_key.c 53 */;
	struct dentry cocci_id/* security/keys/big_key.c 53 */;
	enum big_key_op{BIG_KEY_ENC, BIG_KEY_DEC,} cocci_id/* security/keys/big_key.c 43 */;
	int __init cocci_id/* security/keys/big_key.c 415 */;
	char __user *cocci_id/* security/keys/big_key.c 355 */;
	long cocci_id/* security/keys/big_key.c 355 */;
	const struct key *cocci_id/* security/keys/big_key.c 339 */;
	struct seq_file *cocci_id/* security/keys/big_key.c 339 */;
	void cocci_id/* security/keys/big_key.c 339 */;
	enum{big_key_data, big_key_path, big_key_path_2nd_part, big_key_len,} cocci_id/* security/keys/big_key.c 33 */;
	struct path *cocci_id/* security/keys/big_key.c 326 */;
	struct key *cocci_id/* security/keys/big_key.c 321 */;
	struct key_preparsed_payload *cocci_id/* security/keys/big_key.c 293 */;
	struct big_key_buf {
		unsigned int nr_pages;
		void *virt;
		struct scatterlist *sg;
		struct page *pages[];
	} cocci_id/* security/keys/big_key.c 23 */;
	loff_t cocci_id/* security/keys/big_key.c 224 */;
	unsigned long cocci_id/* security/keys/big_key.c 216 */;
	ssize_t cocci_id/* security/keys/big_key.c 206 */;
	struct file *cocci_id/* security/keys/big_key.c 204 */;
	struct scatterlist cocci_id/* security/keys/big_key.c 167 */;
	struct page cocci_id/* security/keys/big_key.c 166 */;
	struct big_key_buf cocci_id/* security/keys/big_key.c 165 */;
	unsigned int cocci_id/* security/keys/big_key.c 162 */;
	struct big_key_buf *cocci_id/* security/keys/big_key.c 161 */;
	void *cocci_id/* security/keys/big_key.c 159 */;
	size_t cocci_id/* security/keys/big_key.c 159 */;
	u8 cocci_id/* security/keys/big_key.c 110 */[BIG_KEY_IV_SIZE];
	struct aead_request *cocci_id/* security/keys/big_key.c 103 */;
	enum big_key_op cocci_id/* security/keys/big_key.c 100 */;
	u8 *cocci_id/* security/keys/big_key.c 100 */;
	int cocci_id/* security/keys/big_key.c 100 */;
}
