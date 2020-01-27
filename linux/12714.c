cocci_test_suite() {
	struct qcom_icc_provider cocci_id/* drivers/interconnect/qcom/qcs404.c 99 */;
	struct platform_driver cocci_id/* drivers/interconnect/qcom/qcs404.c 530 */;
	const struct of_device_id cocci_id/* drivers/interconnect/qcom/qcs404.c 522 */[];
	size_t cocci_id/* drivers/interconnect/qcom/qcs404.c 418 */;
	struct qcom_icc_node **cocci_id/* drivers/interconnect/qcom/qcs404.c 415 */;
	struct icc_onecell_data *cocci_id/* drivers/interconnect/qcom/qcs404.c 413 */;
	const struct qcom_icc_desc *cocci_id/* drivers/interconnect/qcom/qcs404.c 412 */;
	struct device *cocci_id/* drivers/interconnect/qcom/qcs404.c 411 */;
	struct platform_device *cocci_id/* drivers/interconnect/qcom/qcs404.c 409 */;
	u64 cocci_id/* drivers/interconnect/qcom/qcs404.c 345 */;
	struct icc_provider *cocci_id/* drivers/interconnect/qcom/qcs404.c 343 */;
	struct qcom_icc_node *cocci_id/* drivers/interconnect/qcom/qcs404.c 342 */;
	struct qcom_icc_provider *cocci_id/* drivers/interconnect/qcom/qcs404.c 341 */;
	u32 *cocci_id/* drivers/interconnect/qcom/qcs404.c 331 */;
	u32 cocci_id/* drivers/interconnect/qcom/qcs404.c 330 */;
	struct icc_node *cocci_id/* drivers/interconnect/qcom/qcs404.c 330 */;
	int cocci_id/* drivers/interconnect/qcom/qcs404.c 330 */;
	struct qcom_icc_desc cocci_id/* drivers/interconnect/qcom/qcs404.c 243 */;
	struct qcom_icc_node *cocci_id/* drivers/interconnect/qcom/qcs404.c 233 */[];
	enum{QCS404_MASTER_AMPSS_M0=1, QCS404_MASTER_GRAPHICS_3D, QCS404_MASTER_MDP_PORT0, QCS404_SNOC_BIMC_1_MAS, QCS404_MASTER_TCU_0, QCS404_MASTER_SPDM, QCS404_MASTER_BLSP_1, QCS404_MASTER_BLSP_2, QCS404_MASTER_XM_USB_HS1, QCS404_MASTER_CRYPTO_CORE0, QCS404_MASTER_SDCC_1, QCS404_MASTER_SDCC_2, QCS404_SNOC_PNOC_MAS, QCS404_MASTER_QPIC, QCS404_MASTER_QDSS_BAM, QCS404_BIMC_SNOC_MAS, QCS404_PNOC_SNOC_MAS, QCS404_MASTER_QDSS_ETR, QCS404_MASTER_EMAC, QCS404_MASTER_PCIE, QCS404_MASTER_USB3, QCS404_PNOC_INT_0, QCS404_PNOC_INT_2, QCS404_PNOC_INT_3, QCS404_PNOC_SLV_0, QCS404_PNOC_SLV_1, QCS404_PNOC_SLV_2, QCS404_PNOC_SLV_3, QCS404_PNOC_SLV_4, QCS404_PNOC_SLV_6, QCS404_PNOC_SLV_7, QCS404_PNOC_SLV_8, QCS404_PNOC_SLV_9, QCS404_PNOC_SLV_10, QCS404_PNOC_SLV_11, QCS404_SNOC_QDSS_INT, QCS404_SNOC_INT_0, QCS404_SNOC_INT_1, QCS404_SNOC_INT_2, QCS404_SLAVE_EBI_CH0, QCS404_BIMC_SNOC_SLV, QCS404_SLAVE_SPDM_WRAPPER, QCS404_SLAVE_PDM, QCS404_SLAVE_PRNG, QCS404_SLAVE_TCSR, QCS404_SLAVE_SNOC_CFG, QCS404_SLAVE_MESSAGE_RAM, QCS404_SLAVE_DISPLAY_CFG, QCS404_SLAVE_GRAPHICS_3D_CFG, QCS404_SLAVE_BLSP_1, QCS404_SLAVE_TLMM_NORTH, QCS404_SLAVE_PCIE_1, QCS404_SLAVE_EMAC_CFG, QCS404_SLAVE_BLSP_2, QCS404_SLAVE_TLMM_EAST, QCS404_SLAVE_TCU, QCS404_SLAVE_PMIC_ARB, QCS404_SLAVE_SDCC_1, QCS404_SLAVE_SDCC_2, QCS404_SLAVE_TLMM_SOUTH, QCS404_SLAVE_USB_HS, QCS404_SLAVE_USB3, QCS404_SLAVE_CRYPTO_0_CFG, QCS404_PNOC_SNOC_SLV, QCS404_SLAVE_APPSS, QCS404_SLAVE_WCSS, QCS404_SNOC_BIMC_1_SLV, QCS404_SLAVE_OCIMEM, QCS404_SNOC_PNOC_SLV, QCS404_SLAVE_QDSS_STM, QCS404_SLAVE_CATS_128, QCS404_SLAVE_OCMEM_64, QCS404_SLAVE_LPASS,} cocci_id/* drivers/interconnect/qcom/qcs404.c 22 */;
	struct qcom_icc_desc {
		struct qcom_icc_node **nodes;
		size_t num_nodes;
	} cocci_id/* drivers/interconnect/qcom/qcs404.c 142 */;
	struct qcom_icc_node {
		unsigned char *name;
		u16 id;
		u16 links[QCS404_MAX_LINKS];
		u16 num_links;
		u16 buswidth;
		int mas_rpm_id;
		int slv_rpm_id;
		u64 rate;
	} cocci_id/* drivers/interconnect/qcom/qcs404.c 131 */;
	struct qcom_icc_provider {
		struct icc_provider provider;
		struct clk_bulk_data *bus_clks;
		int num_clks;
	} cocci_id/* drivers/interconnect/qcom/qcs404.c 112 */;
	const struct clk_bulk_data cocci_id/* drivers/interconnect/qcom/qcs404.c 101 */[];
}
