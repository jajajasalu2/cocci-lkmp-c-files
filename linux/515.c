cocci_test_suite() {
	unsigned int cocci_id/* crypto/algboss.c 96 */;
	const char *cocci_id/* crypto/algboss.c 94 */;
	struct task_struct *cocci_id/* crypto/algboss.c 92 */;
	struct crypto_larval *cocci_id/* crypto/algboss.c 90 */;
	struct crypto_instance *cocci_id/* crypto/algboss.c 61 */;
	struct crypto_template *cocci_id/* crypto/algboss.c 60 */;
	struct cryptomgr_param *cocci_id/* crypto/algboss.c 59 */;
	struct crypto_test_param {
		char driver[CRYPTO_MAX_ALG_NAME];
		char alg[CRYPTO_MAX_ALG_NAME];
		u32 type;
	} cocci_id/* crypto/algboss.c 51 */;
	int cocci_id/* crypto/algboss.c 290 */;
	void __exit cocci_id/* crypto/algboss.c 288 */;
	void cocci_id/* crypto/algboss.c 288 */;
	int __init cocci_id/* crypto/algboss.c 283 */;
	struct notifier_block cocci_id/* crypto/algboss.c 279 */;
	void *cocci_id/* crypto/algboss.c 265 */;
	struct notifier_block *cocci_id/* crypto/algboss.c 264 */;
	unsigned long cocci_id/* crypto/algboss.c 264 */;
	u32 cocci_id/* crypto/algboss.c 231 */;
	struct crypto_test_param *cocci_id/* crypto/algboss.c 230 */;
	struct cryptomgr_param {
		struct rtattr *tb[CRYPTO_MAX_ATTRS + 2];
		struct {
			struct rtattr attr;
			struct crypto_attr_type data;
		} type;
		union {
			struct rtattr attr;
			struct {
				struct rtattr attr;
				struct crypto_attr_alg data;
			} alg;
			struct {
				struct rtattr attr;
				struct crypto_attr_u32 data;
			} nu32;
		} attrs[CRYPTO_MAX_ATTRS];
		char template[CRYPTO_MAX_ALG_NAME];
		struct crypto_larval *larval;
		u32 otype;
		u32 omask;
	} cocci_id/* crypto/algboss.c 23 */;
	struct crypto_alg *cocci_id/* crypto/algboss.c 227 */;
}
