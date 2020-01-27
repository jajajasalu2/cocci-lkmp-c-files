cocci_test_suite() {
	const struct {
		u8 value;
		const char *error_text;
	} cocci_id/* drivers/crypto/caam/error.c 62 */[];
	const struct stat_src {
		int (*report_ssed)(struct device *jrdev, const u32 status,
				   const char *error);
		const char *error;
	} cocci_id/* drivers/crypto/caam/error.c 347 */[16];
	u32 cocci_id/* drivers/crypto/caam/error.c 345 */;
	struct device *cocci_id/* drivers/crypto/caam/error.c 345 */;
	char cocci_id/* drivers/crypto/caam/error.c 227 */[3];
	char *cocci_id/* drivers/crypto/caam/error.c 225 */;
	u8 cocci_id/* drivers/crypto/caam/error.c 220 */;
	const u32 cocci_id/* drivers/crypto/caam/error.c 217 */;
	void *cocci_id/* drivers/crypto/caam/error.c 21 */;
	bool cocci_id/* drivers/crypto/caam/error.c 18 */;
	size_t cocci_id/* drivers/crypto/caam/error.c 18 */;
	struct scatterlist *cocci_id/* drivers/crypto/caam/error.c 17 */;
	const char *const cocci_id/* drivers/crypto/caam/error.c 169 */[];
	const char *cocci_id/* drivers/crypto/caam/error.c 16 */;
	int cocci_id/* drivers/crypto/caam/error.c 16 */;
	void cocci_id/* drivers/crypto/caam/error.c 16 */;
}
