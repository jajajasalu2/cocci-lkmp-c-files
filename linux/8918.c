cocci_test_suite() {
	enum mdio_c45_op_seq{MDIO_C45_WRITE_ADDR=0, MDIO_C45_WRITE_DATA, MDIO_C45_READ_INCREMENT, MDIO_C45_READ,} cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 80 */;
	enum mdio_c22_op_seq{MDIO_C22_WRITE=1, MDIO_C22_READ=2,} cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 75 */;
	enum mdio_st_clause{MDIO_ST_CLAUSE_45=0, MDIO_ST_CLAUSE_22,} cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 70 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 560 */;
	const struct acpi_device_id cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 554 */[];
	const struct of_device_id cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 547 */[];
	struct of_phandle_args cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 458 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 423 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 420 */;
	int cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 420 */;
	acpi_status cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 397 */;
	struct hns_mdio_device {
		u8 __iomem *vbase;
		struct regmap *subctrl_vbase;
		struct hns_mdio_sc_reg sc_reg;
	} cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 37 */;
	const struct hns_mdio_sc_reg *cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 353 */;
	struct hns_mdio_sc_reg {
		u16 mdio_clk_en;
		u16 mdio_clk_dis;
		u16 mdio_reset_req;
		u16 mdio_reset_dreq;
		u16 mdio_clk_st;
		u16 mdio_reset_st;
	} cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 28 */;
	u32 cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 195 */;
	u8 cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 193 */;
	u16 cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 193 */;
	struct hns_mdio_device *cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 192 */;
	void cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 192 */;
	u8 __iomem *cocci_id/* drivers/net/ethernet/hisilicon/hns_mdio.c 128 */;
}
