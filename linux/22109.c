cocci_test_suite() {
	struct bunzip_data {
		int writeCopies,writePos,writeRunCountdown,writeCount,writeCurrent;
		long (*fill)(void *, unsigned long);
		long inbufCount,inbufPos;
		unsigned char *inbuf;
		unsigned int inbufBitCount,inbufBits;
		unsigned int crc32Table[256],headerCRC,totalCRC,writeCRC;
		unsigned int *dbuf,dbufSize;
		unsigned char selectors[32768];
		struct group_data groups[MAX_GROUPS];
		int io_error;
		int byteCount[256];
		unsigned char symToByte[256],mtfSymbol[256];
	} cocci_id/* lib/decompress_bunzip2.c 92 */;
	struct group_data {
		int limit[MAX_HUFCODE_BITS + 1];
		int base[MAX_HUFCODE_BITS];
		int permute[MAX_SYMBOLS];
		int minLen,maxLen;
	} cocci_id/* lib/decompress_bunzip2.c 82 */;
	void (*cocci_id/* lib/decompress_bunzip2.c 752 */)(char *x);
	long *cocci_id/* lib/decompress_bunzip2.c 751 */;
	long (*cocci_id/* lib/decompress_bunzip2.c 748 */)(void *,
							   unsigned long);
	unsigned char *cocci_id/* lib/decompress_bunzip2.c 747 */;
	long cocci_id/* lib/decompress_bunzip2.c 747 */;
	int
INIT
 cocci_id/* lib/decompress_bunzip2.c 747 */;
	int cocci_id/* lib/decompress_bunzip2.c 687 */;
	struct bunzip_data *cocci_id/* lib/decompress_bunzip2.c 686 */;
	struct bunzip_data cocci_id/* lib/decompress_bunzip2.c 639 */;
	const unsigned int cocci_id/* lib/decompress_bunzip2.c 634 */;
	struct bunzip_data **cocci_id/* lib/decompress_bunzip2.c 629 */;
	void *cocci_id/* lib/decompress_bunzip2.c 621 */;
	unsigned long cocci_id/* lib/decompress_bunzip2.c 621 */;
	long
INIT
 cocci_id/* lib/decompress_bunzip2.c 621 */;
	const unsigned int *cocci_id/* lib/decompress_bunzip2.c 525 */;
	char *cocci_id/* lib/decompress_bunzip2.c 523 */;
	unsigned cocci_id/* lib/decompress_bunzip2.c 249 */;
	unsigned char cocci_id/* lib/decompress_bunzip2.c 235 */[MAX_SYMBOLS];
	unsigned int *cocci_id/* lib/decompress_bunzip2.c 164 */;
	unsigned char cocci_id/* lib/decompress_bunzip2.c 163 */;
	int *cocci_id/* lib/decompress_bunzip2.c 159 */;
	struct group_data *cocci_id/* lib/decompress_bunzip2.c 158 */;
	unsigned int cocci_id/* lib/decompress_bunzip2.c 118 */;
	unsigned int
INIT
 cocci_id/* lib/decompress_bunzip2.c 116 */;
	char cocci_id/* lib/decompress_bunzip2.c 116 */;
}
