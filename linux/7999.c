cocci_test_suite() {
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 99 */(struct s_smc *smc,
							    volatile struct s_smt_fp_rxd *rxd,
							    int frag_count,
							    int len);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 97 */(struct s_smc *smc,
							    volatile struct s_smt_fp_txd *txd);
	void *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 95 */(struct s_smc *smc,
							     unsigned int size);
	SMbuf *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 83 */(struct s_smc *smc);
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 82 */(struct s_smc *smc,
							      struct s_smt_rx_queue *queue);
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 81 */(struct s_smc *smc,
							      struct s_smt_tx_queue *queue);
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 79 */(struct s_smc *smc,
							      volatile union s_fp_descr *start,
							      int count);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 74 */(struct s_smc *smc,
							    SMbuf *mb);
	SMbuf *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 709 */;
	u_short cocci_id/* drivers/net/fddi/skfp/hwmtm.c 708 */;
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 707 */;
	struct s_smc *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 705 */;
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 705 */;
	u_char cocci_id/* drivers/net/fddi/skfp/hwmtm.c 65 */;
	struct smt_debug cocci_id/* drivers/net/fddi/skfp/hwmtm.c 59 */;
	int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 48 */;
	long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 466 */;
	u_char *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 418 */;
	struct s_smt_rx_queue *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 391 */;
	struct s_smt_fp_txd cocci_id/* drivers/net/fddi/skfp/hwmtm.c 375 */;
	struct s_smt_fp_rxd cocci_id/* drivers/net/fddi/skfp/hwmtm.c 361 */;
	void *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 335 */;
	volatile union s_fp_descr *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 321 */;
	SMbuf cocci_id/* drivers/net/fddi/skfp/hwmtm.c 281 */;
	u_int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 225 */;
	void far *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1887 */;
	int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1811 */[3];
	char far cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1810 */;
	char *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1681 */;
	struct s_smt_tx_queue *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1628 */;
	volatile struct s_smt_fp_txd *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1627 */;
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 157 */(struct s_smc *smc,
							     int flag,
							     int lev);
	u_int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 152 */(void);
	int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 149 */(struct s_smc *smc,
							    u_char fc,
							    int frag_count,
							    int frame_len,
							    int frame_status);
	int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 148 */(struct s_smc *smc);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 145 */(struct s_smc *smc,
							     char far *virt,
							     u_long phys,
							     int len,
							     int frame_status);
	__u32 cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1422 */;
	__le32 cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1415 */;
	volatile struct s_smt_fp_rxd *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1414 */;
	char far *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1411 */;
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 140 */(struct s_smc *smc,
							     u_char *mac_addr);
	const char cocci_id/* drivers/net/fddi/skfp/hwmtm.c 14 */[];
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 139 */(struct s_smc *smc,
							     int mode);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 136 */(struct s_smc *smc);
	int cocci_id/* drivers/net/fddi/skfp/hwmtm.c 127 */(struct s_smc *smc,
							    int len, int fc,
							    char *look_ahead,
							    int la_len);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 123 */(struct s_smc *smc,
							     volatile union s_fp_descr *descr,
							     int flag);
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 118 */(struct s_smc *smc,
							       void *virt,
							       int len,
							       int flag);
	u_long cocci_id/* drivers/net/fddi/skfp/hwmtm.c 117 */(struct s_smc *smc,
							       void *virt);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 109 */(void);
	void cocci_id/* drivers/net/fddi/skfp/hwmtm.c 105 */(struct s_smc *smc,
							     volatile struct s_smt_fp_rxd *rxd,
							     int frag_count);
	u_char far *cocci_id/* drivers/net/fddi/skfp/hwmtm.c 1049 */;
}
