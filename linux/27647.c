cocci_test_suite() {
	unsigned char cocci_id/* fs/openpromfs/inode.c 55 */;
	unsigned char *cocci_id/* fs/openpromfs/inode.c 50 */;
	struct op_inode_info cocci_id/* fs/openpromfs/inode.c 47 */;
	void __exit cocci_id/* fs/openpromfs/inode.c 463 */;
	void cocci_id/* fs/openpromfs/inode.c 463 */;
	struct op_inode_info *cocci_id/* fs/openpromfs/inode.c 45 */;
	struct inode *cocci_id/* fs/openpromfs/inode.c 45 */;
	int cocci_id/* fs/openpromfs/inode.c 445 */;
	int __init cocci_id/* fs/openpromfs/inode.c 443 */;
	void *cocci_id/* fs/openpromfs/inode.c 436 */;
	struct inode *cocci_id/* fs/openpromfs/inode.c 43 */(struct super_block *sb,
							     ino_t ino);
	struct file_system_type cocci_id/* fs/openpromfs/inode.c 428 */;
	const struct fs_context_operations cocci_id/* fs/openpromfs/inode.c 418 */;
	struct fs_context *cocci_id/* fs/openpromfs/inode.c 379 */;
	const struct super_operations cocci_id/* fs/openpromfs/inode.c 372 */;
	struct op_inode_info {
		struct inode vfs_inode;
		enum op_inode_type type;
		union op_inode_data u;
	} cocci_id/* fs/openpromfs/inode.c 37 */;
	int *cocci_id/* fs/openpromfs/inode.c 365 */;
	char *cocci_id/* fs/openpromfs/inode.c 365 */;
	ino_t cocci_id/* fs/openpromfs/inode.c 346 */;
	struct super_block *cocci_id/* fs/openpromfs/inode.c 330 */;
	struct kmem_cache *cocci_id/* fs/openpromfs/inode.c 328 */;
	union op_inode_data {
		struct device_node *node;
		struct property *prop;
	} cocci_id/* fs/openpromfs/inode.c 32 */;
	enum op_inode_type{op_inode_node, op_inode_prop,} cocci_id/* fs/openpromfs/inode.c 27 */;
	struct file *cocci_id/* fs/openpromfs/inode.c 265 */;
	struct dir_context *cocci_id/* fs/openpromfs/inode.c 265 */;
	const char *cocci_id/* fs/openpromfs/inode.c 188 */;
	union op_inode_data cocci_id/* fs/openpromfs/inode.c 187 */;
	enum op_inode_type cocci_id/* fs/openpromfs/inode.c 186 */;
	struct property *cocci_id/* fs/openpromfs/inode.c 185 */;
	struct device_node *cocci_id/* fs/openpromfs/inode.c 184 */;
	struct dentry *cocci_id/* fs/openpromfs/inode.c 181 */;
	unsigned int cocci_id/* fs/openpromfs/inode.c 181 */;
	const struct inode_operations cocci_id/* fs/openpromfs/inode.c 177 */;
	struct dentry *cocci_id/* fs/openpromfs/inode.c 175 */(struct inode *,
							       struct dentry *,
							       unsigned int);
	const struct file_operations cocci_id/* fs/openpromfs/inode.c 169 */;
	int cocci_id/* fs/openpromfs/inode.c 167 */(struct file *,
						    struct dir_context *);
	const struct seq_operations cocci_id/* fs/openpromfs/inode.c 138 */;
	loff_t *cocci_id/* fs/openpromfs/inode.c 127 */;
	struct seq_file *cocci_id/* fs/openpromfs/inode.c 127 */;
	unsigned int *cocci_id/* fs/openpromfs/inode.c 107 */;
}
