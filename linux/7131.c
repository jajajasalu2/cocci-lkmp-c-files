cocci_test_suite() {
	struct xen_front_pgdir_shbuf_cfg *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 517 */;
	struct xen_front_pgdir_shbuf_ops {
		void (*calc_num_grefs)(struct xen_front_pgdir_shbuf *buf);
		void (*fill_page_dir)(struct xen_front_pgdir_shbuf *buf);
		int (*grant_refs_for_buffer)(struct xen_front_pgdir_shbuf *buf,
					     grant_ref_t *priv_gref_head,
					     int gref_idx);
		int (*map)(struct xen_front_pgdir_shbuf *buf);
		int (*unmap)(struct xen_front_pgdir_shbuf *buf);
	} cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 50 */;
	const struct xen_front_pgdir_shbuf_ops cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 494 */;
	struct xen_front_pgdir_shbuf *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 477 */;
	int cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 477 */;
	unsigned long cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 449 */;
	grant_ref_t cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 434 */;
	grant_ref_t *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 404 */;
	struct xen_page_directory {
		grant_ref_t gref_dir_next_page;
		grant_ref_t gref[1];
	} cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 39 */;
	unsigned char *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 337 */;
	struct xen_page_directory *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 336 */;
	phys_addr_t cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 291 */;
	struct gnttab_map_grant_ref *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 258 */;
	struct gnttab_unmap_grant_ref *cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 211 */;
	uintptr_t cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 200 */;
	void cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 178 */;
	struct xen_page_directory cocci_id/* drivers/xen/xen-front-pgdir-shbuf.c 159 */;
}
