cocci_test_suite() {
	struct hifn_dma cocci_id/* drivers/crypto/hifn_795x.c 888 */;
	char *cocci_id/* drivers/crypto/hifn_795x.c 840 */;
	u32 cocci_id/* drivers/crypto/hifn_795x.c 839 */;
	u32 *cocci_id/* drivers/crypto/hifn_795x.c 765 */;
	s64 cocci_id/* drivers/crypto/hifn_795x.c 753 */;
	struct hwrng *cocci_id/* drivers/crypto/hifn_795x.c 750 */;
	struct pci2id {
		u_short pci_vendor;
		u_short pci_prod;
		char card_id[13];
	} cocci_id/* drivers/crypto/hifn_795x.c 730 */[];
	u_int cocci_id/* drivers/crypto/hifn_795x.c 710 */;
	struct hifn_crypto_alg cocci_id/* drivers/crypto/hifn_795x.c 627 */;
	struct hifn_request_context {
		u8 *iv;
		unsigned int ivsize;
		u8 op,type,mode,unused;
		struct hifn_cipher_walk walk;
	} cocci_id/* drivers/crypto/hifn_795x.c 620 */;
	struct hifn_context {
		u8 key[HIFN_MAX_CRYPT_KEY_LENGTH];
		struct hifn_device *dev;
		unsigned int keysize;
	} cocci_id/* drivers/crypto/hifn_795x.c 614 */;
	struct hifn_cipher_walk {
		struct scatterlist cache[ASYNC_SCATTERLIST_CACHE];
		u32 flags;
		int num;
	} cocci_id/* drivers/crypto/hifn_795x.c 608 */;
	struct hifn_crypto_alg {
		struct list_head entry;
		struct skcipher_alg alg;
		struct hifn_device *dev;
	} cocci_id/* drivers/crypto/hifn_795x.c 598 */;
	struct hifn_crypt_result {
		volatile __le16 flags;
		volatile __le16 reserved;
	} cocci_id/* drivers/crypto/hifn_795x.c 580 */;
	struct hifn_mac_result {
		volatile __le16 flags;
		volatile __le16 reserved;
	} cocci_id/* drivers/crypto/hifn_795x.c 571 */;
	struct hifn_comp_result {
		volatile __le16 flags;
		volatile __le16 crc;
	} cocci_id/* drivers/crypto/hifn_795x.c 560 */;
	struct hifn_base_result {
		volatile __le16 flags;
		volatile __le16 session;
		volatile __le16 src_cnt;
		volatile __le16 dst_cnt;
	} cocci_id/* drivers/crypto/hifn_795x.c 547 */;
	struct hifn_comp_command {
		volatile __le16 masks;
		volatile __le16 header_skip;
		volatile __le16 source_count;
		volatile __le16 reserved;
	} cocci_id/* drivers/crypto/hifn_795x.c 529 */;
	struct hifn_mac_command {
		volatile __le16 masks;
		volatile __le16 header_skip;
		volatile __le16 source_count;
		volatile __le16 reserved;
	} cocci_id/* drivers/crypto/hifn_795x.c 501 */;
	struct hifn_crypt_command {
		volatile __le16 masks;
		volatile __le16 header_skip;
		volatile __le16 source_count;
		volatile __le16 reserved;
	} cocci_id/* drivers/crypto/hifn_795x.c 471 */;
	struct hifn_base_command {
		volatile __le16 masks;
		volatile __le16 session_num;
		volatile __le16 total_source_count;
		volatile __le16 total_dest_count;
	} cocci_id/* drivers/crypto/hifn_795x.c 449 */;
	struct hifn_device {
		char name[HIFN_NAMESIZE];
		int irq;
		struct pci_dev *pdev;
		void __iomem *bar[3];
		void *desc_virt;
		dma_addr_t desc_dma;
		u32 dmareg;
		void *sa[HIFN_D_RES_RSIZE];
		spinlock_t lock;
		u32 flags;
		int active,started;
		struct delayed_work work;
		unsigned long reset;
		unsigned long success;
		unsigned long prev_success;
		u8 snum;
		struct tasklet_struct tasklet;
		struct crypto_queue queue;
		struct list_head alg_list;
		unsigned int pk_clk_freq;
#ifdef CONFIG_CRYPTO_DEV_HIFN_795X_RNG
		unsigned int rng_wait_time;
		ktime_t rngtime;
		struct hwrng rng;
#endif
	} cocci_id/* drivers/crypto/hifn_795x.c 400 */;
	struct hifn_dma {
		struct hifn_desc cmdr[HIFN_D_CMD_RSIZE + 1];
		struct hifn_desc srcr[HIFN_D_SRC_RSIZE + 1];
		struct hifn_desc dstr[HIFN_D_DST_RSIZE + 1];
		struct hifn_desc resr[HIFN_D_RES_RSIZE + 1];
		u8 command_bufs[HIFN_D_CMD_RSIZE][HIFN_MAX_COMMAND];
		u8 result_bufs[HIFN_D_CMD_RSIZE][HIFN_MAX_RESULT];
		volatile int cmdi,srci,dsti,resi;
		volatile int cmdu,srcu,dstu,resu;
		int cmdk,srck,dstk,resk;
	} cocci_id/* drivers/crypto/hifn_795x.c 374 */;
	struct hifn_desc {
		volatile __le32 l;
		volatile __le32 p;
	} cocci_id/* drivers/crypto/hifn_795x.c 369 */;
	atomic_t cocci_id/* drivers/crypto/hifn_795x.c 32 */;
	char cocci_id/* drivers/crypto/hifn_795x.c 27 */[sizeof("extNNN")];
	void __exit cocci_id/* drivers/crypto/hifn_795x.c 2681 */;
	dma_addr_t cocci_id/* drivers/crypto/hifn_795x.c 2646 */;
	int __init cocci_id/* drivers/crypto/hifn_795x.c 2640 */;
	struct pci_driver cocci_id/* drivers/crypto/hifn_795x.c 2633 */;
	struct pci_device_id cocci_id/* drivers/crypto/hifn_795x.c 2626 */[];
	struct hifn_device cocci_id/* drivers/crypto/hifn_795x.c 2492 */;
	struct crypto_alg cocci_id/* drivers/crypto/hifn_795x.c 2492 */;
	char cocci_id/* drivers/crypto/hifn_795x.c 2466 */[8];
	const struct pci_device_id *cocci_id/* drivers/crypto/hifn_795x.c 2462 */;
	struct pci_dev *cocci_id/* drivers/crypto/hifn_795x.c 2462 */;
	struct hifn_context cocci_id/* drivers/crypto/hifn_795x.c 2401 */;
	struct hifn_crypto_alg *cocci_id/* drivers/crypto/hifn_795x.c 2384 */;
	const struct hifn_alg_template *cocci_id/* drivers/crypto/hifn_795x.c 2382 */;
	struct hifn_device *cocci_id/* drivers/crypto/hifn_795x.c 2382 */;
	int cocci_id/* drivers/crypto/hifn_795x.c 2382 */;
	struct hifn_request_context cocci_id/* drivers/crypto/hifn_795x.c 2377 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/hifn_795x.c 2372 */;
	const struct hifn_alg_template cocci_id/* drivers/crypto/hifn_795x.c 2233 */[];
	struct hifn_alg_template {
		char name[CRYPTO_MAX_ALG_NAME];
		char drv_name[CRYPTO_MAX_ALG_NAME];
		unsigned int bsize;
		struct skcipher_alg skcipher;
	} cocci_id/* drivers/crypto/hifn_795x.c 2226 */;
	struct hifn_context *cocci_id/* drivers/crypto/hifn_795x.c 1962 */;
	const u8 *cocci_id/* drivers/crypto/hifn_795x.c 1959 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/hifn_795x.c 1959 */;
	struct hifn_desc *cocci_id/* drivers/crypto/hifn_795x.c 1919 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/hifn_795x.c 1913 */;
	irqreturn_t cocci_id/* drivers/crypto/hifn_795x.c 1847 */;
	void *cocci_id/* drivers/crypto/hifn_795x.c 1847 */;
	struct delayed_work *cocci_id/* drivers/crypto/hifn_795x.c 1777 */;
	struct work_struct *cocci_id/* drivers/crypto/hifn_795x.c 1775 */;
	struct hifn_dma *cocci_id/* drivers/crypto/hifn_795x.c 1711 */;
	struct hifn_request_context *cocci_id/* drivers/crypto/hifn_795x.c 1666 */;
	unsigned long cocci_id/* drivers/crypto/hifn_795x.c 1652 */;
	unsigned cocci_id/* drivers/crypto/hifn_795x.c 1458 */;
	unsigned int cocci_id/* drivers/crypto/hifn_795x.c 1441 */;
	struct scatterlist *cocci_id/* drivers/crypto/hifn_795x.c 1440 */;
	struct hifn_cipher_walk *cocci_id/* drivers/crypto/hifn_795x.c 1438 */;
	struct skcipher_request *cocci_id/* drivers/crypto/hifn_795x.c 1437 */;
	unsigned int *cocci_id/* drivers/crypto/hifn_795x.c 1408 */;
	void cocci_id/* drivers/crypto/hifn_795x.c 1393 */;
	struct page *cocci_id/* drivers/crypto/hifn_795x.c 1378 */;
	gfp_t cocci_id/* drivers/crypto/hifn_795x.c 1369 */;
	struct hifn_crypt_command cocci_id/* drivers/crypto/hifn_795x.c 1090 */;
	struct hifn_crypt_command *cocci_id/* drivers/crypto/hifn_795x.c 1076 */;
	struct hifn_base_command cocci_id/* drivers/crypto/hifn_795x.c 1068 */;
	struct hifn_base_command *cocci_id/* drivers/crypto/hifn_795x.c 1052 */;
	u8 cocci_id/* drivers/crypto/hifn_795x.c 1050 */;
	u16 cocci_id/* drivers/crypto/hifn_795x.c 1050 */;
	u8 *cocci_id/* drivers/crypto/hifn_795x.c 1049 */;
}
