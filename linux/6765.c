cocci_test_suite() {
	struct aha152x_scdata cocci_id/* drivers/scsi/aha152x.c 926 */;
	void (*cocci_id/* drivers/scsi/aha152x.c 908 */)(struct scsi_cmnd *);
	struct completion *cocci_id/* drivers/scsi/aha152x.c 907 */;
	struct aha152x_hostdata cocci_id/* drivers/scsi/aha152x.c 718 */;
	struct aha152x_setup *cocci_id/* drivers/scsi/aha152x.c 714 */;
	struct scsi_cmnd **cocci_id/* drivers/scsi/aha152x.c 634 */;
	void cocci_id/* drivers/scsi/aha152x.c 625 */(struct scsi_cmnd *ptr);
	void cocci_id/* drivers/scsi/aha152x.c 622 */(struct Scsi_Host *shpnt,
						      int error);
	void cocci_id/* drivers/scsi/aha152x.c 621 */(struct Scsi_Host *shpnt,
						      char *msg);
	irqreturn_t cocci_id/* drivers/scsi/aha152x.c 619 */(int irq,
							     void *dev_id);
	struct {
		char *name;
		void (*init)(struct Scsi_Host *);
		void (*run)(struct Scsi_Host *);
		void (*end)(struct Scsi_Host *);
		int spio;
	} cocci_id/* drivers/scsi/aha152x.c 595 */[];
	void cocci_id/* drivers/scsi/aha152x.c 563 */(struct Scsi_Host *shpnt);
	struct aha152x_scdata *cocci_id/* drivers/scsi/aha152x.c 553 */;
	struct aha152x_scdata {
		struct scsi_cmnd *next;
		struct completion *done;
		struct scsi_eh_save ses;
	} cocci_id/* drivers/scsi/aha152x.c 501 */;
	enum aha152x_state{idle=0, unknown, seldo, seldi, selto, busfree, msgo, cmd, msgi, status, datai, datao, parerr, rsti, maxstate,} cocci_id/* drivers/scsi/aha152x.c 391 */;
	struct scsi_host_template cocci_id/* drivers/scsi/aha152x.c 385 */;
	struct isapnp_device_id cocci_id/* drivers/scsi/aha152x.c 364 */[];
	int cocci_id/* drivers/scsi/aha152x.c 354 */[];
	int cocci_id/* drivers/scsi/aha152x.c 3353 */[10];
	struct Scsi_Host cocci_id/* drivers/scsi/aha152x.c 3341 */;
	void *cocci_id/* drivers/scsi/aha152x.c 3341 */;
	struct aha152x_hostdata *cocci_id/* drivers/scsi/aha152x.c 3338 */;
	void __exit cocci_id/* drivers/scsi/aha152x.c 3336 */;
	void __iomem *cocci_id/* drivers/scsi/aha152x.c 3248 */;
	struct aha152x_setup cocci_id/* drivers/scsi/aha152x.c 3087 */;
	struct pnp_dev *cocci_id/* drivers/scsi/aha152x.c 3070 */;
	aha152x_config cocci_id/* drivers/scsi/aha152x.c 3067 */;
	int __init cocci_id/* drivers/scsi/aha152x.c 3063 */;
	enum{not_issued=0x0001, selecting=0x0002, identified=0x0004, disconnected=0x0008, completed=0x0010, aborted=0x0020, resetted=0x0040, spiordy=0x0080, syncneg=0x0100, aborting=0x0200, resetting=0x0400, check_condition=0x0800,} cocci_id/* drivers/scsi/aha152x.c 301 */;
	struct signature {
		unsigned char *signature;
		int sig_offset;
		int sig_length;
	} cocci_id/* drivers/scsi/aha152x.c 2945 */[];
	unsigned int cocci_id/* drivers/scsi/aha152x.c 2925 */[];
	unsigned short cocci_id/* drivers/scsi/aha152x.c 2921 */[];
	struct aha152x_setup cocci_id/* drivers/scsi/aha152x.c 2918 */[2];
	struct scsi_device *cocci_id/* drivers/scsi/aha152x.c 2892 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/aha152x.c 282 */;
	int cocci_id/* drivers/scsi/aha152x.c 282 */;
	void cocci_id/* drivers/scsi/aha152x.c 281 */;
	struct seq_file *cocci_id/* drivers/scsi/aha152x.c 2807 */;
	u8 cocci_id/* drivers/scsi/aha152x.c 2486 */;
	char *cocci_id/* drivers/scsi/aha152x.c 2397 */;
	unsigned int cocci_id/* drivers/scsi/aha152x.c 2181 */;
	struct scatterlist *cocci_id/* drivers/scsi/aha152x.c 2149 */;
	u32 cocci_id/* drivers/scsi/aha152x.c 2146 */;
	long cocci_id/* drivers/scsi/aha152x.c 1726 */;
	irqreturn_t cocci_id/* drivers/scsi/aha152x.c 1310 */;
	struct work_struct *cocci_id/* drivers/scsi/aha152x.c 1295 */;
	struct work_struct cocci_id/* drivers/scsi/aha152x.c 1289 */;
	int cocci_id/* drivers/scsi/aha152x.c 1235 */[3];
	sector_t cocci_id/* drivers/scsi/aha152x.c 1224 */;
	int *cocci_id/* drivers/scsi/aha152x.c 1224 */;
	struct block_device *cocci_id/* drivers/scsi/aha152x.c 1223 */;
	unsigned char cocci_id/* drivers/scsi/aha152x.c 1050 */;
	unsigned long cocci_id/* drivers/scsi/aha152x.c 1008 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/aha152x.c 1006 */;
	struct aha152x_hostdata {
		struct scsi_cmnd *issue_SC;
		struct scsi_cmnd *current_SC;
		struct scsi_cmnd *disconnected_SC;
		struct scsi_cmnd *done_SC;
		spinlock_t lock;
#if defined(AHA152X_STAT)
		int total_commands;
		int disconnections;
		int busfree_without_any_action;
		int busfree_without_old_command;
		int busfree_without_new_command;
		int busfree_without_done_command;
		int busfree_with_check_condition;
		int count[maxstate];
		int count_trans[maxstate];
		unsigned long time[maxstate];
#endif
		int commands;
		int reconnect;
		int parity;
		int synchronous;
		int delay;
		int ext_trans;
		int swint;
		int service;
		int in_intr;
		enum aha152x_state state,prevstate,laststate;
		int target;
		unsigned char syncrate[8];
		unsigned char syncneg[8];
		int cmd_i;
		int msgi_len;
		unsigned char msgi[256];
		int msgo_i,msgo_len;
		unsigned char msgo[256];
		int data_len;
		unsigned long io_port0;
		unsigned long io_port1;
#ifdef __ISAPNP__
		struct pnp_dev *pnpdev;
#endif
		struct list_head host_list;
	} cocci_id/*  1 */;
}
