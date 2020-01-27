cocci_test_suite() {
	const struct vio_device_id *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 974 */;
	struct nx842_crypto_ctx cocci_id/* drivers/crypto/nx/nx-842-pseries.c 964 */;
	struct crypto_alg cocci_id/* drivers/crypto/nx/nx-842-pseries.c 959 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 954 */;
	struct nx842_workmem cocci_id/* drivers/crypto/nx/nx-842-pseries.c 948 */;
	struct nx842_driver cocci_id/* drivers/crypto/nx/nx-842-pseries.c 945 */;
	struct attribute_group cocci_id/* drivers/crypto/nx/nx-842-pseries.c 940 */;
	struct attribute *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 929 */[];
	struct ibm_nx842_counters {
		atomic64_t comp_complete;
		atomic64_t comp_failed;
		atomic64_t decomp_complete;
		atomic64_t decomp_failed;
		atomic64_t swdecomp;
		atomic64_t comp_times[32];
		atomic64_t decomp_times[32];
	} cocci_id/* drivers/crypto/nx/nx-842-pseries.c 91 */;
	struct device_attribute *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 887 */;
	char *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 887 */;
	ssize_t cocci_id/* drivers/crypto/nx/nx-842-pseries.c 886 */;
	struct device_attribute cocci_id/* drivers/crypto/nx/nx-842-pseries.c 881 */;
	ssize_t cocci_id/* drivers/crypto/nx/nx-842-pseries.c 878 */(struct device *,
								     struct device_attribute *,
								     char *);
	struct notifier_block cocci_id/* drivers/crypto/nx/nx-842-pseries.c 846 */;
	struct device_node *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 828 */;
	struct nx842_devdata *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 827 */;
	struct of_reconfig_data *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 826 */;
	void *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 824 */;
	struct notifier_block *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 823 */;
	struct property *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 710 */;
	const struct maxsynccop_t *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 651 */;
	struct nx842_workmem {
		char slin[4096];
		char slout[4096];
		struct nx_csbcpb csbcpb;
		char padding[WORKMEM_ALIGN];
	}__aligned(WORKMEM_ALIGN) cocci_id/* drivers/crypto/nx/nx-842-pseries.c 65 */;
	const struct maxsynccop_t {
		__be32 comp_elements;
		__be32 comp_data_limit;
		__be32 comp_sg_limit;
		__be32 decomp_elements;
		__be32 decomp_data_limit;
		__be32 decomp_sg_limit;
	} *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 634 */;
	const unsigned int cocci_id/* drivers/crypto/nx/nx-842-pseries.c 584 */;
	size_t cocci_id/* drivers/crypto/nx/nx-842-pseries.c 551 */;
	const char *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 549 */;
	long cocci_id/* drivers/crypto/nx/nx-842-pseries.c 347 */;
	bool cocci_id/* drivers/crypto/nx/nx-842-pseries.c 29 */;
	unsigned int *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 29 */;
	unsigned long cocci_id/* drivers/crypto/nx/nx-842-pseries.c 29 */;
	int cocci_id/* drivers/crypto/nx/nx-842-pseries.c 29 */;
	struct vio_pfo_op cocci_id/* drivers/crypto/nx/nx-842-pseries.c 288 */;
	struct nx_csbcpb *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 285 */;
	struct nx842_scatterlist cocci_id/* drivers/crypto/nx/nx-842-pseries.c 284 */;
	struct nx842_workmem *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 283 */;
	struct device *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 282 */;
	unsigned char *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 278 */;
	const unsigned char *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 277 */;
	struct nx842_constraints cocci_id/* drivers/crypto/nx/nx-842-pseries.c 22 */;
	struct cop_status_block *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 195 */;
	struct nx842_slentry *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 173 */;
	struct nx842_scatterlist *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 170 */;
	struct nx842_slentry cocci_id/* drivers/crypto/nx/nx-842-pseries.c 166 */;
	struct nx842_scatterlist {
		int entry_nr;
		struct nx842_slentry *entries;
	} cocci_id/* drivers/crypto/nx/nx-842-pseries.c 157 */;
	struct nx842_slentry {
		__be64 ptr;
		__be64 len;
	} cocci_id/* drivers/crypto/nx/nx-842-pseries.c 151 */;
	struct vio_dev *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 145 */;
	atomic64_t *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 125 */;
	unsigned int cocci_id/* drivers/crypto/nx/nx-842-pseries.c 125 */;
	void cocci_id/* drivers/crypto/nx/nx-842-pseries.c 125 */;
	const struct nx842_devdata *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 113 */;
	void __exit cocci_id/* drivers/crypto/nx/nx-842-pseries.c 1111 */;
	int __init cocci_id/* drivers/crypto/nx/nx-842-pseries.c 1083 */;
	struct vio_driver cocci_id/* drivers/crypto/nx/nx-842-pseries.c 1075 */;
	const struct vio_device_id cocci_id/* drivers/crypto/nx/nx-842-pseries.c 1070 */[];
	struct nx842_devdata {
		struct vio_dev *vdev;
		struct device *dev;
		struct ibm_nx842_counters *counters;
		unsigned int max_sg_len;
		unsigned int max_sync_size;
		unsigned int max_sync_sg;
	}__rcu *cocci_id/* drivers/crypto/nx/nx-842-pseries.c 101 */;
}
