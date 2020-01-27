cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 96 */;
	struct hclge_desc cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 85 */;
	struct hclge_mdio_cfg_cmd *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 83 */;
	u16 cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 43 */;
	struct hclge_mdio_cfg_cmd {
		u8 ctrl_bit;
		u8 phyid;
		u8 phyad;
		u8 rsvd;
		__le16 reserve;
		__le16 data_wr;
		__le16 data_rd;
		__le16 sta;
	} cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 31 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 243 */;
	int cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 180 */;
	struct hclge_dev *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 179 */;
	struct hclge_vport *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 178 */;
	struct hnae3_handle *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 177 */;
	void **cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 177 */;
	struct net_device *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 175 */;
	void cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 175 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 129 */;
	struct hclge_mac *cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 127 */;
	enum hclge_mdio_c22_op_seq{HCLGE_MDIO_C22_WRITE=1, HCLGE_MDIO_C22_READ=2,} cocci_id/* drivers/net/ethernet/hisilicon/hns3/hns3pf/hclge_mdio.c 12 */;
}
