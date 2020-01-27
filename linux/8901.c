cocci_test_suite() {
	void __force *cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 70 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 66 */;
	struct tse_buffer cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 483 */;
	struct altera_tse_private *cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 480 */;
	struct tse_buffer *cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 48 */(struct altera_tse_private *priv);
	struct tse_buffer *cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 479 */;
	void cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 455 */;
	void cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 42 */(struct altera_tse_private *priv,
									 struct tse_buffer *buffer);
	uintptr_t cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 419 */;
	struct sgdma_descrip __iomem *cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 338 */;
	int cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 336 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 31 */(struct altera_tse_private *priv,
									       struct sgdma_descrip __iomem *desc);
	u16 cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 298 */;
	int cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 25 */(struct altera_tse_private *priv);
	unsigned int cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 234 */;
	u32 cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 228 */;
	int cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 22 */(struct altera_tse_private *priv,
									struct sgdma_descrip __iomem *desc);
	void cocci_id/* drivers/net/ethernet/altera/altera_sgdma.c 12 */(struct sgdma_descrip __iomem *desc,
									 struct sgdma_descrip __iomem *ndesc,
									 dma_addr_t ndesc_phys,
									 dma_addr_t raddr,
									 dma_addr_t waddr,
									 u16 length,
									 int generate_eop,
									 int rfixed,
									 int wfixed);
}
