cocci_test_suite() {
	void cocci_id/* drivers/char/hw_random/imx-rngc.c 63 */;
	struct imx_rngc {
		struct device *dev;
		struct clk *clk;
		void __iomem *base;
		struct hwrng rng;
		struct completion rng_op_done;
		u32 err_reg;
	} cocci_id/* drivers/char/hw_random/imx-rngc.c 49 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/imx-rngc.c 304 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/imx-rngc.c 298 */[];
	struct device *cocci_id/* drivers/char/hw_random/imx-rngc.c 287 */;
	int __maybe_unused cocci_id/* drivers/char/hw_random/imx-rngc.c 287 */;
	int __exit cocci_id/* drivers/char/hw_random/imx-rngc.c 267 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/imx-rngc.c 196 */;
	u32 cocci_id/* drivers/char/hw_random/imx-rngc.c 168 */;
	struct imx_rngc cocci_id/* drivers/char/hw_random/imx-rngc.c 167 */;
	struct imx_rngc *cocci_id/* drivers/char/hw_random/imx-rngc.c 167 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/imx-rngc.c 165 */;
	int cocci_id/* drivers/char/hw_random/imx-rngc.c 165 */;
	irqreturn_t cocci_id/* drivers/char/hw_random/imx-rngc.c 145 */;
	void *cocci_id/* drivers/char/hw_random/imx-rngc.c 145 */;
	u32 *cocci_id/* drivers/char/hw_random/imx-rngc.c 134 */;
	unsigned int cocci_id/* drivers/char/hw_random/imx-rngc.c 117 */;
	bool cocci_id/* drivers/char/hw_random/imx-rngc.c 114 */;
	size_t cocci_id/* drivers/char/hw_random/imx-rngc.c 114 */;
}
