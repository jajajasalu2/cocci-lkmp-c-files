cocci_test_suite() {
	struct nx842_crypto_ctx cocci_id/* drivers/crypto/nx/nx-842-powernv.c 996 */;
	struct crypto_alg cocci_id/* drivers/crypto/nx/nx-842-powernv.c 991 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 986 */;
	struct nx842_workmem cocci_id/* drivers/crypto/nx/nx-842-powernv.c 980 */;
	struct nx842_driver cocci_id/* drivers/crypto/nx/nx-842-powernv.c 977 */;
	struct nx842_constraints cocci_id/* drivers/crypto/nx/nx-842-powernv.c 970 */;
	int __init cocci_id/* drivers/crypto/nx/nx-842-powernv.c 903 */;
	const char *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 754 */;
	struct vas_rx_win_attr cocci_id/* drivers/crypto/nx/nx-842-powernv.c 750 */;
	int *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 747 */;
	struct vas_tx_win_attr cocci_id/* drivers/crypto/nx/nx-842-powernv.c 680 */;
	struct vas_window *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 677 */;
	int cocci_id/* drivers/crypto/nx/nx-842-powernv.c 670 */;
	struct nx842_coproc *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 669 */;
	void cocci_id/* drivers/crypto/nx/nx-842-powernv.c 669 */;
	int (*cocci_id/* drivers/crypto/nx/nx-842-powernv.c 64 */)(const unsigned char *in,
								   unsigned int inlen,
								   unsigned char *out,
								   unsigned int *outlenp,
								   void *workmem,
								   int fc);
	u32 cocci_id/* drivers/crypto/nx/nx-842-powernv.c 457 */;
	void *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 451 */;
	unsigned int *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 450 */;
	struct nx842_coproc {
		unsigned int chip_id;
		unsigned int ct;
		unsigned int ci;
		struct {
			struct vas_window *rxwin;
			int id;
		} vas;
		struct list_head list;
	} cocci_id/* drivers/crypto/nx/nx-842-powernv.c 43 */;
	u64 cocci_id/* drivers/crypto/nx/nx-842-powernv.c 390 */;
	struct coprocessor_status_block *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 389 */;
	struct coprocessor_request_block *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 388 */;
	struct nx842_workmem *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 386 */;
	unsigned char *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 385 */;
	const unsigned char *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 384 */;
	unsigned int cocci_id/* drivers/crypto/nx/nx-842-powernv.c 384 */;
	struct nx842_workmem {
		struct coprocessor_request_block crb;
		struct data_descriptor_entry ddl_in[DDL_LEN_MAX];
		struct data_descriptor_entry ddl_out[DDL_LEN_MAX];
		ktime_t start;
		char padding[WORKMEM_ALIGN];
	}__packed __aligned(WORKMEM_ALIGN) cocci_id/* drivers/crypto/nx/nx-842-powernv.c 31 */;
	long cocci_id/* drivers/crypto/nx/nx-842-powernv.c 199 */;
	ktime_t cocci_id/* drivers/crypto/nx/nx-842-powernv.c 183 */;
	unsigned long cocci_id/* drivers/crypto/nx/nx-842-powernv.c 118 */;
	bool cocci_id/* drivers/crypto/nx/nx-842-powernv.c 116 */;
	struct data_descriptor_entry *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 113 */;
	void __exit cocci_id/* drivers/crypto/nx/nx-842-powernv.c 1056 */;
	struct device_node *cocci_id/* drivers/crypto/nx/nx-842-powernv.c 1007 */;
	__typeof__(struct vas_window *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
