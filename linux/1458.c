cocci_test_suite() {
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 98 */(struct usb_configuration *,
								struct usb_function *);
	int __must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 96 */(struct ffs_function *func);
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 95 */(struct ffs_function *func);
	struct iov_iter *cocci_id/* drivers/usb/gadget/function/f_fs.c 874 */;
	enum ffs_setup_state cocci_id/* drivers/usb/gadget/function/f_fs.c 87 */;
	struct ffs_buffer *cocci_id/* drivers/usb/gadget/function/f_fs.c 867 */;
	struct ffs_epfile *cocci_id/* drivers/usb/gadget/function/f_fs.c 861 */;
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 861 */;
	struct ffs_function cocci_id/* drivers/usb/gadget/function/f_fs.c 83 */;
	mm_segment_t cocci_id/* drivers/usb/gadget/function/f_fs.c 827 */;
	struct page *cocci_id/* drivers/usb/gadget/function/f_fs.c 776 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/f_fs.c 768 */;
	struct page **cocci_id/* drivers/usb/gadget/function/f_fs.c 766 */;
	struct sg_table *cocci_id/* drivers/usb/gadget/function/f_fs.c 764 */;
	const struct file_operations cocci_id/* drivers/usb/gadget/function/f_fs.c 692 */;
	struct ffs_function {
		struct usb_configuration *conf;
		struct usb_gadget *gadget;
		struct ffs_data *ffs;
		struct ffs_ep *eps;
		u8 eps_revmap[16];
		short *interfaces_nums;
		struct usb_function function;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 68 */;
	__poll_t cocci_id/* drivers/usb/gadget/function/f_fs.c 651 */;
	poll_table *cocci_id/* drivers/usb/gadget/function/f_fs.c 651 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_fs.c 634 */;
	struct file *cocci_id/* drivers/usb/gadget/function/f_fs.c 631 */;
	struct inode *cocci_id/* drivers/usb/gadget/function/f_fs.c 605 */;
	int __must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 58 */(struct ffs_data *ffs,
									     char *data,
									     size_t len);
	struct usb_functionfs_event cocci_id/* drivers/usb/gadget/function/f_fs.c 538 */;
	loff_t *cocci_id/* drivers/usb/gadget/function/f_fs.c 502 */;
	struct ffs_data *__must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 50 */(const char *dev_name)
	__attribute__((malloc));
	const size_t cocci_id/* drivers/usb/gadget/function/f_fs.c 477 */;
	struct usb_functionfs_event cocci_id/* drivers/usb/gadget/function/f_fs.c 476 */[ARRAY_SIZE(ffs->ev.types)];
	char __user *cocci_id/* drivers/usb/gadget/function/f_fs.c 467 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/f_fs.c 467 */;
	struct mutex *cocci_id/* drivers/usb/gadget/function/f_fs.c 3810 */;
	struct ffs_dev *cocci_id/* drivers/usb/gadget/function/f_fs.c 3619 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_fs.c 3591 */;
	struct f_fs_opts *cocci_id/* drivers/usb/gadget/function/f_fs.c 3519 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_fs.c 3491 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_fs.c 3487 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_fs.c 3480 */;
	struct ffs_dev cocci_id/* drivers/usb/gadget/function/f_fs.c 3450 */;
	short *cocci_id/* drivers/usb/gadget/function/f_fs.c 3411 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_fs.c 3367 */;
	struct ffs_data cocci_id/* drivers/usb/gadget/function/f_fs.c 3258 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/function/f_fs.c 3255 */;
	const char __user *cocci_id/* drivers/usb/gadget/function/f_fs.c 325 */;
	struct usb_os_desc *cocci_id/* drivers/usb/gadget/function/f_fs.c 3205 */;
	char cocci_id/* drivers/usb/gadget/function/f_fs.c 3103 */;
	struct usb_os_desc_ext_prop cocci_id/* drivers/usb/gadget/function/f_fs.c 3101 */;
	struct usb_os_desc cocci_id/* drivers/usb/gadget/function/f_fs.c 3099 */;
	char cocci_id/* drivers/usb/gadget/function/f_fs.c 3097 */[16];
	struct usb_os_desc_table cocci_id/* drivers/usb/gadget/function/f_fs.c 3095 */;
	short cocci_id/* drivers/usb/gadget/function/f_fs.c 3094 */;
	struct ffs_ep cocci_id/* drivers/usb/gadget/function/f_fs.c 3087 */;
	const int cocci_id/* drivers/usb/gadget/function/f_fs.c 3078 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_fs.c 3073 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_fs.c 3072 */;
	struct f_fs_opts cocci_id/* drivers/usb/gadget/function/f_fs.c 3030 */;
	struct usb_os_desc_ext_prop *cocci_id/* drivers/usb/gadget/function/f_fs.c 2969 */;
	struct usb_os_desc_table *cocci_id/* drivers/usb/gadget/function/f_fs.c 2956 */;
	struct usb_endpoint_descriptor **cocci_id/* drivers/usb/gadget/function/f_fs.c 2934 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_fs.c 2846 */;
	long cocci_id/* drivers/usb/gadget/function/f_fs.c 2813 */;
	const char *cocci_id/* drivers/usb/gadget/function/f_fs.c 2800 */[];
	struct ffs_ep *cocci_id/* drivers/usb/gadget/function/f_fs.c 2797 */;
	struct ffs_function *cocci_id/* drivers/usb/gadget/function/f_fs.c 2796 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_fs.c 278 */;
	enum usb_functionfs_event_type cocci_id/* drivers/usb/gadget/function/f_fs.c 2704 */;
	char *cocci_id/* drivers/usb/gadget/function/f_fs.c 262 */(const char __user *buf,
								   size_t len)
	__attribute__((warn_unused_result,nonnull));
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_fs.c 2609 */;
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_fs.c 2608 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_fs.c 2606 */;
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 260 */(struct mutex *mutex,
								 unsigned nonblock)
	__attribute__((warn_unused_result,nonnull));
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_fs.c 2573 */;
	const char *cocci_id/* drivers/usb/gadget/function/f_fs.c 2572 */;
	struct usb_gadget_strings **cocci_id/* drivers/usb/gadget/function/f_fs.c 2571 */;
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 256 */(struct ffs_data *ffs);
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 255 */(struct ffs_data *ffs);
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 254 */(struct ffs_data *ffs_data);
	void *cocci_id/* drivers/usb/gadget/function/f_fs.c 253 */(const char *dev_name);
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 252 */(struct ffs_dev *dev);
	struct ffs_dev *cocci_id/* drivers/usb/gadget/function/f_fs.c 251 */(void);
	struct ffs_dev *cocci_id/* drivers/usb/gadget/function/f_fs.c 250 */(const char *name);
	struct ffs_desc_helper cocci_id/* drivers/usb/gadget/function/f_fs.c 2441 */;
	char *cocci_id/* drivers/usb/gadget/function/f_fs.c 2438 */;
	char *const cocci_id/* drivers/usb/gadget/function/f_fs.c 2436 */;
	size_t cocci_id/* drivers/usb/gadget/function/f_fs.c 2436 */;
	__le32 *cocci_id/* drivers/usb/gadget/function/f_fs.c 2416 */;
	struct dentry *cocci_id/* drivers/usb/gadget/function/f_fs.c 241 */(struct super_block *sb,
									    const char *name,
									    void *data,
									    const struct file_operations *fops);
	u16 cocci_id/* drivers/usb/gadget/function/f_fs.c 2396 */;
	u32 cocci_id/* drivers/usb/gadget/function/f_fs.c 2395 */;
	struct usb_ext_prop_desc *cocci_id/* drivers/usb/gadget/function/f_fs.c 2394 */;
	struct usb_ext_compat_desc cocci_id/* drivers/usb/gadget/function/f_fs.c 2390 */;
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 239 */(struct ffs_epfile *epfiles,
								  unsigned count);
	int __must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 238 */(struct ffs_data *ffs);
	struct usb_ext_compat_desc *cocci_id/* drivers/usb/gadget/function/f_fs.c 2370 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_fs.c 2364 */;
	struct ffs_data *cocci_id/* drivers/usb/gadget/function/f_fs.c 2363 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_fs.c 2361 */;
	struct usb_os_desc_header *cocci_id/* drivers/usb/gadget/function/f_fs.c 2360 */;
	enum ffs_os_desc_type cocci_id/* drivers/usb/gadget/function/f_fs.c 2359 */;
	struct ffs_desc_helper {
		struct ffs_data *ffs;
		unsigned interfaces_count;
		unsigned eps_count;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 232 */;
	ffs_os_desc_callback cocci_id/* drivers/usb/gadget/function/f_fs.c 2297 */;
	enum ffs_os_desc_type *cocci_id/* drivers/usb/gadget/function/f_fs.c 2239 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/function/f_fs.c 2194 */;
	struct ffs_desc_helper *cocci_id/* drivers/usb/gadget/function/f_fs.c 2193 */;
	void *cocci_id/* drivers/usb/gadget/function/f_fs.c 2191 */;
	u8 *cocci_id/* drivers/usb/gadget/function/f_fs.c 2190 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_fs.c 2190 */;
	enum ffs_entity_type cocci_id/* drivers/usb/gadget/function/f_fs.c 2189 */;
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 2189 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/f_fs.c 2154 */;
	const unsigned cocci_id/* drivers/usb/gadget/function/f_fs.c 2153 */;
	ffs_entity_callback cocci_id/* drivers/usb/gadget/function/f_fs.c 2151 */;
	int __must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 2150 */;
	struct ffs_io_data {
		bool aio;
		bool read;
		struct kiocb *kiocb;
		struct iov_iter data;
		const void *to_free;
		char *buf;
		struct mm_struct *mm;
		struct work_struct work;
		struct usb_ep *ep;
		struct usb_request *req;
		struct sg_table sgt;
		bool use_sg;
		struct ffs_data *ffs;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 212 */;
	struct usb_ss_ep_comp_descriptor cocci_id/* drivers/usb/gadget/function/f_fs.c 2117 */;
	struct usb_interface_assoc_descriptor *cocci_id/* drivers/usb/gadget/function/f_fs.c 2106 */;
	struct usb_otg_descriptor cocci_id/* drivers/usb/gadget/function/f_fs.c 2101 */;
	struct ccid_descriptor cocci_id/* drivers/usb/gadget/function/f_fs.c 2091 */;
	struct hid_descriptor cocci_id/* drivers/usb/gadget/function/f_fs.c 2086 */;
	struct usb_interface_descriptor *cocci_id/* drivers/usb/gadget/function/f_fs.c 2061 */;
	struct ffs_buffer {
		size_t length;
		char *data;
		char storage[];
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 204 */;
	int *cocci_id/* drivers/usb/gadget/function/f_fs.c 2011 */;
	int (*cocci_id/* drivers/usb/gadget/function/f_fs.c 2005 */)(enum ffs_os_desc_type entity,
								     struct usb_os_desc_header *h,
								     void *data,
								     unsigned len,
								     void *priv);
	int (*cocci_id/* drivers/usb/gadget/function/f_fs.c 2000 */)(enum ffs_entity_type entity,
								     u8 *valuep,
								     struct usb_descriptor_header *desc,
								     void *priv);
	enum ffs_os_desc_type{FFS_OS_DESC, FFS_OS_DESC_EXT_COMPAT, FFS_OS_DESC_EXT_PROP,} cocci_id/* drivers/usb/gadget/function/f_fs.c 1996 */;
	enum ffs_entity_type{FFS_DESCRIPTOR, FFS_INTERFACE, FFS_STRING, FFS_ENDPOINT,} cocci_id/* drivers/usb/gadget/function/f_fs.c 1992 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_fs.c 1820 */;
	struct file_system_type cocci_id/* drivers/usb/gadget/function/f_fs.c 1640 */;
	struct super_block *cocci_id/* drivers/usb/gadget/function/f_fs.c 1629 */;
	struct ffs_sb_fill_data cocci_id/* drivers/usb/gadget/function/f_fs.c 1613 */;
	const struct fs_context_operations cocci_id/* drivers/usb/gadget/function/f_fs.c 1603 */;
	struct ffs_sb_fill_data *cocci_id/* drivers/usb/gadget/function/f_fs.c 1591 */;
	struct fs_context *cocci_id/* drivers/usb/gadget/function/f_fs.c 1589 */;
	struct fs_parse_result cocci_id/* drivers/usb/gadget/function/f_fs.c 1507 */;
	struct fs_parameter *cocci_id/* drivers/usb/gadget/function/f_fs.c 1504 */;
	const struct fs_parameter_description cocci_id/* drivers/usb/gadget/function/f_fs.c 1499 */;
	const struct fs_parameter_spec cocci_id/* drivers/usb/gadget/function/f_fs.c 1489 */[];
	enum{Opt_no_disconnect, Opt_rmode, Opt_fmode, Opt_mode, Opt_uid, Opt_gid,} cocci_id/* drivers/usb/gadget/function/f_fs.c 1480 */;
	struct ffs_sb_fill_data {
		struct ffs_file_perms perms;
		umode_t root_mode;
		const char *dev_name;
		bool no_disconnect;
		struct ffs_data *ffs_data;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 1437 */;
	const struct super_operations cocci_id/* drivers/usb/gadget/function/f_fs.c 1432 */;
	const struct file_operations *cocci_id/* drivers/usb/gadget/function/f_fs.c 1409 */;
	struct dentry *cocci_id/* drivers/usb/gadget/function/f_fs.c 1407 */;
	struct timespec64 cocci_id/* drivers/usb/gadget/function/f_fs.c 1387 */;
	struct ffs_file_perms *cocci_id/* drivers/usb/gadget/function/f_fs.c 1378 */;
	const struct inode_operations *cocci_id/* drivers/usb/gadget/function/f_fs.c 1377 */;
	struct inode *__must_check cocci_id/* drivers/usb/gadget/function/f_fs.c 1374 */;
	void __user *cocci_id/* drivers/usb/gadget/function/f_fs.c 1342 */;
	struct ffs_epfile {
		struct mutex mutex;
		struct ffs_data *ffs;
		struct ffs_ep *ep;
		struct dentry *dentry;
		struct ffs_buffer *read_buffer;
#define READ_BUFFER_DROP ((struct ffs_buffer *)ERR_PTR(-ESHUTDOWN))
			char name[5];
		unsigned char in;
		unsigned char isoc;
		unsigned char _pad;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 129 */;
	struct ffs_io_data cocci_id/* drivers/usb/gadget/function/f_fs.c 1218 */;
	struct ffs_ep {
		struct usb_ep *ep;
		struct usb_request *req;
		struct usb_endpoint_descriptor *descs[3];
		u8 num;
		int status;
	} cocci_id/* drivers/usb/gadget/function/f_fs.c 117 */;
	struct ffs_io_data *cocci_id/* drivers/usb/gadget/function/f_fs.c 1161 */;
	struct kiocb *cocci_id/* drivers/usb/gadget/function/f_fs.c 1159 */;
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 112 */(struct ffs_function *func, u8 intf);
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 111 */(struct ffs_function *func, u8 num);
	bool cocci_id/* drivers/usb/gadget/function/f_fs.c 1056 */;
	bool cocci_id/* drivers/usb/gadget/function/f_fs.c 104 */(struct usb_function *, const struct usb_ctrlrequest *, bool config0);
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 102 */(struct usb_function *, const struct usb_ctrlrequest *);
	void cocci_id/* drivers/usb/gadget/function/f_fs.c 101 */(struct usb_function *);
	int cocci_id/* drivers/usb/gadget/function/f_fs.c 100 */(struct usb_function *, unsigned, unsigned);
}
