cocci_test_suite() {
	int (*cocci_id/* sound/core/vmaster.c 499 */)(struct snd_kcontrol *vslave,
						      struct snd_kcontrol *slave,
						      void *arg);
	struct link_slave {
		struct list_head list;
		struct link_master *master;
		struct link_ctl_info info;
		int vals[2];
		unsigned int flags;
		struct snd_kcontrol *kctl;
		struct snd_kcontrol slave;
	} cocci_id/* sound/core/vmaster.c 47 */;
	void *cocci_id/* sound/core/vmaster.c 448 */;
	void (*cocci_id/* sound/core/vmaster.c 447 */)(void *private_data,
						       int);
	struct snd_kcontrol_new cocci_id/* sound/core/vmaster.c 396 */;
	const unsigned int *cocci_id/* sound/core/vmaster.c 392 */;
	char *cocci_id/* sound/core/vmaster.c 391 */;
	struct list_head cocci_id/* sound/core/vmaster.c 363 */;
	void cocci_id/* sound/core/vmaster.c 355 */;
	bool cocci_id/* sound/core/vmaster.c 336 */;
	struct link_master {
		struct list_head slaves;
		struct link_ctl_info info;
		int val;
		unsigned int tlv[4];
		void (*hook)(void *private_data, int);
		void *hook_private_data;
	} cocci_id/* sound/core/vmaster.c 31 */;
	struct snd_ctl_elem_value *cocci_id/* sound/core/vmaster.c 302 */;
	struct snd_ctl_elem_info *cocci_id/* sound/core/vmaster.c 286 */;
	struct link_slave *cocci_id/* sound/core/vmaster.c 256 */;
	struct link_master *cocci_id/* sound/core/vmaster.c 255 */;
	unsigned int cocci_id/* sound/core/vmaster.c 253 */;
	struct snd_kcontrol *cocci_id/* sound/core/vmaster.c 252 */;
	int cocci_id/* sound/core/vmaster.c 252 */;
	unsigned int __user *cocci_id/* sound/core/vmaster.c 223 */;
	struct link_ctl_info {
		snd_ctl_elem_type_t type;
		int count;
		int min_val,max_val;
	} cocci_id/* sound/core/vmaster.c 17 */;
}
