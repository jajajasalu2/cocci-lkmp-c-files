cocci_test_suite() {
	int *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 99 */;
	struct mx25_gcq_priv *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 98 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 97 */;
	struct device *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 96 */;
	int cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 96 */;
	irqreturn_t cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 72 */;
	void *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 72 */;
	const char *const cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 65 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 54 */[MX25_NUM_CFGS];
	struct platform_driver cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 408 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 402 */[];
	struct mx25_gcq_priv {
		struct regmap *regs;
		struct completion completed;
		struct clk *clk;
		int irq;
		struct regulator *vref[4];
		u32 channel_vref_mv[MX25_NUM_CFGS];
	} cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 36 */;
	void __iomem *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 298 */;
	struct resource *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 297 */;
	struct mx25_tsadc *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 295 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 293 */;
	struct platform_device *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 291 */;
	enum mx25_gcq_cfgs{MX25_CFG_XP=0, MX25_CFG_YP, MX25_CFG_XN, MX25_CFG_YN, MX25_CFG_WIPER, MX25_CFG_INAUX0, MX25_CFG_INAUX1, MX25_CFG_INAUX2, MX25_NUM_CFGS,} cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 24 */;
	const char *const cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 22 */;
	unsigned int cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 172 */[4];
	struct device_node *cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 169 */;
	const struct regmap_config cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 159 */;
	const struct iio_info cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 155 */;
	u32 cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 102 */;
	long cocci_id/* drivers/iio/adc/fsl-imx25-gcq.c 101 */;
}
