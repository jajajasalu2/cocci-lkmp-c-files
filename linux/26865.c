cocci_test_suite() {
	unsigned int *cocci_id/* fs/unicode/mkutf8data.c 89 */;
	unsigned short cocci_id/* fs/unicode/mkutf8data.c 80 */;
	char cocci_id/* fs/unicode/mkutf8data.c 56 */[LINESIZE];
	void **cocci_id/* fs/unicode/mkutf8data.c 537 */;
	struct node *cocci_id/* fs/unicode/mkutf8data.c 492 */;
	const char *cocci_id/* fs/unicode/mkutf8data.c 41 */;
	struct node {
		int index;
		int offset;
		int mark;
		int size;
		struct node *parent;
		void *left;
		void *right;
		unsigned char bitnum;
		unsigned char nextbyte;
		unsigned char leftnode;
		unsigned char rightnode;
		unsigned int keybits;
		unsigned int keymask;
	} cocci_id/* fs/unicode/mkutf8data.c 361 */;
	struct tree {
		void *root;
		int childnode;
		const char *type;
		unsigned int maxage;
		struct tree *next;
		int (*leaf_equal)(void *, void *);
		void (*leaf_print)(void *, int);
		int (*leaf_mark)(void *);
		int (*leaf_size)(void *);
		int *(*leaf_index)(struct tree *, void *);
		unsigned char *(*leaf_emit)(void *, unsigned char *);
		int leafindex[0x110000];
		int index;
	} cocci_id/* fs/unicode/mkutf8data.c 345 */;
	struct utf8cursor cocci_id/* fs/unicode/mkutf8data.c 3179 */;
	const unsigned char *cocci_id/* fs/unicode/mkutf8data.c 308 */;
	struct utf8cursor *cocci_id/* fs/unicode/mkutf8data.c 3057 */;
	struct utf8cursor {
		struct tree *tree;
		const char *s;
		const char *p;
		const char *ss;
		const char *sp;
		unsigned int len;
		unsigned int slen;
		short int ccc;
		short int nccc;
		unsigned int unichar;
		unsigned char hangul[UTF8HANGULLEAF];
	} cocci_id/* fs/unicode/mkutf8data.c 2966 */;
	ssize_t cocci_id/* fs/unicode/mkutf8data.c 2912 */;
	unsigned char cocci_id/* fs/unicode/mkutf8data.c 2808 */[UTF8HANGULLEAF];
	utf8leaf_t *cocci_id/* fs/unicode/mkutf8data.c 2805 */;
	int cocci_id/* fs/unicode/mkutf8data.c 2603 */(struct utf8cursor *);
	int cocci_id/* fs/unicode/mkutf8data.c 2602 */(struct utf8cursor *,
						       struct tree *,
						       const char *, size_t);
	int cocci_id/* fs/unicode/mkutf8data.c 2601 */(struct utf8cursor *,
						       struct tree *,
						       const char *);
	ssize_t cocci_id/* fs/unicode/mkutf8data.c 2599 */(struct tree *,
							   const char *,
							   size_t);
	ssize_t cocci_id/* fs/unicode/mkutf8data.c 2598 */(struct tree *,
							   const char *);
	int cocci_id/* fs/unicode/mkutf8data.c 2595 */(struct tree *,
						       const char *, size_t);
	int cocci_id/* fs/unicode/mkutf8data.c 2594 */(struct tree *,
						       const char *);
	unsigned int cocci_id/* fs/unicode/mkutf8data.c 2439 */[4];
	struct unicode_data cocci_id/* fs/unicode/mkutf8data.c 2334 */;
	char *cocci_id/* fs/unicode/mkutf8data.c 2312 */;
	unsigned int cocci_id/* fs/unicode/mkutf8data.c 2311 */[19];
	char cocci_id/* fs/unicode/mkutf8data.c 2182 */;
	char *cocci_id/* fs/unicode/mkutf8data.c 2105 */[];
	utf8trie_t *cocci_id/* fs/unicode/mkutf8data.c 197 */;
	size_t cocci_id/* fs/unicode/mkutf8data.c 195 */;
	int cocci_id/* fs/unicode/mkutf8data.c 1940 */;
	unsigned int cocci_id/* fs/unicode/mkutf8data.c 1934 */;
	FILE *cocci_id/* fs/unicode/mkutf8data.c 1933 */;
	void cocci_id/* fs/unicode/mkutf8data.c 1931 */;
	utf8leaf_t *cocci_id/* fs/unicode/mkutf8data.c 192 */(struct tree *,
							      unsigned char *,
							      const char *);
	utf8leaf_t *cocci_id/* fs/unicode/mkutf8data.c 190 */(struct tree *,
							      unsigned char *,
							      const char *,
							      size_t);
	struct tree cocci_id/* fs/unicode/mkutf8data.c 189 */;
	char cocci_id/* fs/unicode/mkutf8data.c 1686 */[4];
	char cocci_id/* fs/unicode/mkutf8data.c 1556 */[18 * 4 + 1];
	int *cocci_id/* fs/unicode/mkutf8data.c 1493 */;
	struct unicode_data *cocci_id/* fs/unicode/mkutf8data.c 1462 */;
	void *cocci_id/* fs/unicode/mkutf8data.c 1460 */;
	struct unicode_data cocci_id/* fs/unicode/mkutf8data.c 1350 */[0x110000];
	struct unicode_data {
		unsigned int code;
		int ccc;
		int gen;
		int correction;
		unsigned int *utf32nfdi;
		unsigned int *utf32nfdicf;
		char *utf8nfdi;
		char *utf8nfdicf;
	} cocci_id/* fs/unicode/mkutf8data.c 1339 */;
	unsigned char cocci_id/* fs/unicode/mkutf8data.c 1199 */;
	int cocci_id/* fs/unicode/mkutf8data.c 1198 */[4];
	struct tree *cocci_id/* fs/unicode/mkutf8data.c 1185 */;
	unsigned char *cocci_id/* fs/unicode/mkutf8data.c 1185 */;
}
