cocci_test_suite() {
	struct bcom_gen_bd_priv cocci_id/* drivers/dma/bestcomm/gen_bd.c 92 */;
	struct bcom_gen_bd cocci_id/* drivers/dma/bestcomm/gen_bd.c 91 */;
	struct bcom_gen_bd_priv *cocci_id/* drivers/dma/bestcomm/gen_bd.c 89 */;
	phys_addr_t cocci_id/* drivers/dma/bestcomm/gen_bd.c 85 */;
	int cocci_id/* drivers/dma/bestcomm/gen_bd.c 85 */;
	struct bcom_task *cocci_id/* drivers/dma/bestcomm/gen_bd.c 84 */;
	struct bcom_gen_bd_priv {
		phys_addr_t fifo;
		int initiator;
		int ipr;
		int maxbufsize;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 72 */;
	struct bcom_gen_bd_tx_inc {
		u16 pad0;
		s16 incr_bytes;
		u16 pad1;
		s16 incr_src;
		u16 pad2;
		s16 incr_src_ma;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 62 */;
	struct bcom_gen_bd_tx_var {
		u32 fifo;
		u32 enable;
		u32 bd_base;
		u32 bd_last;
		u32 bd_start;
		u32 buffer_size;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 52 */;
	struct bcom_gen_bd_rx_inc {
		u16 pad0;
		s16 incr_bytes;
		u16 pad1;
		s16 incr_dst;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 44 */;
	struct bcom_gen_bd_rx_var {
		u32 enable;
		u32 fifo;
		u32 bd_base;
		u32 bd_last;
		u32 bd_start;
		u32 buffer_size;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 34 */;
	struct psc cocci_id/* drivers/dma/bestcomm/gen_bd.c 339 */;
	unsigned cocci_id/* drivers/dma/bestcomm/gen_bd.c 315 */;
	u32 cocci_id/* drivers/dma/bestcomm/gen_bd.c 30 */[];
	struct bcom_psc_params {
		int rx_initiator;
		int rx_ipr;
		int tx_initiator;
		int tx_ipr;
	} cocci_id/* drivers/dma/bestcomm/gen_bd.c 262 */[];
	struct bcom_gen_bd_tx_inc *cocci_id/* drivers/dma/bestcomm/gen_bd.c 202 */;
	struct bcom_gen_bd_tx_var *cocci_id/* drivers/dma/bestcomm/gen_bd.c 201 */;
	void cocci_id/* drivers/dma/bestcomm/gen_bd.c 160 */;
	s16 cocci_id/* drivers/dma/bestcomm/gen_bd.c 138 */;
	u32 cocci_id/* drivers/dma/bestcomm/gen_bd.c 132 */;
	struct mpc52xx_sdma cocci_id/* drivers/dma/bestcomm/gen_bd.c 131 */;
	struct bcom_gen_bd_rx_inc *cocci_id/* drivers/dma/bestcomm/gen_bd.c 118 */;
	struct bcom_gen_bd_rx_var *cocci_id/* drivers/dma/bestcomm/gen_bd.c 117 */;
}
