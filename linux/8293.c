cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 46 */;
	bool cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 45 */;
	struct mtk_eth *cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 213 */;
	int cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 213 */;
	const char *cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 21 */;
	const struct mtk_eth_muxc cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 189 */[];
	unsigned int cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 160 */;
	struct mtk_eth_muxc {
		const char *name;
		int cap_bit;
		int (*set_path)(struct mtk_eth *eth, int path);
	} cocci_id/* drivers/net/ethernet/mediatek/mtk_eth_path.c 15 */;
}
