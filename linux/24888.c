cocci_test_suite() {
	const struct ppp_channel *cocci_id/* net/atm/pppoatm.c 94 */;
	const struct atm_vcc *cocci_id/* net/atm/pppoatm.c 89 */;
	struct pppoatm_vcc *cocci_id/* net/atm/pppoatm.c 89 */;
	const unsigned char cocci_id/* net/atm/pppoatm.c 86 */[6];
	struct pppoatm_vcc {
		struct atm_vcc *atmvcc;
		void (*old_push)(struct atm_vcc *, struct sk_buff *);
		void (*old_pop)(struct atm_vcc *, struct sk_buff *);
		void (*old_release_cb)(struct atm_vcc *);
		struct module *old_owner;
		enum pppoatm_encaps encaps;
		atomic_t inflight;
		unsigned long blocked;
		int flags;
		struct ppp_channel chan;
		struct tasklet_struct wakeup_tasklet;
	} cocci_id/* net/atm/pppoatm.c 56 */;
	enum pppoatm_encaps{e_autodetect=PPPOATM_ENCAPS_AUTODETECT, e_vc=PPPOATM_ENCAPS_VC, e_llc=PPPOATM_ENCAPS_LLC,} cocci_id/* net/atm/pppoatm.c 50 */;
	void __exit cocci_id/* net/atm/pppoatm.c 484 */;
	void cocci_id/* net/atm/pppoatm.c 484 */;
	int __init cocci_id/* net/atm/pppoatm.c 478 */;
	struct atm_ioctl cocci_id/* net/atm/pppoatm.c 473 */;
	atm_backend_t __user *cocci_id/* net/atm/pppoatm.c 453 */;
	atm_backend_t cocci_id/* net/atm/pppoatm.c 452 */;
	struct socket *cocci_id/* net/atm/pppoatm.c 442 */;
	unsigned long cocci_id/* net/atm/pppoatm.c 419 */;
	enum pppoatm_encaps cocci_id/* net/atm/pppoatm.c 413 */;
	struct atm_backend_ppp cocci_id/* net/atm/pppoatm.c 389 */;
	struct atm_vcc *cocci_id/* net/atm/pppoatm.c 387 */;
	void __user *cocci_id/* net/atm/pppoatm.c 387 */;
	int cocci_id/* net/atm/pppoatm.c 387 */;
	const struct ppp_channel_ops cocci_id/* net/atm/pppoatm.c 382 */;
	int __user *cocci_id/* net/atm/pppoatm.c 373 */;
	struct ppp_channel *cocci_id/* net/atm/pppoatm.c 368 */;
	unsigned int cocci_id/* net/atm/pppoatm.c 368 */;
	struct module *cocci_id/* net/atm/pppoatm.c 184 */;
	struct sk_buff *cocci_id/* net/atm/pppoatm.c 132 */;
}
