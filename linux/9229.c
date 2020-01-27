cocci_test_suite() {
	struct fsl_pq_mdio_data {
		unsigned int mii_offset;
		uint32_t __iomem *(*get_tbipa)(void __iomem *p);
		void (*ucc_configure)(phys_addr_t start, phys_addr_t end);
	} cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 81 */;
	struct fsl_pq_mdio_priv {
		void __iomem *map;
		struct fsl_pq_mii __iomem *regs;
	} cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 64 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 528 */;
	struct device *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 516 */;
	struct fsl_pq_mdio {
		u8 res1[16];
		u32 ieventm;
		u32 imaskm;
		u8 res2[4];
		u32 emapm;
		u8 res3[1280];
		struct fsl_pq_mii mii;
		u8 res4[28];
		u32 utbipar;
		u8 res5[2728];
	}__packed cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 48 */;
	const u32 *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 479 */;
	unsigned long long cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 445 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 416 */;
	struct fsl_pq_mdio_priv *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 415 */;
	struct resource cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 413 */;
	struct device_node *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 412 */;
	const struct fsl_pq_mdio_data *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 411 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 409 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 407 */;
	int cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 407 */;
	void *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 396 */;
	struct fsl_pq_mii {
		u32 miimcfg;
		u32 miimcom;
		u32 miimadd;
		u32 miimcon;
		u32 miimstat;
		u32 miimind;
	} cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 39 */;
	bool cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 381 */;
	struct resource *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 377 */;
	uint32_t __iomem *(*cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 376 */)(void __iomem *);
	const u32 cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 375 */;
	void cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 375 */;
	struct fsl_pq_mdio cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 323 */;
	struct fsl_pq_mdio_data cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 307 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 303 */[];
	uint32_t cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 260 */;
	const uint32_t *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 259 */;
	phys_addr_t cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 249 */;
	struct fsl_pq_mdio __iomem *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 233 */;
	uint32_t __iomem *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 220 */;
	void __iomem *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 220 */;
	struct gfar cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 214 */;
	struct gfar __iomem *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 203 */;
	u16 cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 134 */;
	unsigned int cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 133 */;
	struct fsl_pq_mii __iomem *cocci_id/* drivers/net/ethernet/freescale/fsl_pq_mdio.c 132 */;
}
