/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface ADAdSpecification : PBCodable
{
    struct {
        int *list;
        unsigned int count;
        unsigned int size;
    } _sizes;
    NSString *_section;
}

@property(retain, nonatomic) NSString *section; // @synthesize section=_section;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSection;
- (void)setSizes:(int *)arg1 count:(unsigned int)arg2;
- (int)sizeAtIndex:(unsigned int)arg1;
- (void)addSize:(int)arg1;
- (void)clearSizes;
@property(readonly, nonatomic) int *sizes;
@property(readonly, nonatomic) unsigned int sizesCount;
- (void)dealloc;

@end
