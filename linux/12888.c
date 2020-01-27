cocci_test_suite() {
	struct cpc925_mc_pdata cocci_id/* drivers/edac/cpc925_edac.c 955 */;
	struct resource *cocci_id/* drivers/edac/cpc925_edac.c 913 */;
	struct edac_mc_layer cocci_id/* drivers/edac/cpc925_edac.c 910 */[2];
	struct platform_device *cocci_id/* drivers/edac/cpc925_edac.c 906 */;
	u8 cocci_id/* drivers/edac/cpc925_edac.c 868 */;
	struct cpc925_mc_pdata *cocci_id/* drivers/edac/cpc925_edac.c 865 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/cpc925_edac.c 863 */;
	enum apiexcp_bits{APIEXCP_DART=CPC925_BIT(0), APIEXCP_ADI0=CPC925_BIT(1), APIEXCP_ADI1=CPC925_BIT(2), APIEXCP_STAT=CPC925_BIT(3), APIEXCP_DERR=CPC925_BIT(4), APIEXCP_ADRS0=CPC925_BIT(5), APIEXCP_ADRS1=CPC925_BIT(6), APIEXCP_ECC_UE_H=CPC925_BIT(8), APIEXCP_ECC_CE_H=CPC925_BIT(9), APIEXCP_ECC_UE_L=CPC925_BIT(10), APIEXCP_ECC_CE_L=CPC925_BIT(11), CPU_EXCP_DETECTED=(APIEXCP_DART | APIEXCP_ADI0 | APIEXCP_ADI1 | APIEXCP_STAT | APIEXCP_DERR | APIEXCP_ADRS0 | APIEXCP_ADRS1), UECC_EXCP_DETECTED=(APIEXCP_ECC_UE_H | APIEXCP_ECC_UE_L), CECC_EXCP_DETECTED=(APIEXCP_ECC_CE_H | APIEXCP_ECC_CE_L), ECC_EXCP_DETECTED=(UECC_EXCP_DETECTED | CECC_EXCP_DETECTED),} cocci_id/* drivers/edac/cpc925_edac.c 86 */;
	struct cpc925_dev_info *cocci_id/* drivers/edac/cpc925_edac.c 775 */;
	void __iomem *cocci_id/* drivers/edac/cpc925_edac.c 773 */;
	void cocci_id/* drivers/edac/cpc925_edac.c 773 */;
	struct cpc925_dev_info cocci_id/* drivers/edac/cpc925_edac.c 750 */[];
	u32 cocci_id/* drivers/edac/cpc925_edac.c 656 */;
	struct edac_device_ctl_info *cocci_id/* drivers/edac/cpc925_edac.c 653 */;
	enum apimask_bits{APIMASK_DART=CPC925_BIT(0), APIMASK_ADI0=CPC925_BIT(1), APIMASK_ADI1=CPC925_BIT(2), APIMASK_STAT=CPC925_BIT(3), APIMASK_DERR=CPC925_BIT(4), APIMASK_ADRS0=CPC925_BIT(5), APIMASK_ADRS1=CPC925_BIT(6), APIMASK_ECC_UE_H=CPC925_BIT(8), APIMASK_ECC_CE_H=CPC925_BIT(9), APIMASK_ECC_UE_L=CPC925_BIT(10), APIMASK_ECC_CE_L=CPC925_BIT(11), CPU_MASK_ENABLE=(APIMASK_DART | APIMASK_ADI0 | APIMASK_ADI1 | APIMASK_STAT | APIMASK_DERR | APIMASK_ADRS0 | APIMASK_ADRS1), ECC_MASK_ENABLE=(APIMASK_ECC_UE_H | APIMASK_ECC_CE_H | APIMASK_ECC_UE_L | APIMASK_ECC_CE_L),} cocci_id/* drivers/edac/cpc925_edac.c 60 */;
	const u32 *cocci_id/* drivers/edac/cpc925_edac.c 594 */;
	struct device_node *cocci_id/* drivers/edac/cpc925_edac.c 584 */;
	u16 cocci_id/* drivers/edac/cpc925_edac.c 524 */;
	unsigned long *cocci_id/* drivers/edac/cpc925_edac.c 436 */;
	int *cocci_id/* drivers/edac/cpc925_edac.c 436 */;
	unsigned long cocci_id/* drivers/edac/cpc925_edac.c 322 */;
	enum dev_type cocci_id/* drivers/edac/cpc925_edac.c 319 */;
	struct dimm_info *cocci_id/* drivers/edac/cpc925_edac.c 318 */;
	struct csrow_info *cocci_id/* drivers/edac/cpc925_edac.c 317 */;
	const unsigned int *cocci_id/* drivers/edac/cpc925_edac.c 287 */;
	struct cpc925_dev_info {
		void __iomem *vbase;
		struct platform_device *pdev;
		char *ctl_name;
		int edac_idx;
		struct edac_device_ctl_info *edac_dev;
		void (*init)(struct cpc925_dev_info *dev_info);
		void (*exit)(struct cpc925_dev_info *dev_info);
		void (*check)(struct edac_device_ctl_info *edac_dev);
	} cocci_id/* drivers/edac/cpc925_edac.c 272 */;
	struct cpc925_mc_pdata {
		void __iomem *vbase;
		unsigned long total_mem;
		const char *name;
		int edac_idx;
	} cocci_id/* drivers/edac/cpc925_edac.c 264 */;
	enum brgctrl_bits{BRGCTRL_DETSERR=CPC925_BIT(0), BRGCTRL_SECBUSRESET=CPC925_BIT(9),} cocci_id/* drivers/edac/cpc925_edac.c 258 */;
	enum linkerr_bits{LINKERR_EOC_ERR=CPC925_BIT(17), LINKERR_OVF_ERR=CPC925_BIT(18), LINKERR_PROT_ERR=CPC925_BIT(19), HT_LINKERR_DETECTED=(LINKERR_EOC_ERR | LINKERR_OVF_ERR | LINKERR_PROT_ERR),} cocci_id/* drivers/edac/cpc925_edac.c 245 */;
	enum linkctrl_bits{LINKCTRL_CRC_ERR=(CPC925_BIT(22) | CPC925_BIT(23)), LINKCTRL_LINK_FAIL=CPC925_BIT(27), HT_LINKCTRL_DETECTED=(LINKCTRL_CRC_ERR | LINKCTRL_LINK_FAIL),} cocci_id/* drivers/edac/cpc925_edac.c 234 */;
	enum errctrl_bits{ERRCTRL_SERR_NF=CPC925_BIT(0), ERRCTRL_CRC_NF=CPC925_BIT(1), ERRCTRL_RSP_NF=CPC925_BIT(2), ERRCTRL_EOC_NF=CPC925_BIT(3), ERRCTRL_OVF_NF=CPC925_BIT(4), ERRCTRL_PROT_NF=CPC925_BIT(5), ERRCTRL_RSP_ERR=CPC925_BIT(6), ERRCTRL_CHN_FAL=CPC925_BIT(7), HT_ERRCTRL_ENABLE=(ERRCTRL_SERR_NF | ERRCTRL_CRC_NF | ERRCTRL_RSP_NF | ERRCTRL_EOC_NF | ERRCTRL_OVF_NF | ERRCTRL_PROT_NF), HT_ERRCTRL_DETECTED=(ERRCTRL_RSP_ERR | ERRCTRL_CHN_FAL),} cocci_id/* drivers/edac/cpc925_edac.c 213 */;
	enum mmcr_bits{MMCR_REG_DIMM_MODE=CPC925_BIT(3),} cocci_id/* drivers/edac/cpc925_edac.c 202 */;
	enum mccr_bits{MCCR_ECC_EN=CPC925_BIT(0),} cocci_id/* drivers/edac/cpc925_edac.c 164 */;
	void __exit cocci_id/* drivers/edac/cpc925_edac.c 1057 */;
	int cocci_id/* drivers/edac/cpc925_edac.c 1040 */;
	int __init cocci_id/* drivers/edac/cpc925_edac.c 1038 */;
	struct platform_driver cocci_id/* drivers/edac/cpc925_edac.c 1030 */;
}
