cocci_test_suite() {
	u8 *cocci_id/* drivers/staging/octeon/ethernet-rx.c 96 */;
	union cvmx_gmxx_rxx_frm_ctl cocci_id/* drivers/staging/octeon/ethernet-rx.c 91 */;
	union cvmx_pow_wq_int_thrx cocci_id/* drivers/staging/octeon/ethernet-rx.c 498 */;
	union cvmx_pow_wq_int_pc cocci_id/* drivers/staging/octeon/ethernet-rx.c 487 */;
	union cvmx_sso_wq_int_thrx cocci_id/* drivers/staging/octeon/ethernet-rx.c 486 */;
	irqreturn_t cocci_id/* drivers/staging/octeon/ethernet-rx.c 48 */;
	void *cocci_id/* drivers/staging/octeon/ethernet-rx.c 48 */;
	struct oct_rx_group cocci_id/* drivers/staging/octeon/ethernet-rx.c 410 */;
	struct oct_rx_group *cocci_id/* drivers/staging/octeon/ethernet-rx.c 410 */;
	struct napi_struct *cocci_id/* drivers/staging/octeon/ethernet-rx.c 408 */;
	struct oct_rx_group {
		int irq;
		int group;
		struct napi_struct napi;
	} cocci_id/* drivers/staging/octeon/ethernet-rx.c 34 */[16];
	struct net_device *cocci_id/* drivers/staging/octeon/ethernet-rx.c 325 */;
	atomic_t cocci_id/* drivers/staging/octeon/ethernet-rx.c 32 */;
	union cvmx_pow_wq_int cocci_id/* drivers/staging/octeon/ethernet-rx.c 235 */;
	struct sk_buff **cocci_id/* drivers/staging/octeon/ethernet-rx.c 216 */;
	u64 cocci_id/* drivers/staging/octeon/ethernet-rx.c 181 */;
	const int cocci_id/* drivers/staging/octeon/ethernet-rx.c 180 */;
	union cvmx_buf_ptr *cocci_id/* drivers/staging/octeon/ethernet-rx.c 148 */;
	union cvmx_buf_ptr cocci_id/* drivers/staging/octeon/ethernet-rx.c 141 */;
	int cocci_id/* drivers/staging/octeon/ethernet-rx.c 140 */;
	struct sk_buff *cocci_id/* drivers/staging/octeon/ethernet-rx.c 138 */;
	struct cvmx_wqe *cocci_id/* drivers/staging/octeon/ethernet-rx.c 138 */;
	void cocci_id/* drivers/staging/octeon/ethernet-rx.c 138 */;
}
