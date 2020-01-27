cocci_test_suite() {
	struct bcom_fec_priv cocci_id/* drivers/dma/bestcomm/fec.c 91 */;
	struct bcom_fec_bd cocci_id/* drivers/dma/bestcomm/fec.c 90 */;
	struct bcom_fec_priv *cocci_id/* drivers/dma/bestcomm/fec.c 88 */;
	phys_addr_t cocci_id/* drivers/dma/bestcomm/fec.c 85 */;
	int cocci_id/* drivers/dma/bestcomm/fec.c 85 */;
	struct bcom_task *cocci_id/* drivers/dma/bestcomm/fec.c 84 */;
	struct bcom_fec_priv {
		phys_addr_t fifo;
		int maxbufsize;
	} cocci_id/* drivers/dma/bestcomm/fec.c 74 */;
	struct bcom_fec_tx_inc {
		u16 pad0;
		s16 incr_bytes;
		u16 pad1;
		s16 incr_src;
		u16 pad2;
		s16 incr_src_ma;
	} cocci_id/* drivers/dma/bestcomm/fec.c 64 */;
	struct bcom_fec_tx_var {
		u32 DRD;
		u32 fifo;
		u32 enable;
		u32 bd_base;
		u32 bd_last;
		u32 bd_start;
		u32 buffer_size;
	} cocci_id/* drivers/dma/bestcomm/fec.c 53 */;
	struct bcom_fec_rx_inc {
		u16 pad0;
		s16 incr_bytes;
		u16 pad1;
		s16 incr_dst;
		u16 pad2;
		s16 incr_dst_ma;
	} cocci_id/* drivers/dma/bestcomm/fec.c 43 */;
	struct bcom_fec_rx_var {
		u32 enable;
		u32 fifo;
		u32 bd_base;
		u32 bd_last;
		u32 bd_start;
		u32 buffer_size;
	} cocci_id/* drivers/dma/bestcomm/fec.c 33 */;
	u32 cocci_id/* drivers/dma/bestcomm/fec.c 29 */[];
	struct bcom_fec_tx_inc *cocci_id/* drivers/dma/bestcomm/fec.c 216 */;
	struct bcom_fec_tx_var *cocci_id/* drivers/dma/bestcomm/fec.c 215 */;
	u32 *cocci_id/* drivers/dma/bestcomm/fec.c 170 */;
	void cocci_id/* drivers/dma/bestcomm/fec.c 157 */;
	s16 cocci_id/* drivers/dma/bestcomm/fec.c 135 */;
	u32 cocci_id/* drivers/dma/bestcomm/fec.c 129 */;
	struct mpc52xx_sdma cocci_id/* drivers/dma/bestcomm/fec.c 128 */;
	struct bcom_fec_rx_inc *cocci_id/* drivers/dma/bestcomm/fec.c 115 */;
	struct bcom_fec_rx_var *cocci_id/* drivers/dma/bestcomm/fec.c 114 */;
}
