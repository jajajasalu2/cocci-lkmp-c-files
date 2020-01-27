cocci_test_suite() {
	int cocci_id/* drivers/crypto/qcom-rng.c 98 */;
	struct qcom_rng_ctx *cocci_id/* drivers/crypto/qcom-rng.c 74 */;
	u8 *cocci_id/* drivers/crypto/qcom-rng.c 72 */;
	const u8 *cocci_id/* drivers/crypto/qcom-rng.c 71 */;
	unsigned int cocci_id/* drivers/crypto/qcom-rng.c 71 */;
	struct crypto_rng *cocci_id/* drivers/crypto/qcom-rng.c 70 */;
	struct qcom_rng *cocci_id/* drivers/crypto/qcom-rng.c 39 */;
	struct qcom_rng_ctx {
		struct qcom_rng *rng;
	} cocci_id/* drivers/crypto/qcom-rng.c 35 */;
	struct qcom_rng {
		struct mutex lock;
		void __iomem *base;
		struct clk *clk;
		unsigned int skip_init;
	} cocci_id/* drivers/crypto/qcom-rng.c 28 */;
	struct platform_driver cocci_id/* drivers/crypto/qcom-rng.c 214 */;
	void *cocci_id/* drivers/crypto/qcom-rng.c 208 */;
	const struct of_device_id cocci_id/* drivers/crypto/qcom-rng.c 207 */[];
	const struct acpi_device_id cocci_id/* drivers/crypto/qcom-rng.c 200 */[];
	unsigned long cocci_id/* drivers/crypto/qcom-rng.c 178 */;
	struct platform_device *cocci_id/* drivers/crypto/qcom-rng.c 154 */;
	struct qcom_rng_ctx cocci_id/* drivers/crypto/qcom-rng.c 148 */;
	struct rng_alg cocci_id/* drivers/crypto/qcom-rng.c 139 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/qcom-rng.c 127 */;
	u32 cocci_id/* drivers/crypto/qcom-rng.c 100 */;
}
