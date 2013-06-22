/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFProtectedSQLiteConnection;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject
{
    MFProtectedSQLiteConnection *_connection;
    BOOL _writer;
    unsigned int _refcount;
}

+ (id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int refcount; // @synthesize refcount=_refcount;
@property(readonly, nonatomic) BOOL writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) MFProtectedSQLiteConnection *connection; // @synthesize connection=_connection;
- (unsigned int)decrementRefcount;
- (unsigned int)incrementRefcount;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2;

@end
