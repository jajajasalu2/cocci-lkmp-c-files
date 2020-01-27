cocci_test_suite() {
	__le64 *cocci_id/* drivers/md/dm-crypt.c 969 */;
	u8 *cocci_id/* drivers/md/dm-crypt.c 968 */;
	struct dm_crypt_request *cocci_id/* drivers/md/dm-crypt.c 967 */;
	struct bio_vec cocci_id/* drivers/md/dm-crypt.c 965 */;
	struct aead_request *cocci_id/* drivers/md/dm-crypt.c 962 */;
	unsigned int *cocci_id/* drivers/md/dm-crypt.c 936 */;
	struct crypt_iv_operations {
		int (*ctr)(struct crypt_config *cc, struct dm_target *ti,
			   const char *opts);
		void (*dtr)(struct crypt_config *cc);
		int (*init)(struct crypt_config *cc);
		int (*wipe)(struct crypt_config *cc);
		int (*generator)(struct crypt_config *cc, u8 *iv,
				 struct dm_crypt_request *dmreq);
		int (*post)(struct crypt_config *cc, u8 *iv,
			    struct dm_crypt_request *dmreq);
	} cocci_id/* drivers/md/dm-crypt.c 89 */;
	sector_t cocci_id/* drivers/md/dm-crypt.c 889 */;
	struct crypt_config cocci_id/* drivers/md/dm-crypt.c 87 */;
	struct mapped_device *cocci_id/* drivers/md/dm-crypt.c 843 */;
	struct blk_integrity *cocci_id/* drivers/md/dm-crypt.c 842 */;
	struct bio_integrity_payload *cocci_id/* drivers/md/dm-crypt.c 815 */;
	struct dm_crypt_request {
		struct convert_context *ctx;
		struct scatterlist sg_in[4];
		struct scatterlist sg_out[4];
		u64 iv_sector;
	} cocci_id/* drivers/md/dm-crypt.c 80 */;
	struct crypt_iv_operations cocci_id/* drivers/md/dm-crypt.c 785 */;
	const struct crypt_iv_operations cocci_id/* drivers/md/dm-crypt.c 753 */;
	struct crypto_wait cocci_id/* drivers/md/dm-crypt.c 717 */;
	struct scatterlist cocci_id/* drivers/md/dm-crypt.c 716 */;
	u8 cocci_id/* drivers/md/dm-crypt.c 714 */[MAX_CIPHER_BLOCKSIZE]__aligned(__alignof__(__le64));
	__le64 cocci_id/* drivers/md/dm-crypt.c 646 */;
	struct dm_crypt_io {
		struct crypt_config *cc;
		struct bio *base_bio;
		u8 *integrity_metadata;
		bool integrity_metadata_from_pool;
		struct work_struct work;
		struct convert_context ctx;
		atomic_t io_pending;
		blk_status_t error;
		sector_t sector;
		struct rb_node rb_node;
	} cocci_id/* drivers/md/dm-crypt.c 64 */;
	u8 cocci_id/* drivers/md/dm-crypt.c 609 */[TCW_WHITENING_SIZE];
	struct iv_tcw_private *cocci_id/* drivers/md/dm-crypt.c 552 */;
	struct convert_context {
		struct completion restart;
		struct bio *bio_in;
		struct bio *bio_out;
		struct bvec_iter iter_in;
		struct bvec_iter iter_out;
		u64 cc_sector;
		atomic_t cc_pending;
		union {
			struct skcipher_request *req;
			struct aead_request *req_aead;
		} r;
	} cocci_id/* drivers/md/dm-crypt.c 46 */;
	__le32 cocci_id/* drivers/md/dm-crypt.c 454 */[4];
	struct md5_state cocci_id/* drivers/md/dm-crypt.c 453 */;
	struct iv_lmk_private *cocci_id/* drivers/md/dm-crypt.c 395 */;
	__be64 *cocci_id/* drivers/md/dm-crypt.c 367 */;
	__be64 cocci_id/* drivers/md/dm-crypt.c 362 */;
	void __exit cocci_id/* drivers/md/dm-crypt.c 2987 */;
	int __init cocci_id/* drivers/md/dm-crypt.c 2976 */;
	struct target_type cocci_id/* drivers/md/dm-crypt.c 2960 */;
	unsigned short cocci_id/* drivers/md/dm-crypt.c 2954 */;
	struct queue_limits *cocci_id/* drivers/md/dm-crypt.c 2941 */;
	__le32 *cocci_id/* drivers/md/dm-crypt.c 294 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-crypt.c 2934 */;
	status_type_t cocci_id/* drivers/md/dm-crypt.c 2808 */;
	struct dm_crypt_io cocci_id/* drivers/md/dm-crypt.c 2645 */;
	struct dm_crypt_request cocci_id/* drivers/md/dm-crypt.c 2616 */;
	struct skcipher_request cocci_id/* drivers/md/dm-crypt.c 2612 */;
	struct aead_request cocci_id/* drivers/md/dm-crypt.c 2608 */;
	char cocci_id/* drivers/md/dm-crypt.c 2563 */;
	size_t cocci_id/* drivers/md/dm-crypt.c 2562 */;
	struct dm_target *cocci_id/* drivers/md/dm-crypt.c 2554 */;
	char **cocci_id/* drivers/md/dm-crypt.c 2554 */;
	const struct dm_arg cocci_id/* drivers/md/dm-crypt.c 2479 */[];
	struct dm_arg_set cocci_id/* drivers/md/dm-crypt.c 2478 */;
	u8 cocci_id/* drivers/md/dm-crypt.c 2470 */;
	struct crypto_aead *cocci_id/* drivers/md/dm-crypt.c 234 */;
	struct crypto_skcipher *cocci_id/* drivers/md/dm-crypt.c 229 */;
	struct crypt_config *cocci_id/* drivers/md/dm-crypt.c 229 */;
	struct crypto_ahash *cocci_id/* drivers/md/dm-crypt.c 2230 */;
	struct scatterlist *cocci_id/* drivers/md/dm-crypt.c 223 */(struct crypt_config *cc,
								    struct scatterlist *sg);
	void cocci_id/* drivers/md/dm-crypt.c 222 */(struct dm_crypt_io *io);
	void cocci_id/* drivers/md/dm-crypt.c 221 */(struct dm_crypt_io *,
						     struct bio *);
	u64 cocci_id/* drivers/md/dm-crypt.c 2171 */;
	volatile unsigned long cocci_id/* drivers/md/dm-crypt.c 217 */;
	unsigned long cocci_id/* drivers/md/dm-crypt.c 2073 */;
	const struct user_key_payload *cocci_id/* drivers/md/dm-crypt.c 1907 */;
	struct key *cocci_id/* drivers/md/dm-crypt.c 1906 */;
	bool cocci_id/* drivers/md/dm-crypt.c 1894 */;
	const char *cocci_id/* drivers/md/dm-crypt.c 1894 */;
	struct rtattr *cocci_id/* drivers/md/dm-crypt.c 1840 */;
	struct crypto_authenc_key_param *cocci_id/* drivers/md/dm-crypt.c 1839 */;
	const void *cocci_id/* drivers/md/dm-crypt.c 1836 */;
	struct crypto_authenc_key_param cocci_id/* drivers/md/dm-crypt.c 1828 */;
	char *cocci_id/* drivers/md/dm-crypt.c 1813 */;
	int cocci_id/* drivers/md/dm-crypt.c 1813 */;
	struct work_struct *cocci_id/* drivers/md/dm-crypt.c 1706 */;
	struct crypto_async_request *cocci_id/* drivers/md/dm-crypt.c 1666 */;
	struct rb_node **cocci_id/* drivers/md/dm-crypt.c 1563 */;
	struct blk_plug cocci_id/* drivers/md/dm-crypt.c 1512 */;
	struct rb_root cocci_id/* drivers/md/dm-crypt.c 1511 */;
	struct dm_crypt_io *cocci_id/* drivers/md/dm-crypt.c 1438 */;
	struct bio *cocci_id/* drivers/md/dm-crypt.c 1438 */;
	void cocci_id/* drivers/md/dm-crypt.c 1438 */;
	struct bvec_iter_all cocci_id/* drivers/md/dm-crypt.c 1343 */;
	struct bio_vec *cocci_id/* drivers/md/dm-crypt.c 1342 */;
	struct crypt_config {
		struct dm_dev *dev;
		sector_t start;
		struct percpu_counter n_allocated_pages;
		struct workqueue_struct *io_queue;
		struct workqueue_struct *crypt_queue;
		spinlock_t write_thread_lock;
		struct task_struct *write_thread;
		struct rb_root write_tree;
		char *cipher_string;
		char *cipher_auth;
		char *key_string;
		const struct crypt_iv_operations *iv_gen_ops;
		union {
			struct iv_benbi_private benbi;
			struct iv_lmk_private lmk;
			struct iv_tcw_private tcw;
		} iv_gen_private;
		u64 iv_offset;
		unsigned int iv_size;
		unsigned short int sector_size;
		unsigned char sector_shift;
		union {
			struct crypto_skcipher **tfms;
			struct crypto_aead **tfms_aead;
		} cipher_tfm;
		unsigned tfms_count;
		unsigned long cipher_flags;
		unsigned int dmreq_start;
		unsigned int per_bio_data_size;
		unsigned long flags;
		unsigned int key_size;
		unsigned int key_parts;
		unsigned int key_extra_size;
		unsigned int key_mac_size;
		unsigned int integrity_tag_size;
		unsigned int integrity_iv_size;
		unsigned int on_disk_tag_size;
		unsigned tag_pool_max_sectors;
		mempool_t tag_pool;
		mempool_t req_pool;
		mempool_t page_pool;
		struct bio_set bs;
		struct mutex bio_alloc_lock;
		u8 *authenc_key;
		u8 key[0];
	} cocci_id/* drivers/md/dm-crypt.c 133 */;
	struct page *cocci_id/* drivers/md/dm-crypt.c 1297 */;
	gfp_t cocci_id/* drivers/md/dm-crypt.c 1295 */;
	unsigned int cocci_id/* drivers/md/dm-crypt.c 1294 */;
	unsigned cocci_id/* drivers/md/dm-crypt.c 1290 */;
	void cocci_id/* drivers/md/dm-crypt.c 1271 */(struct crypt_config *cc,
						      struct bio *clone);
	enum cipher_flags{CRYPT_MODE_INTEGRITY_AEAD, CRYPT_IV_LARGE_SECTORS,} cocci_id/* drivers/md/dm-crypt.c 125 */;
	enum flags{DM_CRYPT_SUSPENDED, DM_CRYPT_KEY_VALID, DM_CRYPT_SAME_CPU, DM_CRYPT_NO_OFFLOAD,} cocci_id/* drivers/md/dm-crypt.c 122 */;
	blk_status_t cocci_id/* drivers/md/dm-crypt.c 1207 */;
	void *cocci_id/* drivers/md/dm-crypt.c 1196 */;
	struct convert_context *cocci_id/* drivers/md/dm-crypt.c 1170 */;
	void cocci_id/* drivers/md/dm-crypt.c 1130 */(struct crypto_async_request *async_req,
						      int error);
	struct iv_tcw_private {
		struct crypto_shash *crc32_tfm;
		u8 *iv_seed;
		u8 *whitening;
	} cocci_id/* drivers/md/dm-crypt.c 112 */;
	struct scatterlist *cocci_id/* drivers/md/dm-crypt.c 1063 */;
	struct iv_lmk_private {
		struct crypto_shash *hash_tfm;
		u8 *seed;
	} cocci_id/* drivers/md/dm-crypt.c 106 */;
	struct skcipher_request *cocci_id/* drivers/md/dm-crypt.c 1058 */;
	unsigned long long cocci_id/* drivers/md/dm-crypt.c 1044 */;
	char cocci_id/* drivers/md/dm-crypt.c 1042 */[BDEVNAME_SIZE];
	struct iv_benbi_private {
		int shift;
	} cocci_id/* drivers/md/dm-crypt.c 101 */;
}
