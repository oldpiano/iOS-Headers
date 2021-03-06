/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnection, ML3MusicLibrary, ML3SortMap, MLMediaLibraryServiceStatementAccumulator, NSDictionary;

@interface MLImportSession : NSObject
{
    ML3DatabaseConnection *_readerConnection;
    MLMediaLibraryServiceStatementAccumulator *_accumulator;
    ML3SortMap *_sortMap;
    struct unordered_map<long long, CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, CollectionPIDSet>>> collectionPIDSetForTrackPID;
    struct {
        unsigned int addCount;
        unsigned int updateCount;
        unsigned int deleteCount;
        double importStartTime;
    } _stats;
    int _sourceType;
    BOOL _rebuildIndexes;
    ML3MusicLibrary *_library;
    ML3DatabaseConnection *_connection;
    NSDictionary *_cachedNameOrders;
}

@property(nonatomic) BOOL rebuildIndexes; // @synthesize rebuildIndexes=_rebuildIndexes;
@property(retain, nonatomic) NSDictionary *cachedNameOrders; // @synthesize cachedNameOrders=_cachedNameOrders;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_populateNameOrderWithNameOrderForPIDMap:(unordered_map_856d47d1 *)arg1 tableName:(id)arg2 nameSQL:(id)arg3;
- (long long)_locationKindPIDForTrack:(id)arg1;
- (long long)_genrePIDWithSortableNames:(id)arg1 existingGenrePIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (long long)_composerPIDWithSortableNames:(id)arg1 existingComposerPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (long long)_albumPIDWithSortableNames:(id)arg1 albumArtistPID:(long long)arg2 existingAlbumStatesForGroupingIdentifiers:(id)arg3 groupingKeysForGroupingNames:(id)arg4 withConnection:(id)arg5 withTrack:(id)arg6;
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)arg1;
- (id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)arg1 groupingKeysForGroupingNames:(id)arg2 withTrack:(id)arg3;
- (long long)_albumArtistPIDWithSortableNames:(id)arg1 existingAlbumArtistPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (long long)_artistPIDWithSortableNames:(id)arg1 existingArtistPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (id)_insertIntoGenreSQL;
- (id)_insertIntoComposerSQL;
- (id)_insertIntoAlbumSQL;
- (id)_insertIntoAlbumArtistSQL;
- (id)_insertIntoItemArtistSQL;
- (id)_generateInsertionSQLWithInsertPart:(id)arg1 numberOfValues:(unsigned int)arg2;
- (id)_existingCollectionPIDsForTable:(id)arg1 groupingNames:(id)arg2 groupingKeysForGroupingNames:(id)arg3 withConnection:(id)arg4;
- (id)_genreGroupingNameFromDataSource:(id)arg1;
- (id)_composerGroupingNameFromDataSource:(id)arg1;
- (id)_albumArtistGroupingNameFromDataSource:(id)arg1;
- (id)_artistGroupingNameFromDataSource:(id)arg1;
- (BOOL)_shouldRebuildIndices;
- (long long)persistentIdentifierForItem:(id)arg1 existing:(char *)arg2;
- (BOOL)updateCollections;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (BOOL)finish;
- (BOOL)removeTrack:(id)arg1;
- (BOOL)prepareSortDataForTrack:(id)arg1;
- (BOOL)_updateTrackData:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)updateTrack:(id)arg1;
- (BOOL)addTrack:(id)arg1;
- (BOOL)begin;
- (CDStruct_bd6d074e)collectionPIDSetForTrackPID:(long long)arg1;
- (int)importLogLevel;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 onConnection:(id)arg2;

@end

