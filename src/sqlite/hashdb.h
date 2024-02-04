#ifndef HASHDB_H
#define HASHDB_H

#include "../fdupes/fdupes.h"
#include <sqlite3.h>

sqlite3 *hashdb_open(const char *path);
int hashdb_close(sqlite3 *db);
int hashdb_begintransaction(sqlite3 *db);
int hashdb_committransaction(sqlite3 *db);
int hashdb_rollbacktransaction(sqlite3 *db);
int hashdb_vacuum(sqlite3 *db);
int hashdb_getdirectoryid(sqlite3 *db, const char *path, sqlite3_int64 *directoryid);
int hashdb_savedirectory(sqlite3 *db, const char *path);
int hashdb_deletedirectory(sqlite3 *db, sqlite3_int64 id);
int hashdb_cleardirectories(sqlite3 *db);
int hashdb_foreachdirectory(sqlite3 *db, const sqlite3_int64 *parentid, int (*callback)(const sqlite3_int64, const char*, const char*, const sqlite3_int64));
int hashdb_loadhash(sqlite3 *db, const file_t *entry, md5_byte_t **partialhash, md5_byte_t **fullhash);
int hashdb_savehash(sqlite3 *db, const file_t *entry, md5_byte_t *partialhash, md5_byte_t *fullhash);
int hashdb_foreachhash(sqlite3 *db, sqlite3_int64 *directoryid, int (*callback)(const sqlite3_int64, const char*, const char*));
int hashdb_deletehash(sqlite3 *db, sqlite3_int64 directoryid, const char *filename);
int hashdb_deletehashforpath(sqlite3 *db, const char *path);

#endif