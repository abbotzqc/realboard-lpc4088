#include <dfs_romfs.h>

const static unsigned char _SD_README_txt[] = {
0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x74,0x68,0x65,0x20,0x72,0x6f,0x6f,0x74,
0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x6f,0x72,0x79,0x20,0x6f,0x66,0x20,0x72,0x6f,
0x6d,0x66,0x73,0x2e,0x20,0x0a,0x0a,
};

const static struct romfs_dirent _SD[] = {
	{ROMFS_DIRENT_FILE, "README.txt", _SD_README_txt, sizeof(_SD_README_txt)},
};

const static unsigned char _README_txt[] = {
0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x74,0x68,0x65,0x20,0x72,0x6f,0x6f,0x74,
0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x6f,0x72,0x79,0x20,0x6f,0x66,0x20,0x72,0x6f,
0x6d,0x66,0x73,0x2e,0x20,0x0a,0x0a,
};

const struct romfs_dirent _root_dirent[] = {
	{ROMFS_DIRENT_DIR, "SD", (rt_uint8_t*) _SD, sizeof(_SD)/sizeof(_SD[0])},
	{ROMFS_DIRENT_FILE, "README.txt", _README_txt, sizeof(_README_txt)},
};

const struct romfs_dirent romfs_root = {ROMFS_DIRENT_DIR, "/", (rt_uint8_t*) _root_dirent, sizeof(_root_dirent)/sizeof(_root_dirent[0])};
