cocci_test_suite() {
	cisdata_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 88 */;
	tuple_t cocci_id/* drivers/pcmcia/pcmcia_cis.c 87 */;
	int (*cocci_id/* drivers/pcmcia/pcmcia_cis.c 83 */)(tuple_t *tuple,
							    cisparse_t *parse,
							    void *priv_data);
	cisdata_t cocci_id/* drivers/pcmcia/pcmcia_cis.c 82 */;
	cisparse_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 82 */;
	void *cocci_id/* drivers/pcmcia/pcmcia_cis.c 82 */;
	struct pcmcia_socket *cocci_id/* drivers/pcmcia/pcmcia_cis.c 81 */;
	unsigned int cocci_id/* drivers/pcmcia/pcmcia_cis.c 81 */;
	int cocci_id/* drivers/pcmcia/pcmcia_cis.c 81 */;
	struct net_device *cocci_id/* drivers/pcmcia/pcmcia_cis.c 400 */;
	tuple_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 397 */;
	struct pcmcia_device *cocci_id/* drivers/pcmcia/pcmcia_cis.c 397 */;
	struct pcmcia_loop_get cocci_id/* drivers/pcmcia/pcmcia_cis.c 376 */;
	unsigned char **cocci_id/* drivers/pcmcia/pcmcia_cis.c 374 */;
	size_t cocci_id/* drivers/pcmcia/pcmcia_cis.c 373 */;
	struct pcmcia_loop_get *cocci_id/* drivers/pcmcia/pcmcia_cis.c 352 */;
	struct pcmcia_loop_get {
		size_t len;
		cisdata_t **buf;
	} cocci_id/* drivers/pcmcia/pcmcia_cis.c 335 */;
	struct pcmcia_loop_mem cocci_id/* drivers/pcmcia/pcmcia_cis.c 324 */;
	int (*cocci_id/* drivers/pcmcia/pcmcia_cis.c 319 */)(struct pcmcia_device *p_dev,
							     tuple_t *tuple,
							     void *priv_data);
	struct pcmcia_loop_mem *cocci_id/* drivers/pcmcia/pcmcia_cis.c 301 */;
	struct pcmcia_loop_mem {
		struct pcmcia_device *p_dev;
		void *priv_data;
		int (*loop_tuple)(struct pcmcia_device *p_dev, tuple_t *tuple,
				  void *priv_data);
	} cocci_id/* drivers/pcmcia/pcmcia_cis.c 284 */;
	struct pcmcia_cfg_mem cocci_id/* drivers/pcmcia/pcmcia_cis.c 266 */;
	int (*cocci_id/* drivers/pcmcia/pcmcia_cis.c 259 */)(struct pcmcia_device *p_dev,
							     void *priv_data);
	cistpl_mem_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 225 */;
	cistpl_io_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 197 */;
	cistpl_cftable_entry_t *cocci_id/* drivers/pcmcia/pcmcia_cis.c 157 */;
	struct pcmcia_cfg_mem *cocci_id/* drivers/pcmcia/pcmcia_cis.c 155 */;
	struct pcmcia_cfg_mem {
		struct pcmcia_device *p_dev;
		int (*conf_check)(struct pcmcia_device *p_dev,
				  void *priv_data);
		void *priv_data;
		cisparse_t parse;
		cistpl_cftable_entry_t dflt;
	} cocci_id/* drivers/pcmcia/pcmcia_cis.c 138 */;
}
